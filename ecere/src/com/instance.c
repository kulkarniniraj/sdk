#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>
#include <string.h>

#if defined(__GNUC__) || defined(__WATCOMC__) || defined(__WIN32__)
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#endif

#if defined(__unix__) || defined(__APPLE__)
#define bool _bool
#include <utime.h>
#include <dlfcn.h>
#undef bool
#endif

#if defined(__WIN32__)
#define WIN32_LEAN_AND_MEAN
#define UNICODE
#include <windows.h>
#include <io.h>

#else
#include <unistd.h>
#endif

typedef int bool;
typedef unsigned char byte;
typedef unsigned short uint16;
typedef unsigned int uint;
typedef unsigned int FileSize;
typedef unsigned long long uint64;

#define false 0
#define true 1

#define null ((void *)0)

#define MAX_LOCATION 797
#define MAX_FILENAME 274
#define MAX_EXTENSION 17

void __ecereNameSpace__ecere__com__eSystem_Delete(void * memory);
void * __ecereNameSpace__ecere__com__eSystem_New0(unsigned int size);
void * __ecereNameSpace__ecere__com__eSystem_Renew(void * memory, unsigned int size);
void * __ecereNameSpace__ecere__com__eSystem_Renew0(void * memory, unsigned int size);
unsigned short * __ecereNameSpace__ecere__sys__UTF8toUTF16(char * source, int * wordCount);
unsigned short * __ecereNameSpace__ecere__sys__UTF8toUTF16Buffer(char * source, uint16 * dest, int max);
char * __ecereNameSpace__ecere__sys__UTF16toUTF8(uint16 * source);
char * __ecereNameSpace__ecere__sys__UTF16toUTF8Buffer(uint16 * source, byte * dest, int max);

#define eSystem_Delete     __ecereNameSpace__ecere__com__eSystem_Delete
#define eSystem_New0       __ecereNameSpace__ecere__com__eSystem_New0
#define eSystem_Renew      __ecereNameSpace__ecere__com__eSystem_Renew
#define eSystem_Renew0     __ecereNameSpace__ecere__com__eSystem_Renew0
#define UTF8toUTF16        __ecereNameSpace__ecere__sys__UTF8toUTF16
#define UTF8toUTF16Buffer  __ecereNameSpace__ecere__sys__UTF8toUTF16Buffer
#define UTF16toUTF8        __ecereNameSpace__ecere__sys__UTF16toUTF8
#define UTF16toUTF8Buffer  __ecereNameSpace__ecere__sys__UTF16toUTF8Buffer

#if defined(__unix__)
static char exeLocation[MAX_LOCATION];
#endif

int __ecereNameSpace__ecere__sys__Tokenize(char * string, int maxTokens, char* tokens[], bool escapeBackSlashes);
char * __ecereNameSpace__ecere__sys__RSearchString(char * buffer, char * subStr, int maxLen, bool matchCase, bool matchWord);
char * __ecereNameSpace__ecere__sys__GetLastDirectory(char * string, char * output);
char * __ecereNameSpace__ecere__sys__PathCat(char * string, char * addedPath);
char * __ecereNameSpace__ecere__sys__GetExtension(char * string, char * output);

#define Tokenize           __ecereNameSpace__ecere__sys__Tokenize
#define RSearchString      __ecereNameSpace__ecere__sys__RSearchString
#define GetLastDirectory   __ecereNameSpace__ecere__sys__GetLastDirectory
#define PathCat            __ecereNameSpace__ecere__sys__PathCat
#define GetExtension       __ecereNameSpace__ecere__sys__GetExtension

extern struct __ecereNameSpace__ecere__com__Instance * __thisModule;

typedef enum { unknown, win32, tux, apple } Platform;

#if defined(__WIN32__)
Platform runtimePlatform = win32;
#elif defined(__APPLE__)
Platform runtimePlatform = apple;
#elif defined(__linux__)
Platform runtimePlatform = tux;
#else
Platform runtimePlatform = unknown;
#endif

bool Instance_LocateModule(char * name, char * fileName)
{
#if defined(__WIN32__)
   HMODULE hModule = null;
   if(name && name[0])
   {
      uint16 _wmoduleName[MAX_LOCATION];
      UTF8toUTF16Buffer(name, _wmoduleName, MAX_LOCATION);
      hModule = GetModuleHandle(_wmoduleName);
      if(!hModule)
      {
         wcscat(_wmoduleName, L".exe");
         hModule = GetModuleHandle(_wmoduleName);
      }
      if(hModule)
      {
         uint16 _wfileName[MAX_LOCATION];
         GetModuleFileNameW(hModule, _wfileName, MAX_LOCATION);
         UTF16toUTF8Buffer(_wfileName, (byte *)fileName, MAX_LOCATION);
         return true;
      }
   }
   else
   {
      uint16 _wfileName[MAX_LOCATION];
      GetModuleFileNameW(null, _wfileName, MAX_LOCATION);
      UTF16toUTF8Buffer(_wfileName, (byte *)fileName, MAX_LOCATION);
      return true;
   }
#elif defined(__APPLE__)
   if(name && name[0])
   {
      int imageCount = _dyld_image_count();
      int c;
      int nameLen = strlen(name);
      for(c = 0; c<imageCount; c++)
      {
         struct mach_header * header = _dyld_get_image_header(c);
         char * path = _dyld_get_image_name(c);
         int pathLen = strlen(path);
         char * subStr = RSearchString(path, name, pathLen, false, false);
         if(subStr)
         {
            if(( *(subStr-1) == '/' || !strncmp(subStr - 4, "/lib", 4)) &&
               (!subStr[nameLen] || !strncmp(subStr + nameLen, ".dylib", 6)))
            {
               strcpy(fileName, path);
               return true;
            }
         }
      }
   }
   else
   {
      int size = MAX_LOCATION;
      _NSGetExecutablePath(fileName, &size);
      return true;
   }
#elif defined(__unix__)
   //File f = FileOpen("/proc/self/maps", read);
   FILE * f;
   char exeName[MAX_FILENAME];
   exeName[0] = 0;
#if defined(__linux__)
   f = fopen("/proc/self/status", "r");
#else
   f = fopen("/proc/curproc/status", "r");
#endif
   if(f)
   {
      char line[1025];
      while(fgets(line, sizeof(line), f))
      {
         char * name = strstr(line, "Name:\t");
         if(name)
         {
            int nameLen;
            name += 6;
            nameLen = strlen(name);
            name[--nameLen] = 0;
            strcpy(exeName, name);
            break;
         }
      }
      fclose(f);
  }
#if defined(__linux__)
   f = fopen("/proc/self/maps", "r");
#else
   f = fopen("/proc/curproc/map", "r");
#endif
   if(f)
   {
      char line[1025];
      //while(f.GetLine(line, sizeof(line)))
      while(fgets(line, sizeof(line), f))
      {
         char * path = strstr(line, "/");
         if(path)
         {
            int pathLen = strlen(path);
            path[--pathLen] = 0;
            if(name && name[0])
            {
               int nameLen = strlen(name);
               char * subStr;
               subStr = RSearchString(path, name, pathLen, false, false);
               if(subStr)
               {
                  if(( *(subStr-1) == '/' || !strncmp(subStr - 4, "/lib", 4)) &&
                     (!subStr[nameLen] || !strncmp(subStr + nameLen, ".so", 3)))
                  {
                     char * space = strchr(path, ' ');
                     if(space) *space = 0;
                     strcpy(fileName, path);
                     fclose(f);
                     return true;
                  }
               }
            }
            else
            {
               char name[MAX_FILENAME];
               GetLastDirectory(path, name);
               if(!exeName[0] || !strcmp(name, exeName))
               {
                  char * space = strchr(path, ' ');
                  if(space) *space = 0;
                  strcpy(fileName, path);
                  fclose(f);
                  return true;
               }
            }
         }
      }
      fclose(f);
   }
   if(!name || !name[0])
   {
      strcpy(fileName, exeLocation);
      return true;
   }
#endif
   return false;
}

void Instance_COM_Initialize(int argc, char ** argv, char ** parsedCommand, int * argcPtr, char *** argvPtr)
{
#if !defined(__WIN32__)
   // Disable stdout buffering on Unix
   setvbuf(stdout, null, _IONBF, 0);
#endif
#if defined(__WIN32__)
   *parsedCommand = UTF16toUTF8(GetCommandLineW());
   *argvPtr = eSystem_New0(sizeof(char *) * 512);
   *argcPtr = Tokenize(*parsedCommand, 512,(void*)(char **)(*argvPtr), false);
#else
   *argcPtr = argc;
   *argvPtr = argv;
#endif
#if defined(__unix__)
   if(!__thisModule && argv)
   {
      getcwd(exeLocation, MAX_LOCATION);
      PathCat(exeLocation, argv[0]);
   }
#endif
}

void * Instance_Module_Load(char * name, void ** Load, void ** Unload)
{
   char fileName[MAX_LOCATION];
   char extension[MAX_EXTENSION];
   void * library = null;

   *Load = null;
   *Unload = null;

#if defined(__WIN32__)
   strcpy(fileName, name);
   GetExtension(fileName, extension);
   if(!extension[0])
      strcat(fileName, ".dll");

   {
      uint16 _wfileName[MAX_LOCATION];
      UTF8toUTF16Buffer(fileName, _wfileName, MAX_LOCATION);
      library = LoadLibraryW(_wfileName);
   }
   if(library)
   {
      *Load = (void *)GetProcAddress(library, "__ecereDll_Load@4");
      *Unload = (void *)GetProcAddress(library, "__ecereDll_Unload@4");
      if(!*Load)
         FreeLibrary(library);
   }
#elif defined(__unix__) || defined(__APPLE__)
   strcpy(fileName, "lib");
   strcat(fileName, name);
   GetExtension(fileName, extension);
   if(!extension[0])
#if defined(__APPLE__)
      strcat(fileName, ".dylib");
#else
      strcat(fileName, ".so");
#endif

   library = dlopen(fileName, RTLD_LAZY);
   if(!library)
   {
#ifdef DEB_HOST_MULTIARCH
      strcpy(fileName, DEB_HOST_MULTIARCH);
      strcat(fileName, "/ec/lib");
#else
      strcpy(fileName, "/usr/lib/ec/lib");
#endif
      strcat(fileName, name);
      GetExtension(fileName, extension);
      if(!extension[0])
#if defined(__APPLE__)
         strcat(fileName, ".dylib");
#else
         strcat(fileName, ".so");
#endif
      library = dlopen(fileName, RTLD_LAZY);
   }

   if(library)
   {
      *Load = dlsym(library, "__ecereDll_Load");
      *Unload = dlsym(library, "__ecereDll_Unload");
      if(!*Load)
         dlclose(library);
   }
#elif defined(__APPLE__)
   strcpy(fileName, "lib");
   strcat(fileName, name);
   GetExtension(fileName, extension);
   if(!extension[0])
      strcat(fileName, ".dylib");
   {
      NSObjectFileImage *fileImage;
      NSObjectFileImageReturnCode returnCode = NSCreateObjectFileImageFromFile(fileName, &fileImage);

      if(returnCode == NSObjectFileImageSuccess)
      {
         printf("NSObjectFileImageSuccess!\n");
         library = NSLinkModule(fileImage,fileName, 
              NSLINKMODULE_OPTION_RETURN_ON_ERROR
            | NSLINKMODULE_OPTION_PRIVATE);
         // NSDestroyObjectFileImage(fileImage);
         if(library)
         {
            *Load = NSAddressOfSymbol(NSLookupSymbolInModule(library, "__ecereDll_Load")); 
            *Unload = NSAddressOfSymbol(NSLookupSymbolInModule(library, "__ecereDll_Unload"));
            if(!*Load)
            {
               NSUnLinkModule(library, 0);
            }
            else
               printf("Found Load!\n");
         }
      }
      else
         printf("No Success :(\n");
   }
#endif
   return library;
}

void Instance_Module_Free(void * library)
{
#if defined(__WIN32__)
   if(library)
      FreeLibrary(library);
#elif defined(__unix__) || defined(__APPLE__)
   if(library)
      dlclose(library);
#endif
}
