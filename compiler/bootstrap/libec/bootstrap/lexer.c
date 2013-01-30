#if defined(__GNUC__)
typedef long long int64;
typedef unsigned long long uint64;
#elif defined(__TINYC__)
#include <stdarg.h>
#define __builtin_va_list va_list
#define __builtin_va_start va_start
#define __builtin_va_end va_end
#ifdef _WIN32
#define strcasecmp stricmp
#define strncasecmp strnicmp
#define __declspec(x) __attribute__((x))
#endif
typedef long long int64;
typedef unsigned long long uint64;
#else
typedef __int64 int64;
typedef unsigned __int64 uint64;
#endif
#ifdef __BIG_ENDIAN__
#define __ENDIAN_PAD(x) (8 - (x))
#else
#define __ENDIAN_PAD(x) 0
#endif
extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__BTNode;

struct __ecereNameSpace__ecere__sys__BTNode;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__BinaryTree;

struct __ecereNameSpace__ecere__sys__BinaryTree
{
struct __ecereNameSpace__ecere__sys__BTNode * root;
int count;
int (*  CompareKey)(struct __ecereNameSpace__ecere__sys__BinaryTree * tree, unsigned int a, unsigned int b);
void (*  FreeKey)(void *  key);
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__sys__OldList;

struct __ecereNameSpace__ecere__sys__OldList
{
void *  first;
void *  last;
int count;
unsigned int offset;
unsigned int circ;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Method;

struct __ecereNameSpace__ecere__com__Method
{
char *  name;
struct __ecereNameSpace__ecere__com__Method * parent;
struct __ecereNameSpace__ecere__com__Method * left;
struct __ecereNameSpace__ecere__com__Method * right;
int depth;
int (*  function)();
int vid;
int type;
struct __ecereNameSpace__ecere__com__Class * _class;
void *  symbol;
char *  dataTypeString;
struct Type * dataType;
int memberAccess;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Property;

struct __ecereNameSpace__ecere__com__Property
{
struct __ecereNameSpace__ecere__com__Property * prev;
struct __ecereNameSpace__ecere__com__Property * next;
char *  name;
unsigned int isProperty;
int memberAccess;
int id;
struct __ecereNameSpace__ecere__com__Class * _class;
char *  dataTypeString;
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;
struct Type * dataType;
void (*  Set)();
int (*  Get)();
unsigned int (*  IsSet)();
void *  data;
void *  symbol;
int vid;
unsigned int conversion;
unsigned int watcherOffset;
char *  category;
unsigned int compiled;
unsigned int selfWatchable;
unsigned int isWatchable;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_CodePosition;

struct CodePosition
{
int line;
int charPos;
int pos;
unsigned int included;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Location;

struct Location
{
struct CodePosition start;
struct CodePosition end;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_ClassDefinition;

struct ClassDefinition;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Context;

struct Context;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Instantiation;

struct Instantiation;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Declaration;

struct Declaration;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Statement;

struct Statement;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_TypeName;

struct TypeName;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Initializer;

struct Initializer;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__DataValue;

struct __ecereNameSpace__ecere__com__DataValue
{
union
{
char c;
unsigned char uc;
short s;
unsigned short us;
int i;
unsigned int ui;
void *  p;
float f;
double d;
long long i64;
uint64 ui64;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Expression;

struct Expression;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_TemplateDatatype;

struct TemplateDatatype;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_TemplateArgument;

struct TemplateArgument;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_TemplateParameter;

struct TemplateParameter;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Specifier;

struct Specifier;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Identifier;

struct Identifier;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Pointer;

struct Pointer;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Declarator;

struct Declarator;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_FunctionDefinition;

struct FunctionDefinition;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_DBTableDef;

struct DBTableDef;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_External;

struct External;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_ModuleImport;

struct ModuleImport;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_ClassImport;

struct ClassImport;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Symbol;

struct Symbol;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Type;

struct Type;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Class;

struct __ecereNameSpace__ecere__com__Class
{
struct __ecereNameSpace__ecere__com__Class * prev;
struct __ecereNameSpace__ecere__com__Class * next;
char *  name;
int offset;
int structSize;
int (* *  _vTbl)();
int vTblSize;
int (*  Constructor)(struct __ecereNameSpace__ecere__com__Instance *);
void (*  Destructor)(struct __ecereNameSpace__ecere__com__Instance *);
int offsetClass;
int sizeClass;
struct __ecereNameSpace__ecere__com__Class * base;
struct __ecereNameSpace__ecere__sys__BinaryTree methods;
struct __ecereNameSpace__ecere__sys__BinaryTree members;
struct __ecereNameSpace__ecere__sys__BinaryTree prop;
struct __ecereNameSpace__ecere__sys__OldList membersAndProperties;
struct __ecereNameSpace__ecere__sys__BinaryTree classProperties;
struct __ecereNameSpace__ecere__sys__OldList derivatives;
int memberID;
int startMemberID;
int type;
struct __ecereNameSpace__ecere__com__Instance * module;
struct __ecereNameSpace__ecere__com__NameSpace *  nameSpace;
char *  dataTypeString;
struct Type * dataType;
int typeSize;
int defaultAlignment;
void (*  Initialize)();
int memberOffset;
struct __ecereNameSpace__ecere__sys__OldList selfWatchers;
char *  designerClass;
unsigned int noExpansion;
char *  defaultProperty;
unsigned int comRedefinition;
int count;
unsigned int isRemote;
unsigned int internalDecl;
void *  data;
unsigned int computeSize;
int structAlignment;
int destructionWatchOffset;
unsigned int fixed;
struct __ecereNameSpace__ecere__sys__OldList delayedCPValues;
int inheritanceAccess;
char *  fullName;
void *  symbol;
struct __ecereNameSpace__ecere__sys__OldList conversions;
struct __ecereNameSpace__ecere__sys__OldList templateParams;
struct __ecereNameSpace__ecere__com__ClassTemplateArgument *  templateArgs;
struct __ecereNameSpace__ecere__com__Class * templateClass;
struct __ecereNameSpace__ecere__sys__OldList templatized;
int numParams;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Instance;

struct __ecereNameSpace__ecere__com__Instance
{
int (* *  _vTbl)();
struct __ecereNameSpace__ecere__com__Class * _class;
int _refCount;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__DataMember;

struct __ecereNameSpace__ecere__com__DataMember
{
struct __ecereNameSpace__ecere__com__DataMember * prev;
struct __ecereNameSpace__ecere__com__DataMember * next;
char *  name;
unsigned int isProperty;
int memberAccess;
int id;
struct __ecereNameSpace__ecere__com__Class * _class;
char *  dataTypeString;
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;
struct Type * dataType;
int type;
int offset;
int memberID;
struct __ecereNameSpace__ecere__sys__OldList members;
struct __ecereNameSpace__ecere__sys__BinaryTree membersAlpha;
int memberOffset;
int structAlignment;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__SerialBuffer;

struct __ecereNameSpace__ecere__com__SerialBuffer
{
unsigned char *  _buffer;
unsigned int count;
unsigned int _size;
unsigned int pos;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__ClassTemplateArgument;

struct __ecereNameSpace__ecere__com__ClassTemplateArgument
{
union
{
struct
{
char *  dataTypeString;
struct __ecereNameSpace__ecere__com__Class * dataTypeClass;
} __attribute__ ((gcc_struct));
struct __ecereNameSpace__ecere__com__DataValue expression;
struct
{
char *  memberString;
union
{
struct __ecereNameSpace__ecere__com__DataMember * member;
struct __ecereNameSpace__ecere__com__Property * prop;
struct __ecereNameSpace__ecere__com__Method * method;
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));
} __attribute__ ((gcc_struct));

typedef unsigned int size_t;

void exit(int status);

void * calloc(size_t nmemb, size_t size);

void free(void * ptr);

void * malloc(size_t size);

void * realloc(void * ptr, size_t size);

long int strtol(const char * nptr, char ** endptr, int base);

long long int strtoll(const char * nptr, char ** endptr, int base);

unsigned long long int strtoull(const char * nptr, char ** endptr, int base);

typedef __builtin_va_list __gnuc_va_list;

typedef __gnuc_va_list va_list;

typedef void FILE;

FILE * bsl_stdin(void);

FILE * bsl_stdout(void);

FILE * bsl_stderr(void);

char * fgets(char * s, int size, FILE * stream);

FILE * fopen(const char * path, const char * mode);

int fclose(FILE * fp);

int fflush(FILE * stream);

int fgetc(FILE * stream);

int fprintf(FILE * stream, const char * format, ...);

int fputc(int c, FILE * stream);

size_t fread(void * ptr, size_t size, size_t nmemb, FILE * stream);

size_t fwrite(const void * ptr, size_t size, size_t nmemb, FILE * stream);

int fseek(FILE * stream, long offset, int whence);

long ftell(FILE * stream);

int feof(FILE * stream);

int ferror(FILE * stream);

int fileno(FILE * stream);

typedef struct yy_buffer_state * YY_BUFFER_STATE;

extern int yyleng;

extern FILE * yyin, * yyout;

typedef unsigned int yy_size_t;

struct yy_buffer_state
{
FILE * yy_input_file;
char * yy_ch_buf;
char * yy_buf_pos;
yy_size_t yy_buf_size;
int yy_n_chars;
int yy_is_our_buffer;
int yy_is_interactive;
int yy_at_bol;
int yy_fill_buffer;
int yy_buffer_status;
} __attribute__ ((gcc_struct));

static struct __ecereNameSpace__ecere__com__Class * __ecereClass_yy_buffer_state;

static YY_BUFFER_STATE yy_current_buffer = 0;

static char yy_hold_char;

static int yy_n_chars;

int yyleng;

static char * yy_c_buf_p = (char *)0;

static int yy_init = 1;

static int yy_start = 0;

static int yy_did_buffer_switch_on_eof;

void yyrestart(FILE * input_file);

void yy_switch_to_buffer(YY_BUFFER_STATE new_buffer);

void yy_load_buffer_state(void);

YY_BUFFER_STATE yy_create_buffer(FILE * file, int size);

void yy_delete_buffer(YY_BUFFER_STATE b);

void yy_init_buffer(YY_BUFFER_STATE b, FILE * file);

void yy_flush_buffer(YY_BUFFER_STATE b);

YY_BUFFER_STATE yy_scan_buffer(char * base, yy_size_t size);

YY_BUFFER_STATE yy_scan_string(const char * yy_str);

YY_BUFFER_STATE yy_scan_bytes(const char * bytes, int len);

static void * yy_flex_alloc(yy_size_t);

static void * yy_flex_realloc(void *, yy_size_t);

static void yy_flex_free(void *);

typedef unsigned char YY_CHAR;

FILE * yyin = (FILE *)0, * yyout = (FILE *)0;

typedef int yy_state_type;

extern char * yytext;

static yy_state_type yy_get_previous_state(void);

static yy_state_type yy_try_NUL_trans(yy_state_type current_state);

static int yy_get_next_buffer(void);

static void yy_fatal_error(const char msg[]);

static const short int yy_accept[737] = 
{
(short)0, (short)104, (short)104, (short)165, (short)163, (short)162, (short)161, (short)160, (short)147, (short)163, (short)1, (short)159, (short)153, (short)146, (short)163, (short)141, (short)142, (short)151, (short)150, (short)138, (short)149, (short)145, (short)152, (short)107, (short)107, (short)139, (short)135, (short)154, (short)140, (short)155, (short)158, (short)104, (short)104, (short)143, (short)144, (short)156, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)136, (short)157, (short)137, (short)148, (short)134, (short)0, (short)112, (short)0, (short)120, (short)137, (short)129, (short)121, (short)0, (short)0, (short)118, (short)126, (short)116, (short)127, (short)117, (short)128, (short)0, (short)110, (short)2, (short)3, (short)119, (short)111, (short)106, (short)0, (short)107, (short)0, (short)107, (short)104, (short)144, (short)136, (short)143, (short)125, (short)131, (short)133, (short)132, (short)124, (short)0, (short)104, (short)0, (short)0, (short)0, (short)122, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)11, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)19, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)123, (short)130, (short)108, (short)113, (short)0, (short)110, (short)110, (short)0, (short)111, (short)106, (short)0, (short)109, (short)105, (short)104, (short)115, (short)114, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)84, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)17, (short)42, (short)104, (short)104, (short)104, (short)104, (short)20, (short)104, (short)104, (short)104, (short)48, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)41, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)0, (short)110, (short)0, (short)110, (short)0, (short)111, (short)109, (short)105, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)4, (short)104, (short)6, (short)7, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)13, (short)14, (short)104, (short)104, (short)104, (short)18, (short)104, (short)104, (short)104, (short)104, (short)104, (short)22, (short)104, (short)49, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)21, (short)104, (short)104, (short)104, (short)35, (short)104, (short)104, (short)104, (short)0, (short)110, (short)85, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)5, (short)44, (short)8, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)16, (short)104, (short)104, (short)104, (short)55, (short)43, (short)104, (short)104, (short)104, (short)104, (short)104, (short)50, (short)104, (short)25, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)33, (short)104, (short)104, (short)104, (short)87, (short)39, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)53, (short)47, (short)104, (short)104, (short)12, (short)15, (short)104, (short)52, (short)80, (short)64, (short)104, (short)104, (short)104, (short)76, (short)104, (short)51, (short)24, (short)26, (short)28, (short)29, (short)104, (short)104, (short)30, (short)104, (short)31, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)83, (short)104, (short)104, (short)68, (short)74, (short)104, (short)104, (short)104, (short)54, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)62, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)101, (short)102, (short)100, (short)10, (short)104, (short)104, (short)104, (short)104, (short)77, (short)104, (short)104, (short)72, (short)104, (short)104, (short)104, (short)104, (short)32, (short)104, (short)46, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)63, (short)104, (short)104, (short)104, (short)86, (short)104, (short)104, (short)71, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)9, (short)104, (short)104, (short)104, (short)104, (short)104, (short)40, (short)23, (short)104, (short)98, (short)104, (short)104, (short)34, (short)36, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)69, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)66, (short)67, (short)104, (short)99, (short)104, (short)104, (short)45, (short)104, (short)90, (short)104, (short)104, (short)104, (short)104, (short)61, (short)73, (short)27, (short)104, (short)38, (short)104, (short)79, (short)96, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)0, (short)104, (short)104, (short)70, (short)104, (short)82, (short)104, (short)104, (short)93, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)0, (short)0, (short)104, (short)104, (short)65, (short)0, (short)104, (short)75, (short)37, (short)104, (short)104, (short)104, (short)104, (short)104, (short)89, (short)104, (short)88, (short)78, (short)0, (short)104, (short)104, (short)104, (short)81, (short)104, (short)104, (short)104, (short)104, (short)103, (short)104, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)104, (short)104, (short)104, (short)104, (short)91, (short)104, (short)97, (short)104, (short)0, (short)0, (short)0, (short)0, (short)60, (short)0, (short)0, (short)0, (short)0, (short)0, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)104, (short)57, (short)104, (short)104, (short)104, (short)104, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)59, (short)0, (short)0, (short)0, (short)0, (short)104, (short)56, (short)104, (short)104, (short)95, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)104, (short)104, (short)92, (short)0, (short)0, (short)0, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)104, (short)94, (short)104, (short)104, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)58, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0, (short)0
};

static const int yy_ec[256] = 
{
0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 22, 22, 23, 22, 24, 22, 22, 22, 25, 26, 27, 28, 29, 30, 1, 31, 31, 31, 31, 32, 33, 34, 34, 34, 34, 34, 35, 34, 34, 34, 34, 34, 34, 34, 34, 36, 34, 34, 37, 34, 34, 38, 39, 40, 41, 42, 1, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 34, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
};

static const int yy_meta[72] = 
{
0, 1, 1, 1, 1, 2, 1, 3, 1, 1, 1, 4, 5, 6, 7, 1, 1, 2, 1, 1, 1, 8, 8, 8, 8, 4, 1, 1, 1, 1, 1, 9, 9, 9, 10, 10, 10, 10, 1, 1, 1, 1, 10, 9, 9, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 1, 1, 1, 1
};

static const short int yy_base[763] = 
{
(short)0, (short)0, (short)0, (short)329, (short)2592, (short)2592, (short)2592, (short)2592, (short)290, (short)65, (short)2592, (short)2592, (short)45, (short)64, (short)275, (short)2592, (short)2592, (short)278, (short)60, (short)2592, (short)61, (short)59, (short)71, (short)86, (short)133, (short)68, (short)2592, (short)75, (short)258, (short)66, (short)2592, (short)73, (short)104, (short)2592, (short)2592, (short)257, (short)102, (short)76, (short)101, (short)120, (short)139, (short)136, (short)148, (short)147, (short)160, (short)109, (short)164, (short)117, (short)156, (short)187, (short)189, (short)202, (short)199, (short)211, (short)2592, (short)68, (short)2592, (short)2592, (short)2592, (short)107, (short)2592, (short)276, (short)2592, (short)2592, (short)2592, (short)2592, (short)179, (short)127, (short)2592, (short)2592, (short)2592, (short)2592, (short)2592, (short)2592, (short)228, (short)241, (short)2592, (short)2592, (short)2592, (short)245, (short)281, (short)207, (short)236, (short)0, (short)0, (short)0, (short)2592, (short)2592, (short)2592, (short)214, (short)2592, (short)2592, (short)2592, (short)204, (short)192, (short)208, (short)181, (short)202, (short)158, (short)2592, (short)333, (short)210, (short)235, (short)259, (short)215, (short)232, (short)271, (short)272, (short)234, (short)290, (short)296, (short)297, (short)298, (short)299, (short)300, (short)301, (short)320, (short)326, (short)327, (short)338, (short)316, (short)331, (short)346, (short)356, (short)358, (short)362, (short)379, (short)384, (short)386, (short)387, (short)389, (short)390, (short)391, (short)395, (short)402, (short)396, (short)399, (short)411, (short)407, (short)415, (short)422, (short)424, (short)430, (short)451, (short)454, (short)456, (short)457, (short)458, (short)459, (short)2592, (short)2592, (short)2592, (short)2592, (short)469, (short)2592, (short)499, (short)478, (short)2592, (short)462, (short)504, (short)515, (short)505, (short)0, (short)2592, (short)2592, (short)0, (short)484, (short)492, (short)518, (short)524, (short)493, (short)531, (short)541, (short)540, (short)549, (short)551, (short)557, (short)559, (short)561, (short)567, (short)461, (short)568, (short)569, (short)570, (short)572, (short)574, (short)578, (short)579, (short)585, (short)589, (short)594, (short)605, (short)595, (short)610, (short)615, (short)616, (short)618, (short)621, (short)622, (short)633, (short)639, (short)640, (short)641, (short)642, (short)649, (short)659, (short)661, (short)664, (short)666, (short)667, (short)669, (short)668, (short)670, (short)671, (short)672, (short)677, (short)676, (short)692, (short)693, (short)694, (short)695, (short)696, (short)701, (short)702, (short)705, (short)711, (short)718, (short)722, (short)723, (short)724, (short)726, (short)729, (short)728, (short)730, (short)734, (short)733, (short)750, (short)741, (short)770, (short)750, (short)2592, (short)774, (short)778, (short)2592, (short)752, (short)0, (short)796, (short)797, (short)798, (short)804, (short)806, (short)805, (short)809, (short)808, (short)814, (short)816, (short)817, (short)824, (short)825, (short)826, (short)832, (short)833, (short)837, (short)835, (short)852, (short)853, (short)856, (short)860, (short)861, (short)862, (short)863, (short)878, (short)879, (short)882, (short)880, (short)883, (short)884, (short)885, (short)886, (short)887, (short)890, (short)888, (short)891, (short)906, (short)907, (short)908, (short)909, (short)914, (short)916, (short)918, (short)924, (short)925, (short)927, (short)937, (short)942, (short)945, (short)943, (short)947, (short)950, (short)953, (short)955, (short)966, (short)968, (short)971, (short)970, (short)976, (short)974, (short)978, (short)981, (short)991, (short)997, (short)993, (short)1000, (short)1001, (short)1009, (short)1018, (short)1019, (short)1020, (short)1021, (short)1022, (short)1027, (short)1031, (short)1045, (short)1048, (short)1049, (short)1050, (short)1051, (short)1052, (short)1057, (short)1061, (short)1067, (short)1072, (short)1073, (short)1077, (short)1083, (short)1085, (short)1088, (short)1089, (short)1094, (short)1090, (short)1098, (short)1106, (short)1107, (short)1110, (short)1113, (short)1114, (short)1115, (short)1116, (short)1125, (short)1135, (short)1136, (short)1132, (short)1138, (short)1140, (short)1142, (short)1148, (short)1144, (short)1147, (short)1153, (short)1160, (short)1163, (short)1164, (short)1169, (short)1170, (short)1175, (short)1181, (short)1186, (short)1188, (short)1192, (short)1191, (short)1193, (short)1194, (short)1199, (short)1203, (short)1210, (short)1204, (short)1211, (short)1212, (short)1221, (short)1227, (short)1230, (short)1234, (short)1238, (short)1245, (short)1239, (short)1247, (short)1255, (short)1260, (short)1262, (short)1266, (short)1267, (short)1273, (short)1268, (short)1275, (short)1278, (short)1277, (short)1283, (short)1284, (short)1288, (short)1293, (short)1296, (short)1294, (short)1301, (short)1314, (short)1304, (short)1321, (short)1324, (short)1323, (short)1326, (short)1332, (short)1333, (short)1336, (short)1342, (short)1348, (short)1352, (short)1353, (short)1357, (short)1360, (short)1361, (short)1363, (short)1364, (short)1365, (short)1370, (short)1376, (short)1381, (short)1382, (short)1385, (short)1386, (short)1387, (short)1388, (short)1389, (short)1391, (short)1393, (short)1408, (short)1409, (short)1411, (short)1413, (short)1414, (short)1415, (short)1417, (short)1416, (short)1419, (short)1421, (short)1424, (short)1432, (short)1436, (short)1437, (short)1441, (short)1442, (short)1447, (short)1449, (short)1457, (short)1464, (short)1466, (short)1467, (short)1468, (short)1469, (short)1472, (short)1470, (short)1473, (short)1477, (short)1479, (short)1474, (short)1492, (short)1494, (short)1503, (short)1507, (short)1518, (short)1519, (short)1520, (short)1522, (short)1523, (short)1526, (short)1527, (short)1530, (short)1531, (short)1535, (short)1546, (short)1548, (short)1551, (short)1552, (short)1553, (short)1554, (short)1555, (short)1556, (short)1558, (short)1559, (short)1563, (short)1575, (short)1578, (short)1579, (short)1582, (short)1583, (short)1584, (short)1586, (short)1599, (short)1605, (short)1607, (short)1610, (short)1611, (short)1620, (short)1616, (short)1627, (short)1629, (short)1631, (short)1632, (short)1633, (short)1637, (short)1635, (short)1638, (short)1653, (short)1644, (short)1655, (short)1657, (short)1659, (short)1660, (short)1661, (short)1663, (short)1665, (short)1670, (short)1681, (short)1682, (short)1687, (short)1689, (short)1691, (short)1693, (short)1694, (short)1697, (short)1699, (short)1700, (short)1702, (short)1706, (short)1719, (short)1721, (short)1712, (short)1725, (short)1727, (short)1715, (short)1731, (short)1734, (short)1740, (short)1743, (short)1746, (short)1750, (short)1755, (short)1758, (short)1766, (short)1759, (short)1767, (short)1768, (short)1774, (short)1771, (short)1775, (short)1778, (short)1783, (short)1786, (short)1787, (short)1790, (short)1791, (short)1793, (short)1794, (short)1796, (short)1798, (short)1799, (short)1811, (short)1814, (short)1815, (short)1822, (short)1823, (short)1824, (short)1841, (short)1830, (short)174, (short)1826, (short)1842, (short)1832, (short)1850, (short)1851, (short)1852, (short)1860, (short)1869, (short)1870, (short)1871, (short)1875, (short)1876, (short)1877, (short)1878, (short)1879, (short)112, (short)171, (short)1887, (short)1882, (short)2592, (short)164, (short)1900, (short)1880, (short)1888, (short)1898, (short)1906, (short)1907, (short)1909, (short)1910, (short)1926, (short)1930, (short)1932, (short)1933, (short)1496, (short)1943, (short)1935, (short)1936, (short)1938, (short)1951, (short)1953, (short)1958, (short)1956, (short)1960, (short)1961, (short)1975, (short)1970, (short)127, (short)1986, (short)1991, (short)130, (short)111, (short)1984, (short)1986, (short)1990, (short)1991, (short)1995, (short)1996, (short)2002, (short)2006, (short)2018, (short)2019, (short)2020, (short)2033, (short)2592, (short)2038, (short)2043, (short)2048, (short)2053, (short)2059, (short)2015, (short)2019, (short)2058, (short)2060, (short)2064, (short)2066, (short)2073, (short)2079, (short)2081, (short)2083, (short)2087, (short)2089, (short)2094, (short)2100, (short)2107, (short)2117, (short)105, (short)2122, (short)2124, (short)2098, (short)2091, (short)2115, (short)2117, (short)2121, (short)2119, (short)2138, (short)2142, (short)2143, (short)2144, (short)2148, (short)2149, (short)2163, (short)2592, (short)2170, (short)2165, (short)2176, (short)2181, (short)2177, (short)2139, (short)2180, (short)2181, (short)2185, (short)2194, (short)2195, (short)2199, (short)2209, (short)2210, (short)2214, (short)2215, (short)2228, (short)2192, (short)2196, (short)2214, (short)2235, (short)2239, (short)2241, (short)2223, (short)2236, (short)2225, (short)2240, (short)2243, (short)2246, (short)2248, (short)2249, (short)2251, (short)2272, (short)239, (short)93, (short)2265, (short)2286, (short)2291, (short)63, (short)2293, (short)2304, (short)2297, (short)2299, (short)2310, (short)2314, (short)2592, (short)2320, (short)2315, (short)2325, (short)2330, (short)2331, (short)2335, (short)2336, (short)2341, (short)2346, (short)2351, (short)2352, (short)2357, (short)2359, (short)2367, (short)2372, (short)2592, (short)2389, (short)2399, (short)2406, (short)2409, (short)2410, (short)2413, (short)2415, (short)2419, (short)2428, (short)2437, (short)2446, (short)2455, (short)2464, (short)2473, (short)2482, (short)2491, (short)2500, (short)2509, (short)2518, (short)2527, (short)2536, (short)2545, (short)2554, (short)2563, (short)2572, (short)2581
};

static const short int yy_def[763] = 
{
(short)0, (short)736, (short)1, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)737, (short)736, (short)736, (short)736, (short)736, (short)738, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)739, (short)739, (short)736, (short)736, (short)736, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)736, (short)736, (short)736, (short)736, (short)736, (short)737, (short)736, (short)737, (short)736, (short)736, (short)736, (short)736, (short)738, (short)738, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)740, (short)24, (short)741, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)739, (short)736, (short)737, (short)738, (short)736, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)740, (short)742, (short)736, (short)736, (short)743, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)742, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)736, (short)736, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)744, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)736, (short)736, (short)739, (short)739, (short)736, (short)744, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)745, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)745, (short)746, (short)736, (short)747, (short)745, (short)736, (short)736, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)736, (short)746, (short)736, (short)748, (short)736, (short)747, (short)749, (short)747, (short)736, (short)750, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)736, (short)748, (short)748, (short)736, (short)749, (short)736, (short)751, (short)736, (short)750, (short)752, (short)736, (short)753, (short)750, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)736, (short)751, (short)751, (short)736, (short)752, (short)736, (short)754, (short)736, (short)753, (short)755, (short)753, (short)736, (short)739, (short)739, (short)739, (short)739, (short)739, (short)736, (short)754, (short)754, (short)736, (short)755, (short)736, (short)756, (short)736, (short)739, (short)739, (short)739, (short)736, (short)756, (short)756, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)739, (short)736, (short)736, (short)757, (short)757, (short)758, (short)736, (short)759, (short)757, (short)736, (short)758, (short)736, (short)760, (short)736, (short)759, (short)761, (short)759, (short)736, (short)736, (short)760, (short)760, (short)736, (short)761, (short)736, (short)762, (short)736, (short)736, (short)762, (short)762, (short)0, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736
};

static const short int yy_nxt[2664] = 
{
(short)0, (short)4, (short)5, (short)6, (short)7, (short)7, (short)8, (short)9, (short)10, (short)11, (short)12, (short)13, (short)14, (short)15, (short)16, (short)17, (short)18, (short)19, (short)20, (short)21, (short)22, (short)23, (short)24, (short)24, (short)24, (short)25, (short)26, (short)27, (short)28, (short)29, (short)30, (short)31, (short)31, (short)31, (short)31, (short)32, (short)31, (short)31, (short)33, (short)4, (short)34, (short)35, (short)36, (short)37, (short)38, (short)39, (short)40, (short)41, (short)42, (short)43, (short)31, (short)44, (short)31, (short)31, (short)45, (short)31, (short)46, (short)31, (short)47, (short)48, (short)49, (short)50, (short)51, (short)52, (short)53, (short)31, (short)31, (short)31, (short)54, (short)55, (short)56, (short)57, (short)60, (short)62, (short)63, (short)64, (short)69, (short)720, (short)74, (short)71, (short)75, (short)75, (short)75, (short)75, (short)94, (short)87, (short)76, (short)94, (short)70, (short)72, (short)73, (short)77, (short)65, (short)85, (short)92, (short)93, (short)149, (short)86, (short)96, (short)78, (short)88, (short)96, (short)89, (short)90, (short)61, (short)79, (short)710, (short)80, (short)80, (short)80, (short)80, (short)97, (short)94, (short)94, (short)60, (short)94, (short)98, (short)588, (short)81, (short)674, (short)94, (short)82, (short)82, (short)83, (short)641, (short)589, (short)96, (short)96, (short)94, (short)96, (short)736, (short)94, (short)104, (short)81, (short)96, (short)622, (short)105, (short)150, (short)106, (short)66, (short)82, (short)636, (short)96, (short)623, (short)100, (short)96, (short)61, (short)94, (short)82, (short)101, (short)94, (short)83, (short)79, (short)102, (short)84, (short)84, (short)84, (short)84, (short)94, (short)94, (short)107, (short)96, (short)103, (short)108, (short)96, (short)81, (short)129, (short)94, (short)82, (short)82, (short)109, (short)94, (short)96, (short)96, (short)110, (short)94, (short)132, (short)111, (short)592, (short)133, (short)81, (short)96, (short)112, (short)113, (short)606, (short)96, (short)114, (short)82, (short)592, (short)96, (short)117, (short)151, (short)118, (short)115, (short)123, (short)82, (short)116, (short)67, (short)94, (short)120, (short)94, (short)119, (short)121, (short)134, (short)124, (short)122, (short)165, (short)130, (short)125, (short)60, (short)94, (short)131, (short)96, (short)94, (short)96, (short)126, (short)127, (short)96, (short)67, (short)94, (short)128, (short)94, (short)94, (short)159, (short)96, (short)159, (short)94, (short)96, (short)160, (short)160, (short)160, (short)160, (short)164, (short)96, (short)135, (short)96, (short)96, (short)136, (short)137, (short)141, (short)96, (short)61, (short)163, (short)94, (short)708, (short)94, (short)94, (short)152, (short)138, (short)139, (short)145, (short)140, (short)709, (short)143, (short)147, (short)142, (short)146, (short)96, (short)144, (short)96, (short)96, (short)148, (short)75, (short)75, (short)75, (short)75, (short)155, (short)155, (short)155, (short)155, (short)94, (short)82, (short)82, (short)153, (short)154, (short)176, (short)154, (short)156, (short)157, (short)736, (short)157, (short)179, (short)94, (short)94, (short)96, (short)99, (short)91, (short)180, (short)153, (short)154, (short)82, (short)177, (short)156, (short)157, (short)183, (short)154, (short)96, (short)96, (short)82, (short)157, (short)79, (short)94, (short)80, (short)80, (short)80, (short)80, (short)68, (short)94, (short)94, (short)94, (short)94, (short)94, (short)94, (short)81, (short)67, (short)96, (short)158, (short)158, (short)58, (short)182, (short)178, (short)96, (short)96, (short)96, (short)96, (short)96, (short)96, (short)94, (short)81, (short)736, (short)736, (short)94, (short)181, (short)184, (short)736, (short)158, (short)736, (short)94, (short)94, (short)185, (short)736, (short)96, (short)94, (short)158, (short)94, (short)96, (short)736, (short)188, (short)191, (short)94, (short)189, (short)96, (short)96, (short)186, (short)192, (short)193, (short)96, (short)94, (short)96, (short)187, (short)190, (short)736, (short)736, (short)96, (short)736, (short)736, (short)736, (short)94, (short)736, (short)94, (short)736, (short)96, (short)736, (short)94, (short)736, (short)198, (short)166, (short)167, (short)168, (short)169, (short)170, (short)96, (short)194, (short)96, (short)171, (short)736, (short)195, (short)96, (short)199, (short)196, (short)94, (short)736, (short)172, (short)173, (short)174, (short)94, (short)175, (short)94, (short)94, (short)197, (short)94, (short)94, (short)94, (short)736, (short)96, (short)200, (short)94, (short)94, (short)736, (short)96, (short)94, (short)96, (short)96, (short)94, (short)96, (short)96, (short)96, (short)201, (short)94, (short)202, (short)96, (short)96, (short)94, (short)736, (short)96, (short)736, (short)94, (short)96, (short)736, (short)204, (short)736, (short)736, (short)96, (short)94, (short)736, (short)94, (short)96, (short)203, (short)205, (short)213, (short)96, (short)94, (short)211, (short)208, (short)209, (short)206, (short)207, (short)96, (short)212, (short)96, (short)221, (short)214, (short)736, (short)222, (short)210, (short)96, (short)218, (short)217, (short)215, (short)225, (short)219, (short)736, (short)94, (short)216, (short)223, (short)94, (short)224, (short)94, (short)94, (short)94, (short)94, (short)736, (short)94, (short)226, (short)736, (short)227, (short)96, (short)736, (short)220, (short)96, (short)736, (short)96, (short)96, (short)96, (short)96, (short)237, (short)96, (short)237, (short)228, (short)736, (short)238, (short)238, (short)238, (short)238, (short)241, (short)94, (short)241, (short)158, (short)158, (short)242, (short)242, (short)242, (short)242, (short)94, (short)94, (short)230, (short)736, (short)229, (short)233, (short)96, (short)236, (short)234, (short)736, (short)736, (short)231, (short)232, (short)158, (short)96, (short)96, (short)235, (short)155, (short)155, (short)155, (short)155, (short)158, (short)160, (short)160, (short)160, (short)160, (short)94, (short)736, (short)239, (short)240, (short)736, (short)240, (short)94, (short)160, (short)160, (short)160, (short)160, (short)244, (short)244, (short)94, (short)96, (short)247, (short)248, (short)239, (short)240, (short)243, (short)96, (short)243, (short)94, (short)94, (short)240, (short)249, (short)736, (short)96, (short)736, (short)253, (short)244, (short)94, (short)736, (short)94, (short)243, (short)250, (short)96, (short)96, (short)244, (short)94, (short)243, (short)94, (short)252, (short)94, (short)736, (short)96, (short)251, (short)96, (short)736, (short)94, (short)94, (short)94, (short)94, (short)96, (short)94, (short)96, (short)94, (short)96, (short)254, (short)255, (short)94, (short)94, (short)256, (short)96, (short)96, (short)96, (short)96, (short)94, (short)96, (short)736, (short)96, (short)94, (short)257, (short)736, (short)96, (short)96, (short)94, (short)94, (short)262, (short)259, (short)263, (short)96, (short)736, (short)265, (short)261, (short)96, (short)258, (short)94, (short)266, (short)260, (short)96, (short)96, (short)94, (short)271, (short)736, (short)736, (short)264, (short)94, (short)94, (short)736, (short)94, (short)96, (short)267, (short)94, (short)94, (short)268, (short)96, (short)272, (short)274, (short)269, (short)270, (short)96, (short)96, (short)277, (short)96, (short)94, (short)273, (short)96, (short)96, (short)275, (short)736, (short)94, (short)94, (short)94, (short)94, (short)736, (short)736, (short)276, (short)278, (short)96, (short)280, (short)94, (short)279, (short)736, (short)281, (short)96, (short)96, (short)96, (short)96, (short)283, (short)284, (short)94, (short)736, (short)94, (short)282, (short)96, (short)94, (short)285, (short)94, (short)94, (short)94, (short)94, (short)94, (short)94, (short)94, (short)96, (short)290, (short)96, (short)94, (short)94, (short)96, (short)294, (short)96, (short)96, (short)96, (short)96, (short)96, (short)96, (short)96, (short)286, (short)287, (short)736, (short)96, (short)96, (short)94, (short)94, (short)94, (short)94, (short)94, (short)288, (short)736, (short)289, (short)291, (short)94, (short)94, (short)293, (short)292, (short)94, (short)96, (short)96, (short)96, (short)96, (short)96, (short)94, (short)298, (short)299, (short)297, (short)96, (short)96, (short)296, (short)94, (short)96, (short)295, (short)736, (short)94, (short)94, (short)94, (short)96, (short)94, (short)300, (short)94, (short)94, (short)94, (short)303, (short)96, (short)94, (short)94, (short)305, (short)96, (short)96, (short)96, (short)302, (short)96, (short)301, (short)96, (short)96, (short)96, (short)308, (short)304, (short)96, (short)96, (short)306, (short)94, (short)238, (short)238, (short)238, (short)238, (short)320, (short)307, (short)320, (short)736, (short)311, (short)321, (short)321, (short)321, (short)321, (short)96, (short)316, (short)317, (short)318, (short)309, (short)314, (short)736, (short)310, (short)313, (short)736, (short)312, (short)736, (short)244, (short)244, (short)315, (short)736, (short)238, (short)238, (short)238, (short)238, (short)242, (short)242, (short)242, (short)242, (short)242, (short)242, (short)242, (short)242, (short)154, (short)319, (short)154, (short)244, (short)94, (short)94, (short)94, (short)736, (short)157, (short)736, (short)157, (short)244, (short)94, (short)94, (short)94, (short)154, (short)94, (short)94, (short)96, (short)96, (short)96, (short)154, (short)94, (short)157, (short)94, (short)94, (short)96, (short)96, (short)96, (short)157, (short)96, (short)96, (short)94, (short)94, (short)94, (short)736, (short)96, (short)736, (short)96, (short)96, (short)94, (short)94, (short)736, (short)94, (short)736, (short)94, (short)96, (short)96, (short)96, (short)322, (short)325, (short)327, (short)324, (short)736, (short)96, (short)96, (short)323, (short)96, (short)326, (short)96, (short)94, (short)94, (short)736, (short)332, (short)94, (short)329, (short)328, (short)333, (short)94, (short)94, (short)94, (short)94, (short)330, (short)331, (short)96, (short)96, (short)336, (short)335, (short)96, (short)338, (short)334, (short)337, (short)96, (short)96, (short)96, (short)96, (short)94, (short)94, (short)94, (short)339, (short)94, (short)94, (short)94, (short)94, (short)94, (short)94, (short)94, (short)736, (short)94, (short)94, (short)96, (short)96, (short)96, (short)340, (short)96, (short)96, (short)96, (short)96, (short)96, (short)96, (short)96, (short)343, (short)96, (short)96, (short)94, (short)94, (short)94, (short)94, (short)341, (short)344, (short)342, (short)347, (short)94, (short)345, (short)94, (short)346, (short)94, (short)736, (short)96, (short)96, (short)96, (short)96, (short)94, (short)94, (short)736, (short)94, (short)96, (short)349, (short)96, (short)352, (short)96, (short)353, (short)348, (short)350, (short)360, (short)94, (short)96, (short)96, (short)351, (short)96, (short)94, (short)94, (short)736, (short)94, (short)736, (short)94, (short)736, (short)736, (short)94, (short)96, (short)358, (short)94, (short)354, (short)94, (short)96, (short)96, (short)356, (short)96, (short)355, (short)96, (short)357, (short)359, (short)96, (short)736, (short)94, (short)96, (short)94, (short)96, (short)94, (short)94, (short)736, (short)736, (short)94, (short)361, (short)94, (short)363, (short)94, (short)364, (short)96, (short)94, (short)96, (short)736, (short)96, (short)96, (short)362, (short)365, (short)96, (short)736, (short)96, (short)94, (short)96, (short)94, (short)736, (short)96, (short)736, (short)94, (short)736, (short)366, (short)94, (short)94, (short)736, (short)368, (short)370, (short)96, (short)367, (short)96, (short)373, (short)94, (short)372, (short)96, (short)375, (short)736, (short)96, (short)96, (short)369, (short)371, (short)94, (short)94, (short)94, (short)94, (short)94, (short)96, (short)376, (short)377, (short)736, (short)374, (short)379, (short)736, (short)736, (short)378, (short)96, (short)96, (short)96, (short)96, (short)96, (short)321, (short)321, (short)321, (short)321, (short)321, (short)321, (short)321, (short)321, (short)94, (short)380, (short)381, (short)94, (short)94, (short)94, (short)94, (short)94, (short)240, (short)736, (short)240, (short)736, (short)94, (short)385, (short)96, (short)384, (short)94, (short)96, (short)96, (short)96, (short)96, (short)96, (short)94, (short)240, (short)382, (short)383, (short)96, (short)94, (short)94, (short)240, (short)96, (short)386, (short)94, (short)736, (short)736, (short)394, (short)96, (short)736, (short)94, (short)389, (short)94, (short)96, (short)96, (short)94, (short)94, (short)94, (short)96, (short)388, (short)392, (short)94, (short)391, (short)387, (short)96, (short)94, (short)96, (short)390, (short)393, (short)96, (short)96, (short)96, (short)736, (short)94, (short)94, (short)96, (short)736, (short)94, (short)397, (short)96, (short)94, (short)94, (short)94, (short)94, (short)399, (short)396, (short)398, (short)96, (short)96, (short)395, (short)403, (short)96, (short)94, (short)402, (short)96, (short)96, (short)96, (short)96, (short)736, (short)94, (short)400, (short)401, (short)94, (short)94, (short)404, (short)94, (short)96, (short)94, (short)736, (short)94, (short)736, (short)94, (short)406, (short)96, (short)94, (short)94, (short)96, (short)96, (short)408, (short)96, (short)94, (short)96, (short)405, (short)96, (short)407, (short)96, (short)409, (short)94, (short)96, (short)96, (short)94, (short)94, (short)736, (short)736, (short)96, (short)410, (short)94, (short)94, (short)411, (short)412, (short)736, (short)96, (short)94, (short)415, (short)96, (short)96, (short)413, (short)417, (short)94, (short)736, (short)96, (short)96, (short)414, (short)94, (short)416, (short)94, (short)96, (short)419, (short)94, (short)94, (short)94, (short)94, (short)96, (short)420, (short)418, (short)426, (short)94, (short)96, (short)736, (short)96, (short)94, (short)94, (short)96, (short)96, (short)96, (short)96, (short)736, (short)94, (short)94, (short)94, (short)96, (short)736, (short)424, (short)421, (short)96, (short)96, (short)736, (short)422, (short)94, (short)736, (short)423, (short)96, (short)96, (short)96, (short)94, (short)428, (short)736, (short)94, (short)429, (short)736, (short)430, (short)94, (short)96, (short)425, (short)427, (short)94, (short)94, (short)736, (short)96, (short)432, (short)434, (short)96, (short)94, (short)431, (short)94, (short)96, (short)736, (short)736, (short)435, (short)96, (short)96, (short)433, (short)94, (short)736, (short)736, (short)437, (short)96, (short)94, (short)96, (short)94, (short)438, (short)436, (short)736, (short)94, (short)94, (short)94, (short)96, (short)440, (short)442, (short)736, (short)94, (short)96, (short)94, (short)96, (short)94, (short)94, (short)439, (short)96, (short)96, (short)96, (short)94, (short)94, (short)441, (short)443, (short)96, (short)94, (short)96, (short)451, (short)96, (short)96, (short)94, (short)94, (short)736, (short)94, (short)96, (short)96, (short)736, (short)444, (short)94, (short)96, (short)736, (short)94, (short)736, (short)736, (short)96, (short)96, (short)446, (short)96, (short)736, (short)445, (short)449, (short)94, (short)96, (short)454, (short)447, (short)96, (short)453, (short)450, (short)94, (short)448, (short)94, (short)94, (short)452, (short)94, (short)736, (short)96, (short)736, (short)458, (short)736, (short)94, (short)94, (short)455, (short)96, (short)94, (short)96, (short)96, (short)461, (short)96, (short)462, (short)94, (short)456, (short)459, (short)457, (short)96, (short)96, (short)94, (short)463, (short)96, (short)464, (short)94, (short)94, (short)736, (short)460, (short)96, (short)94, (short)467, (short)736, (short)94, (short)94, (short)96, (short)94, (short)94, (short)94, (short)96, (short)96, (short)469, (short)736, (short)94, (short)96, (short)465, (short)466, (short)96, (short)96, (short)94, (short)96, (short)96, (short)96, (short)468, (short)94, (short)94, (short)470, (short)96, (short)94, (short)94, (short)94, (short)94, (short)94, (short)96, (short)94, (short)736, (short)94, (short)471, (short)96, (short)96, (short)474, (short)472, (short)96, (short)96, (short)96, (short)96, (short)96, (short)736, (short)96, (short)475, (short)96, (short)94, (short)94, (short)473, (short)94, (short)736, (short)94, (short)94, (short)94, (short)94, (short)94, (short)477, (short)94, (short)736, (short)94, (short)96, (short)96, (short)94, (short)96, (short)476, (short)96, (short)96, (short)96, (short)96, (short)96, (short)94, (short)96, (short)478, (short)96, (short)94, (short)94, (short)96, (short)736, (short)736, (short)94, (short)94, (short)479, (short)736, (short)481, (short)96, (short)94, (short)736, (short)94, (short)96, (short)96, (short)483, (short)484, (short)487, (short)96, (short)96, (short)94, (short)480, (short)485, (short)482, (short)96, (short)486, (short)96, (short)94, (short)488, (short)94, (short)94, (short)94, (short)94, (short)94, (short)96, (short)94, (short)94, (short)94, (short)736, (short)489, (short)94, (short)96, (short)94, (short)96, (short)96, (short)96, (short)96, (short)96, (short)492, (short)96, (short)96, (short)96, (short)490, (short)617, (short)96, (short)94, (short)96, (short)94, (short)736, (short)491, (short)736, (short)618, (short)619, (short)736, (short)494, (short)620, (short)94, (short)493, (short)496, (short)96, (short)94, (short)96, (short)497, (short)495, (short)501, (short)498, (short)500, (short)503, (short)502, (short)499, (short)96, (short)94, (short)94, (short)94, (short)96, (short)94, (short)94, (short)736, (short)736, (short)94, (short)94, (short)736, (short)736, (short)94, (short)94, (short)96, (short)96, (short)96, (short)94, (short)96, (short)96, (short)504, (short)506, (short)96, (short)96, (short)505, (short)507, (short)96, (short)96, (short)94, (short)736, (short)94, (short)96, (short)736, (short)94, (short)94, (short)94, (short)94, (short)94, (short)94, (short)736, (short)94, (short)94, (short)96, (short)510, (short)96, (short)94, (short)511, (short)96, (short)96, (short)96, (short)96, (short)96, (short)96, (short)508, (short)96, (short)96, (short)509, (short)94, (short)736, (short)96, (short)94, (short)94, (short)736, (short)736, (short)94, (short)94, (short)94, (short)514, (short)94, (short)517, (short)736, (short)96, (short)512, (short)518, (short)96, (short)96, (short)513, (short)519, (short)96, (short)96, (short)96, (short)94, (short)96, (short)515, (short)516, (short)736, (short)736, (short)94, (short)520, (short)94, (short)736, (short)736, (short)94, (short)94, (short)736, (short)96, (short)525, (short)523, (short)94, (short)527, (short)526, (short)96, (short)94, (short)96, (short)524, (short)522, (short)96, (short)96, (short)521, (short)94, (short)736, (short)94, (short)96, (short)94, (short)94, (short)94, (short)96, (short)94, (short)736, (short)94, (short)94, (short)736, (short)736, (short)96, (short)528, (short)96, (short)94, (short)96, (short)96, (short)96, (short)736, (short)96, (short)529, (short)96, (short)96, (short)94, (short)531, (short)94, (short)530, (short)94, (short)96, (short)94, (short)94, (short)94, (short)536, (short)94, (short)533, (short)94, (short)532, (short)96, (short)538, (short)96, (short)94, (short)96, (short)736, (short)96, (short)96, (short)96, (short)534, (short)96, (short)537, (short)96, (short)542, (short)94, (short)94, (short)535, (short)96, (short)539, (short)543, (short)94, (short)540, (short)94, (short)736, (short)94, (short)541, (short)94, (short)94, (short)96, (short)96, (short)94, (short)544, (short)94, (short)94, (short)96, (short)94, (short)96, (short)546, (short)96, (short)94, (short)96, (short)96, (short)736, (short)545, (short)96, (short)94, (short)96, (short)96, (short)94, (short)96, (short)547, (short)549, (short)94, (short)96, (short)94, (short)736, (short)550, (short)552, (short)94, (short)96, (short)94, (short)554, (short)96, (short)555, (short)94, (short)548, (short)96, (short)94, (short)96, (short)556, (short)551, (short)736, (short)96, (short)94, (short)96, (short)736, (short)94, (short)553, (short)96, (short)94, (short)557, (short)96, (short)736, (short)94, (short)559, (short)561, (short)560, (short)96, (short)94, (short)558, (short)96, (short)94, (short)94, (short)96, (short)562, (short)564, (short)563, (short)96, (short)736, (short)94, (short)94, (short)94, (short)96, (short)736, (short)94, (short)96, (short)96, (short)94, (short)94, (short)572, (short)565, (short)94, (short)566, (short)96, (short)96, (short)96, (short)94, (short)567, (short)96, (short)94, (short)94, (short)96, (short)96, (short)94, (short)94, (short)96, (short)94, (short)94, (short)568, (short)94, (short)96, (short)94, (short)94, (short)96, (short)96, (short)569, (short)570, (short)96, (short)96, (short)736, (short)96, (short)96, (short)574, (short)96, (short)94, (short)96, (short)96, (short)94, (short)94, (short)573, (short)575, (short)576, (short)736, (short)571, (short)577, (short)94, (short)94, (short)94, (short)96, (short)94, (short)736, (short)96, (short)96, (short)94, (short)736, (short)94, (short)580, (short)579, (short)588, (short)96, (short)96, (short)96, (short)736, (short)96, (short)94, (short)94, (short)589, (short)96, (short)578, (short)96, (short)582, (short)736, (short)736, (short)94, (short)94, (short)94, (short)581, (short)585, (short)96, (short)96, (short)594, (short)587, (short)736, (short)94, (short)583, (short)591, (short)584, (short)96, (short)96, (short)96, (short)736, (short)586, (short)94, (short)94, (short)94, (short)590, (short)595, (short)96, (short)94, (short)94, (short)94, (short)94, (short)94, (short)94, (short)596, (short)94, (short)96, (short)96, (short)96, (short)736, (short)94, (short)94, (short)96, (short)96, (short)96, (short)96, (short)96, (short)96, (short)597, (short)96, (short)736, (short)94, (short)736, (short)94, (short)96, (short)96, (short)736, (short)736, (short)598, (short)94, (short)94, (short)736, (short)94, (short)94, (short)601, (short)96, (short)609, (short)96, (short)736, (short)604, (short)599, (short)607, (short)600, (short)96, (short)96, (short)608, (short)96, (short)96, (short)602, (short)94, (short)603, (short)736, (short)605, (short)94, (short)610, (short)94, (short)94, (short)736, (short)94, (short)94, (short)622, (short)94, (short)613, (short)96, (short)736, (short)612, (short)94, (short)96, (short)623, (short)96, (short)96, (short)611, (short)96, (short)96, (short)94, (short)96, (short)94, (short)736, (short)615, (short)94, (short)96, (short)94, (short)614, (short)94, (short)94, (short)736, (short)736, (short)632, (short)96, (short)616, (short)96, (short)625, (short)617, (short)96, (short)624, (short)96, (short)634, (short)96, (short)96, (short)635, (short)618, (short)619, (short)626, (short)637, (short)620, (short)627, (short)736, (short)94, (short)640, (short)94, (short)736, (short)638, (short)619, (short)94, (short)94, (short)620, (short)618, (short)619, (short)94, (short)94, (short)620, (short)96, (short)631, (short)96, (short)628, (short)94, (short)629, (short)96, (short)96, (short)94, (short)736, (short)736, (short)96, (short)96, (short)630, (short)632, (short)632, (short)648, (short)94, (short)96, (short)736, (short)736, (short)94, (short)96, (short)634, (short)634, (short)619, (short)635, (short)635, (short)620, (short)649, (short)736, (short)96, (short)644, (short)642, (short)637, (short)96, (short)643, (short)736, (short)634, (short)651, (short)645, (short)635, (short)638, (short)619, (short)655, (short)736, (short)620, (short)646, (short)653, (short)640, (short)736, (short)654, (short)638, (short)619, (short)647, (short)656, (short)620, (short)618, (short)619, (short)662, (short)94, (short)620, (short)94, (short)657, (short)658, (short)661, (short)94, (short)659, (short)94, (short)648, (short)736, (short)736, (short)736, (short)736, (short)96, (short)649, (short)96, (short)632, (short)619, (short)651, (short)96, (short)620, (short)96, (short)651, (short)634, (short)667, (short)634, (short)635, (short)653, (short)635, (short)668, (short)654, (short)653, (short)94, (short)619, (short)654, (short)655, (short)620, (short)736, (short)653, (short)94, (short)736, (short)654, (short)656, (short)638, (short)619, (short)665, (short)96, (short)620, (short)663, (short)664, (short)657, (short)658, (short)670, (short)96, (short)659, (short)666, (short)94, (short)675, (short)94, (short)678, (short)94, (short)672, (short)94, (short)736, (short)673, (short)676, (short)658, (short)657, (short)658, (short)659, (short)96, (short)659, (short)96, (short)667, (short)96, (short)679, (short)96, (short)668, (short)651, (short)670, (short)94, (short)736, (short)619, (short)670, (short)684, (short)620, (short)653, (short)653, (short)672, (short)654, (short)654, (short)673, (short)672, (short)658, (short)96, (short)673, (short)659, (short)736, (short)685, (short)736, (short)687, (short)736, (short)736, (short)736, (short)681, (short)675, (short)680, (short)672, (short)682, (short)689, (short)673, (short)691, (short)690, (short)676, (short)658, (short)683, (short)678, (short)659, (short)94, (short)676, (short)658, (short)94, (short)94, (short)659, (short)657, (short)658, (short)94, (short)736, (short)659, (short)684, (short)685, (short)736, (short)96, (short)94, (short)670, (short)96, (short)96, (short)94, (short)658, (short)672, (short)96, (short)659, (short)673, (short)672, (short)687, (short)687, (short)673, (short)96, (short)736, (short)695, (short)696, (short)96, (short)692, (short)689, (short)689, (short)94, (short)690, (short)690, (short)658, (short)689, (short)736, (short)659, (short)690, (short)691, (short)94, (short)698, (short)94, (short)694, (short)693, (short)96, (short)695, (short)676, (short)658, (short)699, (short)696, (short)659, (short)687, (short)94, (short)96, (short)658, (short)96, (short)94, (short)659, (short)689, (short)94, (short)689, (short)690, (short)94, (short)690, (short)94, (short)94, (short)96, (short)94, (short)736, (short)736, (short)96, (short)736, (short)736, (short)96, (short)736, (short)711, (short)96, (short)702, (short)96, (short)96, (short)736, (short)96, (short)708, (short)712, (short)713, (short)736, (short)736, (short)714, (short)94, (short)700, (short)709, (short)736, (short)736, (short)736, (short)704, (short)706, (short)711, (short)736, (short)707, (short)736, (short)701, (short)716, (short)96, (short)721, (short)712, (short)713, (short)703, (short)716, (short)714, (short)716, (short)718, (short)722, (short)713, (short)719, (short)724, (short)714, (short)718, (short)705, (short)718, (short)719, (short)725, (short)719, (short)712, (short)713, (short)726, (short)728, (short)714, (short)736, (short)736, (short)713, (short)721, (short)736, (short)714, (short)718, (short)730, (short)732, (short)719, (short)731, (short)722, (short)713, (short)724, (short)725, (short)714, (short)722, (short)713, (short)726, (short)716, (short)714, (short)712, (short)713, (short)713, (short)728, (short)714, (short)714, (short)718, (short)718, (short)728, (short)719, (short)719, (short)736, (short)730, (short)733, (short)734, (short)731, (short)736, (short)730, (short)736, (short)732, (short)731, (short)733, (short)713, (short)730, (short)736, (short)714, (short)731, (short)722, (short)713, (short)734, (short)713, (short)714, (short)736, (short)714, (short)728, (short)736, (short)736, (short)736, (short)730, (short)736, (short)736, (short)731, (short)736, (short)730, (short)736, (short)736, (short)731, (short)59, (short)59, (short)59, (short)59, (short)59, (short)59, (short)59, (short)59, (short)59, (short)59, (short)66, (short)66, (short)66, (short)66, (short)736, (short)66, (short)66, (short)66, (short)66, (short)66, (short)95, (short)736, (short)736, (short)736, (short)95, (short)95, (short)95, (short)161, (short)161, (short)162, (short)162, (short)245, (short)245, (short)245, (short)246, (short)246, (short)593, (short)593, (short)593, (short)593, (short)621, (short)736, (short)736, (short)736, (short)621, (short)621, (short)621, (short)621, (short)621, (short)633, (short)633, (short)736, (short)736, (short)736, (short)633, (short)633, (short)633, (short)633, (short)639, (short)736, (short)736, (short)736, (short)639, (short)639, (short)639, (short)639, (short)639, (short)650, (short)650, (short)736, (short)736, (short)736, (short)650, (short)650, (short)650, (short)650, (short)652, (short)652, (short)736, (short)736, (short)736, (short)652, (short)652, (short)652, (short)652, (short)660, (short)736, (short)736, (short)736, (short)660, (short)660, (short)660, (short)660, (short)660, (short)669, (short)669, (short)736, (short)736, (short)736, (short)669, (short)669, (short)669, (short)669, (short)671, (short)671, (short)736, (short)736, (short)736, (short)671, (short)671, (short)671, (short)671, (short)677, (short)736, (short)736, (short)736, (short)677, (short)677, (short)677, (short)677, (short)677, (short)686, (short)686, (short)736, (short)736, (short)736, (short)686, (short)686, (short)686, (short)686, (short)688, (short)688, (short)736, (short)736, (short)736, (short)688, (short)688, (short)688, (short)688, (short)697, (short)697, (short)736, (short)736, (short)736, (short)697, (short)697, (short)697, (short)697, (short)715, (short)736, (short)736, (short)736, (short)715, (short)715, (short)715, (short)715, (short)715, (short)717, (short)717, (short)736, (short)736, (short)736, (short)717, (short)717, (short)717, (short)717, (short)723, (short)736, (short)736, (short)736, (short)723, (short)723, (short)723, (short)723, (short)723, (short)727, (short)727, (short)736, (short)736, (short)736, (short)727, (short)727, (short)727, (short)727, (short)729, (short)729, (short)736, (short)736, (short)736, (short)729, (short)729, (short)729, (short)729, (short)735, (short)735, (short)736, (short)736, (short)736, (short)735, (short)735, (short)735, (short)735, (short)3, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736
};

static const short int yy_chk[2664] = 
{
(short)0, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)1, (short)9, (short)12, (short)12, (short)13, (short)18, (short)713, (short)21, (short)20, (short)21, (short)21, (short)21, (short)21, (short)31, (short)27, (short)22, (short)37, (short)18, (short)20, (short)20, (short)22, (short)13, (short)25, (short)29, (short)29, (short)55, (short)25, (short)31, (short)22, (short)27, (short)37, (short)27, (short)27, (short)9, (short)23, (short)709, (short)23, (short)23, (short)23, (short)23, (short)32, (short)38, (short)36, (short)59, (short)32, (short)32, (short)588, (short)23, (short)658, (short)45, (short)23, (short)23, (short)23, (short)623, (short)588, (short)38, (short)36, (short)47, (short)32, (short)67, (short)39, (short)37, (short)23, (short)45, (short)622, (short)37, (short)55, (short)37, (short)67, (short)23, (short)619, (short)47, (short)622, (short)36, (short)39, (short)59, (short)41, (short)23, (short)36, (short)40, (short)23, (short)24, (short)36, (short)24, (short)24, (short)24, (short)24, (short)43, (short)42, (short)38, (short)41, (short)36, (short)39, (short)40, (short)24, (short)45, (short)48, (short)24, (short)24, (short)39, (short)44, (short)43, (short)42, (short)39, (short)46, (short)47, (short)39, (short)593, (short)47, (short)24, (short)48, (short)40, (short)40, (short)589, (short)44, (short)40, (short)24, (short)572, (short)46, (short)41, (short)66, (short)41, (short)40, (short)43, (short)24, (short)40, (short)98, (short)49, (short)42, (short)50, (short)41, (short)42, (short)48, (short)43, (short)42, (short)96, (short)46, (short)44, (short)97, (short)52, (short)46, (short)49, (short)51, (short)50, (short)44, (short)44, (short)94, (short)66, (short)95, (short)44, (short)101, (short)53, (short)81, (short)52, (short)81, (short)104, (short)51, (short)81, (short)81, (short)81, (short)81, (short)93, (short)95, (short)49, (short)101, (short)53, (short)49, (short)49, (short)50, (short)104, (short)97, (short)89, (short)105, (short)708, (short)108, (short)102, (short)74, (short)49, (short)49, (short)52, (short)49, (short)708, (short)51, (short)53, (short)50, (short)52, (short)105, (short)51, (short)108, (short)102, (short)53, (short)75, (short)75, (short)75, (short)75, (short)79, (short)79, (short)79, (short)79, (short)103, (short)82, (short)82, (short)75, (short)75, (short)101, (short)75, (short)79, (short)79, (short)61, (short)79, (short)104, (short)106, (short)107, (short)103, (short)35, (short)28, (short)105, (short)75, (short)75, (short)82, (short)102, (short)79, (short)79, (short)108, (short)75, (short)106, (short)107, (short)82, (short)79, (short)80, (short)109, (short)80, (short)80, (short)80, (short)80, (short)17, (short)110, (short)111, (short)112, (short)113, (short)114, (short)115, (short)80, (short)14, (short)109, (short)80, (short)80, (short)8, (short)107, (short)103, (short)110, (short)111, (short)112, (short)113, (short)114, (short)115, (short)120, (short)80, (short)3, (short)0, (short)116, (short)106, (short)109, (short)0, (short)80, (short)0, (short)117, (short)118, (short)110, (short)0, (short)120, (short)121, (short)80, (short)100, (short)116, (short)0, (short)113, (short)114, (short)119, (short)113, (short)117, (short)118, (short)111, (short)114, (short)115, (short)121, (short)122, (short)100, (short)112, (short)113, (short)0, (short)0, (short)119, (short)0, (short)0, (short)0, (short)123, (short)0, (short)124, (short)0, (short)122, (short)0, (short)125, (short)0, (short)120, (short)100, (short)100, (short)100, (short)100, (short)100, (short)123, (short)116, (short)124, (short)100, (short)0, (short)117, (short)125, (short)121, (short)118, (short)126, (short)0, (short)100, (short)100, (short)100, (short)127, (short)100, (short)128, (short)129, (short)119, (short)130, (short)131, (short)132, (short)0, (short)126, (short)122, (short)133, (short)135, (short)0, (short)127, (short)136, (short)128, (short)129, (short)134, (short)130, (short)131, (short)132, (short)123, (short)138, (short)124, (short)133, (short)135, (short)137, (short)0, (short)136, (short)0, (short)139, (short)134, (short)0, (short)127, (short)0, (short)0, (short)138, (short)140, (short)0, (short)141, (short)137, (short)126, (short)127, (short)133, (short)139, (short)142, (short)132, (short)129, (short)130, (short)127, (short)128, (short)140, (short)132, (short)141, (short)138, (short)134, (short)0, (short)138, (short)131, (short)142, (short)136, (short)135, (short)134, (short)139, (short)137, (short)0, (short)143, (short)134, (short)138, (short)144, (short)138, (short)145, (short)146, (short)147, (short)148, (short)0, (short)180, (short)140, (short)0, (short)141, (short)143, (short)0, (short)137, (short)144, (short)0, (short)145, (short)146, (short)147, (short)148, (short)153, (short)180, (short)153, (short)142, (short)0, (short)153, (short)153, (short)153, (short)153, (short)156, (short)166, (short)156, (short)158, (short)158, (short)156, (short)156, (short)156, (short)156, (short)167, (short)170, (short)144, (short)0, (short)143, (short)146, (short)166, (short)148, (short)146, (short)0, (short)0, (short)144, (short)145, (short)158, (short)167, (short)170, (short)147, (short)155, (short)155, (short)155, (short)155, (short)158, (short)159, (short)159, (short)159, (short)159, (short)168, (short)0, (short)155, (short)155, (short)0, (short)155, (short)169, (short)160, (short)160, (short)160, (short)160, (short)161, (short)161, (short)171, (short)168, (short)166, (short)166, (short)155, (short)155, (short)160, (short)169, (short)160, (short)173, (short)172, (short)155, (short)167, (short)0, (short)171, (short)0, (short)170, (short)161, (short)174, (short)0, (short)175, (short)160, (short)168, (short)173, (short)172, (short)161, (short)176, (short)160, (short)177, (short)169, (short)178, (short)0, (short)174, (short)168, (short)175, (short)0, (short)179, (short)181, (short)182, (short)183, (short)176, (short)184, (short)177, (short)185, (short)178, (short)171, (short)172, (short)186, (short)187, (short)173, (short)179, (short)181, (short)182, (short)183, (short)188, (short)184, (short)0, (short)185, (short)189, (short)173, (short)0, (short)186, (short)187, (short)190, (short)192, (short)178, (short)175, (short)179, (short)188, (short)0, (short)182, (short)177, (short)189, (short)174, (short)191, (short)183, (short)176, (short)190, (short)192, (short)193, (short)187, (short)0, (short)0, (short)181, (short)194, (short)195, (short)0, (short)196, (short)191, (short)184, (short)197, (short)198, (short)185, (short)193, (short)188, (short)190, (short)186, (short)186, (short)194, (short)195, (short)192, (short)196, (short)199, (short)189, (short)197, (short)198, (short)191, (short)0, (short)200, (short)201, (short)202, (short)203, (short)0, (short)0, (short)191, (short)193, (short)199, (short)194, (short)204, (short)193, (short)0, (short)195, (short)200, (short)201, (short)202, (short)203, (short)197, (short)198, (short)205, (short)0, (short)206, (short)196, (short)204, (short)207, (short)199, (short)208, (short)209, (short)211, (short)210, (short)212, (short)213, (short)214, (short)205, (short)206, (short)206, (short)216, (short)215, (short)207, (short)210, (short)208, (short)209, (short)211, (short)210, (short)212, (short)213, (short)214, (short)202, (short)203, (short)0, (short)216, (short)215, (short)217, (short)218, (short)219, (short)220, (short)221, (short)204, (short)0, (short)205, (short)207, (short)222, (short)223, (short)209, (short)208, (short)224, (short)217, (short)218, (short)219, (short)220, (short)221, (short)225, (short)214, (short)215, (short)213, (short)222, (short)223, (short)212, (short)226, (short)224, (short)211, (short)0, (short)227, (short)228, (short)229, (short)225, (short)230, (short)216, (short)232, (short)231, (short)233, (short)220, (short)226, (short)235, (short)234, (short)222, (short)227, (short)228, (short)229, (short)219, (short)230, (short)218, (short)232, (short)231, (short)233, (short)225, (short)221, (short)235, (short)234, (short)223, (short)236, (short)237, (short)237, (short)237, (short)237, (short)239, (short)224, (short)239, (short)0, (short)228, (short)239, (short)239, (short)239, (short)239, (short)236, (short)233, (short)234, (short)235, (short)226, (short)231, (short)0, (short)227, (short)230, (short)0, (short)229, (short)0, (short)244, (short)244, (short)232, (short)0, (short)238, (short)238, (short)238, (short)238, (short)241, (short)241, (short)241, (short)241, (short)242, (short)242, (short)242, (short)242, (short)238, (short)236, (short)238, (short)244, (short)246, (short)247, (short)248, (short)0, (short)242, (short)0, (short)242, (short)244, (short)249, (short)251, (short)250, (short)238, (short)253, (short)252, (short)246, (short)247, (short)248, (short)238, (short)254, (short)242, (short)255, (short)256, (short)249, (short)251, (short)250, (short)242, (short)253, (short)252, (short)257, (short)258, (short)259, (short)0, (short)254, (short)0, (short)255, (short)256, (short)260, (short)261, (short)0, (short)263, (short)0, (short)262, (short)257, (short)258, (short)259, (short)247, (short)250, (short)252, (short)249, (short)0, (short)260, (short)261, (short)248, (short)263, (short)251, (short)262, (short)264, (short)265, (short)0, (short)256, (short)266, (short)254, (short)253, (short)257, (short)267, (short)268, (short)269, (short)270, (short)254, (short)255, (short)264, (short)265, (short)260, (short)259, (short)266, (short)262, (short)258, (short)261, (short)267, (short)268, (short)269, (short)270, (short)271, (short)272, (short)274, (short)263, (short)273, (short)275, (short)276, (short)277, (short)278, (short)279, (short)281, (short)0, (short)280, (short)282, (short)271, (short)272, (short)274, (short)265, (short)273, (short)275, (short)276, (short)277, (short)278, (short)279, (short)281, (short)270, (short)280, (short)282, (short)283, (short)284, (short)285, (short)286, (short)268, (short)271, (short)269, (short)274, (short)287, (short)272, (short)288, (short)273, (short)289, (short)0, (short)283, (short)284, (short)285, (short)286, (short)290, (short)291, (short)0, (short)292, (short)287, (short)276, (short)288, (short)279, (short)289, (short)280, (short)275, (short)277, (short)290, (short)293, (short)290, (short)291, (short)278, (short)292, (short)294, (short)296, (short)0, (short)295, (short)0, (short)297, (short)0, (short)0, (short)298, (short)293, (short)288, (short)299, (short)283, (short)300, (short)294, (short)296, (short)285, (short)295, (short)284, (short)297, (short)287, (short)289, (short)298, (short)0, (short)301, (short)299, (short)302, (short)300, (short)304, (short)303, (short)0, (short)0, (short)306, (short)291, (short)305, (short)295, (short)307, (short)296, (short)301, (short)308, (short)302, (short)0, (short)304, (short)303, (short)293, (short)297, (short)306, (short)0, (short)305, (short)309, (short)307, (short)311, (short)0, (short)308, (short)0, (short)310, (short)0, (short)298, (short)312, (short)313, (short)0, (short)300, (short)302, (short)309, (short)299, (short)311, (short)305, (short)314, (short)304, (short)310, (short)307, (short)0, (short)312, (short)313, (short)301, (short)303, (short)315, (short)316, (short)317, (short)318, (short)319, (short)314, (short)308, (short)309, (short)0, (short)306, (short)311, (short)0, (short)0, (short)310, (short)315, (short)316, (short)317, (short)318, (short)319, (short)320, (short)320, (short)320, (short)320, (short)321, (short)321, (short)321, (short)321, (short)322, (short)313, (short)314, (short)323, (short)324, (short)325, (short)326, (short)327, (short)321, (short)0, (short)321, (short)0, (short)328, (short)319, (short)322, (short)318, (short)329, (short)323, (short)324, (short)325, (short)326, (short)327, (short)330, (short)321, (short)315, (short)317, (short)328, (short)331, (short)332, (short)321, (short)329, (short)322, (short)333, (short)0, (short)0, (short)330, (short)330, (short)0, (short)334, (short)325, (short)335, (short)331, (short)332, (short)336, (short)337, (short)339, (short)333, (short)324, (short)328, (short)338, (short)327, (short)323, (short)334, (short)340, (short)335, (short)326, (short)329, (short)336, (short)337, (short)339, (short)0, (short)341, (short)342, (short)338, (short)0, (short)343, (short)333, (short)340, (short)344, (short)345, (short)346, (short)347, (short)335, (short)332, (short)334, (short)341, (short)342, (short)331, (short)339, (short)343, (short)348, (short)338, (short)344, (short)345, (short)346, (short)347, (short)0, (short)351, (short)336, (short)337, (short)349, (short)350, (short)341, (short)352, (short)348, (short)353, (short)0, (short)354, (short)0, (short)356, (short)344, (short)351, (short)357, (short)355, (short)349, (short)350, (short)346, (short)352, (short)358, (short)353, (short)343, (short)354, (short)345, (short)356, (short)347, (short)359, (short)357, (short)355, (short)360, (short)361, (short)0, (short)0, (short)358, (short)348, (short)362, (short)363, (short)349, (short)350, (short)0, (short)359, (short)364, (short)353, (short)360, (short)361, (short)351, (short)355, (short)365, (short)0, (short)362, (short)363, (short)352, (short)366, (short)354, (short)367, (short)364, (short)358, (short)369, (short)368, (short)370, (short)371, (short)365, (short)359, (short)357, (short)367, (short)372, (short)366, (short)0, (short)367, (short)373, (short)375, (short)369, (short)368, (short)370, (short)371, (short)0, (short)374, (short)376, (short)377, (short)372, (short)0, (short)365, (short)362, (short)373, (short)375, (short)0, (short)363, (short)378, (short)0, (short)364, (short)374, (short)376, (short)377, (short)379, (short)370, (short)0, (short)380, (short)371, (short)0, (short)372, (short)381, (short)378, (short)366, (short)368, (short)382, (short)384, (short)0, (short)379, (short)374, (short)376, (short)380, (short)383, (short)373, (short)385, (short)381, (short)0, (short)0, (short)377, (short)382, (short)384, (short)375, (short)386, (short)0, (short)0, (short)379, (short)383, (short)387, (short)385, (short)388, (short)379, (short)378, (short)0, (short)389, (short)390, (short)392, (short)386, (short)382, (short)384, (short)0, (short)391, (short)387, (short)393, (short)388, (short)395, (short)394, (short)381, (short)389, (short)390, (short)392, (short)396, (short)397, (short)383, (short)386, (short)391, (short)398, (short)393, (short)394, (short)395, (short)394, (short)399, (short)401, (short)0, (short)400, (short)396, (short)397, (short)0, (short)387, (short)402, (short)398, (short)0, (short)404, (short)0, (short)0, (short)399, (short)401, (short)389, (short)400, (short)0, (short)388, (short)392, (short)403, (short)402, (short)397, (short)390, (short)404, (short)396, (short)393, (short)405, (short)391, (short)407, (short)406, (short)395, (short)408, (short)0, (short)403, (short)0, (short)401, (short)0, (short)409, (short)410, (short)398, (short)405, (short)411, (short)407, (short)406, (short)404, (short)408, (short)404, (short)412, (short)399, (short)402, (short)400, (short)409, (short)410, (short)413, (short)404, (short)411, (short)404, (short)414, (short)415, (short)0, (short)403, (short)412, (short)416, (short)407, (short)0, (short)417, (short)418, (short)413, (short)419, (short)420, (short)421, (short)414, (short)415, (short)409, (short)0, (short)422, (short)416, (short)405, (short)406, (short)417, (short)418, (short)423, (short)419, (short)420, (short)421, (short)408, (short)424, (short)425, (short)410, (short)422, (short)426, (short)427, (short)428, (short)429, (short)430, (short)423, (short)431, (short)0, (short)432, (short)413, (short)424, (short)425, (short)421, (short)414, (short)426, (short)427, (short)428, (short)429, (short)430, (short)0, (short)431, (short)422, (short)432, (short)433, (short)434, (short)417, (short)435, (short)0, (short)436, (short)437, (short)438, (short)440, (short)439, (short)425, (short)441, (short)0, (short)442, (short)433, (short)434, (short)443, (short)435, (short)423, (short)436, (short)437, (short)438, (short)440, (short)439, (short)444, (short)441, (short)431, (short)442, (short)445, (short)446, (short)443, (short)0, (short)0, (short)447, (short)448, (short)432, (short)0, (short)436, (short)444, (short)449, (short)0, (short)450, (short)445, (short)446, (short)438, (short)439, (short)442, (short)447, (short)448, (short)451, (short)434, (short)440, (short)437, (short)449, (short)441, (short)450, (short)452, (short)444, (short)453, (short)454, (short)455, (short)456, (short)458, (short)451, (short)457, (short)459, (short)462, (short)0, (short)445, (short)460, (short)452, (short)461, (short)453, (short)454, (short)455, (short)456, (short)458, (short)450, (short)457, (short)459, (short)462, (short)448, (short)606, (short)460, (short)463, (short)461, (short)464, (short)0, (short)449, (short)0, (short)606, (short)606, (short)0, (short)453, (short)606, (short)465, (short)452, (short)455, (short)463, (short)466, (short)464, (short)456, (short)454, (short)461, (short)457, (short)460, (short)462, (short)461, (short)459, (short)465, (short)467, (short)468, (short)469, (short)466, (short)470, (short)471, (short)0, (short)0, (short)472, (short)473, (short)0, (short)0, (short)474, (short)475, (short)467, (short)468, (short)469, (short)476, (short)470, (short)471, (short)463, (short)465, (short)472, (short)473, (short)464, (short)466, (short)474, (short)475, (short)477, (short)0, (short)478, (short)476, (short)0, (short)479, (short)480, (short)481, (short)482, (short)483, (short)484, (short)0, (short)485, (short)486, (short)477, (short)473, (short)478, (short)487, (short)474, (short)479, (short)480, (short)481, (short)482, (short)483, (short)484, (short)471, (short)485, (short)486, (short)472, (short)488, (short)0, (short)487, (short)489, (short)490, (short)0, (short)0, (short)491, (short)492, (short)493, (short)479, (short)494, (short)482, (short)0, (short)488, (short)476, (short)484, (short)489, (short)490, (short)477, (short)486, (short)491, (short)492, (short)493, (short)495, (short)494, (short)480, (short)481, (short)0, (short)0, (short)496, (short)487, (short)497, (short)0, (short)0, (short)498, (short)499, (short)0, (short)495, (short)492, (short)490, (short)501, (short)494, (short)493, (short)496, (short)500, (short)497, (short)491, (short)489, (short)498, (short)499, (short)488, (short)502, (short)0, (short)503, (short)501, (short)504, (short)505, (short)506, (short)500, (short)508, (short)0, (short)507, (short)509, (short)0, (short)0, (short)502, (short)495, (short)503, (short)511, (short)504, (short)505, (short)506, (short)0, (short)508, (short)497, (short)507, (short)509, (short)510, (short)500, (short)512, (short)498, (short)513, (short)511, (short)514, (short)515, (short)516, (short)504, (short)517, (short)502, (short)518, (short)501, (short)510, (short)507, (short)512, (short)519, (short)513, (short)0, (short)514, (short)515, (short)516, (short)502, (short)517, (short)505, (short)518, (short)511, (short)520, (short)521, (short)503, (short)519, (short)508, (short)512, (short)522, (short)509, (short)523, (short)0, (short)524, (short)510, (short)525, (short)526, (short)520, (short)521, (short)527, (short)514, (short)528, (short)529, (short)522, (short)530, (short)523, (short)517, (short)524, (short)531, (short)525, (short)526, (short)0, (short)516, (short)527, (short)534, (short)528, (short)529, (short)537, (short)530, (short)520, (short)522, (short)532, (short)531, (short)533, (short)0, (short)523, (short)525, (short)535, (short)534, (short)536, (short)527, (short)537, (short)528, (short)538, (short)521, (short)532, (short)539, (short)533, (short)529, (short)524, (short)0, (short)535, (short)540, (short)536, (short)0, (short)541, (short)526, (short)538, (short)542, (short)530, (short)539, (short)0, (short)543, (short)532, (short)534, (short)533, (short)540, (short)544, (short)531, (short)541, (short)545, (short)547, (short)542, (short)535, (short)537, (short)536, (short)543, (short)0, (short)546, (short)548, (short)549, (short)544, (short)0, (short)551, (short)545, (short)547, (short)550, (short)552, (short)550, (short)538, (short)553, (short)541, (short)546, (short)548, (short)549, (short)554, (short)543, (short)551, (short)555, (short)556, (short)550, (short)552, (short)557, (short)558, (short)553, (short)559, (short)560, (short)544, (short)561, (short)554, (short)562, (short)563, (short)555, (short)556, (short)546, (short)548, (short)557, (short)558, (short)0, (short)559, (short)560, (short)553, (short)561, (short)564, (short)562, (short)563, (short)565, (short)566, (short)551, (short)555, (short)556, (short)0, (short)549, (short)557, (short)567, (short)568, (short)569, (short)564, (short)573, (short)0, (short)565, (short)566, (short)571, (short)0, (short)575, (short)562, (short)561, (short)570, (short)567, (short)568, (short)569, (short)0, (short)573, (short)570, (short)574, (short)570, (short)571, (short)560, (short)575, (short)564, (short)0, (short)0, (short)576, (short)577, (short)578, (short)563, (short)567, (short)570, (short)574, (short)573, (short)569, (short)0, (short)579, (short)565, (short)571, (short)566, (short)576, (short)577, (short)578, (short)0, (short)568, (short)580, (short)581, (short)582, (short)570, (short)574, (short)579, (short)583, (short)584, (short)585, (short)586, (short)587, (short)595, (short)576, (short)591, (short)580, (short)581, (short)582, (short)0, (short)590, (short)596, (short)583, (short)584, (short)585, (short)586, (short)587, (short)595, (short)578, (short)591, (short)0, (short)597, (short)0, (short)594, (short)590, (short)596, (short)0, (short)0, (short)579, (short)598, (short)599, (short)0, (short)600, (short)601, (short)583, (short)597, (short)591, (short)594, (short)0, (short)586, (short)581, (short)590, (short)582, (short)598, (short)599, (short)590, (short)600, (short)601, (short)584, (short)602, (short)585, (short)0, (short)587, (short)603, (short)594, (short)604, (short)605, (short)0, (short)608, (short)609, (short)607, (short)610, (short)599, (short)602, (short)0, (short)598, (short)607, (short)603, (short)607, (short)604, (short)605, (short)597, (short)608, (short)609, (short)611, (short)610, (short)612, (short)0, (short)601, (short)614, (short)607, (short)613, (short)600, (short)615, (short)616, (short)0, (short)0, (short)618, (short)611, (short)603, (short)612, (short)609, (short)617, (short)614, (short)608, (short)613, (short)618, (short)615, (short)616, (short)618, (short)617, (short)617, (short)609, (short)620, (short)617, (short)611, (short)0, (short)624, (short)621, (short)625, (short)0, (short)620, (short)620, (short)626, (short)627, (short)620, (short)621, (short)621, (short)628, (short)629, (short)621, (short)624, (short)616, (short)625, (short)612, (short)630, (short)613, (short)626, (short)627, (short)631, (short)0, (short)0, (short)628, (short)629, (short)614, (short)632, (short)633, (short)634, (short)642, (short)630, (short)0, (short)0, (short)643, (short)631, (short)632, (short)633, (short)634, (short)632, (short)633, (short)634, (short)635, (short)0, (short)642, (short)626, (short)624, (short)637, (short)643, (short)625, (short)0, (short)635, (short)638, (short)627, (short)635, (short)637, (short)637, (short)639, (short)0, (short)637, (short)629, (short)638, (short)640, (short)0, (short)638, (short)639, (short)639, (short)631, (short)641, (short)639, (short)640, (short)640, (short)643, (short)644, (short)640, (short)645, (short)641, (short)641, (short)642, (short)646, (short)641, (short)647, (short)648, (short)0, (short)0, (short)0, (short)0, (short)644, (short)649, (short)645, (short)650, (short)648, (short)651, (short)646, (short)648, (short)647, (short)652, (short)649, (short)653, (short)650, (short)649, (short)651, (short)650, (short)654, (short)651, (short)652, (short)662, (short)653, (short)652, (short)655, (short)653, (short)0, (short)654, (short)661, (short)0, (short)654, (short)656, (short)655, (short)655, (short)646, (short)662, (short)655, (short)644, (short)645, (short)656, (short)656, (short)657, (short)661, (short)656, (short)647, (short)663, (short)659, (short)664, (short)660, (short)666, (short)657, (short)665, (short)0, (short)657, (short)659, (short)659, (short)660, (short)660, (short)659, (short)663, (short)660, (short)664, (short)667, (short)666, (short)661, (short)665, (short)668, (short)669, (short)670, (short)680, (short)0, (short)667, (short)671, (short)672, (short)667, (short)668, (short)669, (short)670, (short)668, (short)669, (short)670, (short)671, (short)672, (short)680, (short)671, (short)672, (short)0, (short)673, (short)0, (short)676, (short)0, (short)0, (short)0, (short)664, (short)675, (short)663, (short)673, (short)665, (short)676, (short)673, (short)677, (short)676, (short)675, (short)675, (short)666, (short)678, (short)675, (short)679, (short)677, (short)677, (short)681, (short)682, (short)677, (short)678, (short)678, (short)683, (short)0, (short)678, (short)684, (short)685, (short)0, (short)679, (short)692, (short)686, (short)681, (short)682, (short)693, (short)684, (short)685, (short)683, (short)684, (short)685, (short)686, (short)687, (short)688, (short)686, (short)692, (short)0, (short)689, (short)690, (short)693, (short)679, (short)687, (short)688, (short)694, (short)687, (short)688, (short)689, (short)690, (short)0, (short)689, (short)690, (short)691, (short)698, (short)692, (short)700, (short)682, (short)681, (short)694, (short)695, (short)691, (short)691, (short)693, (short)696, (short)691, (short)697, (short)699, (short)698, (short)695, (short)700, (short)701, (short)695, (short)696, (short)702, (short)697, (short)696, (short)703, (short)697, (short)704, (short)705, (short)699, (short)706, (short)0, (short)0, (short)701, (short)0, (short)0, (short)702, (short)0, (short)710, (short)703, (short)700, (short)704, (short)705, (short)0, (short)706, (short)707, (short)710, (short)710, (short)0, (short)0, (short)710, (short)707, (short)698, (short)707, (short)0, (short)0, (short)0, (short)702, (short)704, (short)711, (short)0, (short)706, (short)0, (short)699, (short)712, (short)707, (short)714, (short)711, (short)711, (short)701, (short)716, (short)711, (short)717, (short)712, (short)714, (short)714, (short)712, (short)715, (short)714, (short)716, (short)703, (short)717, (short)716, (short)718, (short)717, (short)715, (short)715, (short)719, (short)722, (short)715, (short)0, (short)0, (short)718, (short)721, (short)0, (short)718, (short)719, (short)722, (short)723, (short)719, (short)722, (short)721, (short)721, (short)724, (short)725, (short)721, (short)723, (short)723, (short)726, (short)727, (short)723, (short)724, (short)724, (short)725, (short)728, (short)724, (short)725, (short)726, (short)727, (short)729, (short)726, (short)727, (short)0, (short)728, (short)730, (short)731, (short)728, (short)0, (short)729, (short)0, (short)732, (short)729, (short)733, (short)730, (short)731, (short)0, (short)730, (short)731, (short)732, (short)732, (short)734, (short)733, (short)732, (short)0, (short)733, (short)735, (short)0, (short)0, (short)0, (short)734, (short)0, (short)0, (short)734, (short)0, (short)735, (short)0, (short)0, (short)735, (short)737, (short)737, (short)737, (short)737, (short)737, (short)737, (short)737, (short)737, (short)737, (short)737, (short)738, (short)738, (short)738, (short)738, (short)0, (short)738, (short)738, (short)738, (short)738, (short)738, (short)739, (short)0, (short)0, (short)0, (short)739, (short)739, (short)739, (short)740, (short)740, (short)741, (short)741, (short)742, (short)742, (short)742, (short)743, (short)743, (short)744, (short)744, (short)744, (short)744, (short)745, (short)0, (short)0, (short)0, (short)745, (short)745, (short)745, (short)745, (short)745, (short)746, (short)746, (short)0, (short)0, (short)0, (short)746, (short)746, (short)746, (short)746, (short)747, (short)0, (short)0, (short)0, (short)747, (short)747, (short)747, (short)747, (short)747, (short)748, (short)748, (short)0, (short)0, (short)0, (short)748, (short)748, (short)748, (short)748, (short)749, (short)749, (short)0, (short)0, (short)0, (short)749, (short)749, (short)749, (short)749, (short)750, (short)0, (short)0, (short)0, (short)750, (short)750, (short)750, (short)750, (short)750, (short)751, (short)751, (short)0, (short)0, (short)0, (short)751, (short)751, (short)751, (short)751, (short)752, (short)752, (short)0, (short)0, (short)0, (short)752, (short)752, (short)752, (short)752, (short)753, (short)0, (short)0, (short)0, (short)753, (short)753, (short)753, (short)753, (short)753, (short)754, (short)754, (short)0, (short)0, (short)0, (short)754, (short)754, (short)754, (short)754, (short)755, (short)755, (short)0, (short)0, (short)0, (short)755, (short)755, (short)755, (short)755, (short)756, (short)756, (short)0, (short)0, (short)0, (short)756, (short)756, (short)756, (short)756, (short)757, (short)0, (short)0, (short)0, (short)757, (short)757, (short)757, (short)757, (short)757, (short)758, (short)758, (short)0, (short)0, (short)0, (short)758, (short)758, (short)758, (short)758, (short)759, (short)0, (short)0, (short)0, (short)759, (short)759, (short)759, (short)759, (short)759, (short)760, (short)760, (short)0, (short)0, (short)0, (short)760, (short)760, (short)760, (short)760, (short)761, (short)761, (short)0, (short)0, (short)0, (short)761, (short)761, (short)761, (short)761, (short)762, (short)762, (short)0, (short)0, (short)0, (short)762, (short)762, (short)762, (short)762, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736, (short)736
};

static yy_state_type yy_last_accepting_state;

static char * yy_last_accepting_cpos;

char * yytext;

enum yytokentype
{
IDENTIFIER = 258, CONSTANT = 259, STRING_LITERAL = 260, SIZEOF = 261, PTR_OP = 262, INC_OP = 263, DEC_OP = 264, LEFT_OP = 265, RIGHT_OP = 266, LE_OP = 267, GE_OP = 268, EQ_OP = 269, NE_OP = 270, AND_OP = 271, OR_OP = 272, MUL_ASSIGN = 273, DIV_ASSIGN = 274, MOD_ASSIGN = 275, ADD_ASSIGN = 276, SUB_ASSIGN = 277, LEFT_ASSIGN = 278, RIGHT_ASSIGN = 279, AND_ASSIGN = 280, XOR_ASSIGN = 281, OR_ASSIGN = 282, TYPE_NAME = 283, TYPEDEF = 284, EXTERN = 285, STATIC = 286, AUTO = 287, REGISTER = 288, CHAR = 289, SHORT = 290, INT = 291, UINT = 292, INT64 = 293, LONG = 294, SIGNED = 295, UNSIGNED = 296, FLOAT = 297, DOUBLE = 298, CONST = 299, VOLATILE = 300, VOID = 301, VALIST = 302, STRUCT = 303, UNION = 304, ENUM = 305, ELLIPSIS = 306, CASE = 307, DEFAULT = 308, IF = 309, SWITCH = 310, WHILE = 311, DO = 312, FOR = 313, GOTO = 314, CONTINUE = 315, BREAK = 316, RETURN = 317, IFX = 318, ELSE = 319, CLASS = 320, THISCLASS = 321, CLASS_NAME = 322, PROPERTY = 323, SETPROP = 324, GETPROP = 325, NEWOP = 326, RENEW = 327, DELETE = 328, EXT_DECL = 329, EXT_STORAGE = 330, IMPORT = 331, DEFINE = 332, VIRTUAL = 333, EXT_ATTRIB = 334, PUBLIC = 335, PRIVATE = 336, TYPED_OBJECT = 337, ANY_OBJECT = 338, _INCREF = 339, EXTENSION = 340, ASM = 341, TYPEOF = 342, WATCH = 343, STOPWATCHING = 344, FIREWATCHERS = 345, WATCHABLE = 346, CLASS_DESIGNER = 347, CLASS_NO_EXPANSION = 348, CLASS_FIXED = 349, ISPROPSET = 350, CLASS_DEFAULT_PROPERTY = 351, PROPERTY_CATEGORY = 352, CLASS_DATA = 353, CLASS_PROPERTY = 354, SUBCLASS = 355, NAMESPACE = 356, NEW0OP = 357, RENEW0 = 358, VAARG = 359, DBTABLE = 360, DBFIELD = 361, DBINDEX = 362, DATABASE_OPEN = 363
};

typedef union YYSTYPE
{
int specifierType;
int i;
int declMode;
struct Identifier * id;
struct Expression * exp;
struct Specifier * specifier;
struct __ecereNameSpace__ecere__sys__OldList * list;
struct Enumerator * enumerator;
struct Declarator * declarator;
struct Pointer * pointer;
struct Initializer * initializer;
struct InitDeclarator * initDeclarator;
struct TypeName * typeName;
struct Declaration * declaration;
struct Statement * stmt;
struct FunctionDefinition * function;
struct External * external;
struct Context * context;
struct AsmField * asmField;
struct Instantiation * instance;
struct MembersInit * membersInit;
struct MemberInit * memberInit;
struct ClassFunction * classFunction;
struct ClassDefinition * _class;
struct ClassDef * classDef;
struct PropertyDef * prop;
char * string;
struct Symbol * symbol;
struct PropertyWatch * propertyWatch;
struct TemplateParameter * templateParameter;
struct TemplateArgument * templateArgument;
struct TemplateDatatype * templateDatatype;
struct DBTableEntry * dbtableEntry;
struct DBIndexItem * dbindexItem;
struct DBTableDef * dbtableDef;
} __attribute__ ((gcc_struct)) YYSTYPE;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_Enumerator;

struct Enumerator;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_InitDeclarator;

struct InitDeclarator;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_AsmField;

struct AsmField;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_ClassFunction;

struct ClassFunction;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_MembersInit;

struct MembersInit;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_MemberInit;

struct MemberInit;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_PropertyDef;

struct PropertyDef;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_PropertyWatch;

struct PropertyWatch;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_ClassDef;

struct ClassDef;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_DBTableEntry;

struct DBTableEntry;

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass_DBIndexItem;

struct DBIndexItem;

extern YYSTYPE yylval;

extern struct Location yylloc;

unsigned int echoOn = 0x1;

void SetEchoOn(unsigned int b)
{
echoOn = b;
}

extern struct Location type_yylloc;

extern struct Location expression_yylloc;

extern struct __ecereNameSpace__ecere__com__Instance * fileInput;

int preprocessor();

int comment();

void TESTTTT()
{
yylloc.end.charPos += yyleng;
yylloc.end.pos += yyleng;
type_yylloc.end.charPos += yyleng;
type_yylloc.end.pos += yyleng;
expression_yylloc.end.charPos += yyleng;
expression_yylloc.end.pos += yyleng;
}

YY_BUFFER_STATE include_stack[10];

struct __ecereNameSpace__ecere__com__Instance * fileStack[10];

char sourceFileStack[10][797];

extern char *  strcpy(char * , const char * );

void SetSomeSourceFileStack(char * fileName, int index)
{
strcpy(sourceFileStack[index], fileName);
}

struct Location locStack[10];

int declModeStack[10];

int include_stack_ptr = 0;

extern int yywrap(void);

static void yyunput(int c, char * buf_ptr);

static int input(void);

int commentCPP();

extern int check_type(void);

extern int defaultDeclMode;

extern int declMode;

extern void __ecereNameSpace__ecere__com__eInstance_DecRef(struct __ecereNameSpace__ecere__com__Instance * instance);

int yylex(void)
{
register yy_state_type yy_current_state;
register char * yy_cp, * yy_bp;
register int yy_act;

yylloc.start = yylloc.end;
type_yylloc.start = type_yylloc.end;
expression_yylloc.start = expression_yylloc.end;
if(yy_init)
{
yy_init = 0;
if(!yy_start)
yy_start = 1;
if(!yyin)
yyin = (bsl_stdin());
if(!yyout)
yyout = (bsl_stdout());
if(!yy_current_buffer)
yy_current_buffer = yy_create_buffer(yyin, 16384);
yy_load_buffer_state();
}
while(1)
{
yy_cp = yy_c_buf_p;
*yy_cp = yy_hold_char;
yy_bp = yy_cp;
yy_current_state = yy_start;
yy_match:
do
{
register YY_CHAR yy_c = yy_ec[((unsigned int)(unsigned char)*yy_cp)];

if(yy_accept[yy_current_state])
{
yy_last_accepting_state = yy_current_state;
yy_last_accepting_cpos = yy_cp;
}
while(yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state)
{
yy_current_state = (int)yy_def[yy_current_state];
if(yy_current_state >= 737)
yy_c = yy_meta[(unsigned int)yy_c];
}
yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int)yy_c];
++yy_cp;
}while(yy_base[yy_current_state] != (short)2592);
yy_find_action:
yy_act = yy_accept[yy_current_state];
if(yy_act == 0)
{
yy_cp = yy_last_accepting_cpos;
yy_current_state = yy_last_accepting_state;
yy_act = yy_accept[yy_current_state];
}
yytext = yy_bp;
yyleng = (int)(yy_cp - yy_bp);
yy_hold_char = *yy_cp;
*yy_cp = '\0';
yy_c_buf_p = yy_cp;
;
do_action:
switch(yy_act)
{
case 0:
*yy_cp = yy_hold_char;
yy_cp = yy_last_accepting_cpos;
yy_current_state = yy_last_accepting_state;
goto yy_find_action;
case 1:
TESTTTT();
{
preprocessor();
}
break;
case 2:
TESTTTT();
{
comment();
}
break;
case 3:
TESTTTT();
{
commentCPP();
}
break;
case 4:
TESTTTT();
{
return (AUTO);
}
break;
case 5:
TESTTTT();
{
return (BREAK);
}
break;
case 6:
TESTTTT();
{
return (CASE);
}
break;
case 7:
TESTTTT();
{
return (CHAR);
}
break;
case 8:
TESTTTT();
{
return (CONST);
}
break;
case 9:
TESTTTT();
{
return (CONTINUE);
}
break;
case 10:
TESTTTT();
{
return (DEFAULT);
}
break;
case 11:
TESTTTT();
{
return (DO);
}
break;
case 12:
TESTTTT();
{
return (DOUBLE);
}
break;
case 13:
TESTTTT();
{
return (ELSE);
}
break;
case 14:
TESTTTT();
{
return (ENUM);
}
break;
case 15:
TESTTTT();
{
return (EXTERN);
}
break;
case 16:
TESTTTT();
{
return (FLOAT);
}
break;
case 17:
TESTTTT();
{
return (FOR);
}
break;
case 18:
TESTTTT();
{
return (GOTO);
}
break;
case 19:
TESTTTT();
{
return (IF);
}
break;
case 20:
TESTTTT();
{
return (INT);
}
break;
case 21:
TESTTTT();
{
return (UINT);
}
break;
case 22:
TESTTTT();
{
return (LONG);
}
break;
case 23:
TESTTTT();
{
return (REGISTER);
}
break;
case 24:
TESTTTT();
{
return (RETURN);
}
break;
case 25:
TESTTTT();
{
return (SHORT);
}
break;
case 26:
TESTTTT();
{
return (SIGNED);
}
break;
case 27:
TESTTTT();
{
return (SIGNED);
}
break;
case 28:
TESTTTT();
{
return (SIZEOF);
}
break;
case 29:
TESTTTT();
{
return (STATIC);
}
break;
case 30:
TESTTTT();
{
return (STRUCT);
}
break;
case 31:
TESTTTT();
{
return (SWITCH);
}
break;
case 32:
TESTTTT();
{
return (TYPEDEF);
}
break;
case 33:
TESTTTT();
{
return (UNION);
}
break;
case 34:
TESTTTT();
{
return (UNSIGNED);
}
break;
case 35:
TESTTTT();
{
return (VOID);
}
break;
case 36:
TESTTTT();
{
return (VOLATILE);
}
break;
case 37:
TESTTTT();
{
return (VOLATILE);
}
break;
case 38:
TESTTTT();
{
return (VOLATILE);
}
break;
case 39:
TESTTTT();
{
return (WHILE);
}
break;
case 40:
TESTTTT();
{
return (PROPERTY);
}
break;
case 41:
TESTTTT();
{
return (SETPROP);
}
break;
case 42:
TESTTTT();
{
return (GETPROP);
}
break;
case 43:
TESTTTT();
{
return (ISPROPSET);
}
break;
case 44:
TESTTTT();
{
return (CLASS);
}
break;
case 45:
TESTTTT();
{
return (THISCLASS);
}
break;
case 46:
TESTTTT();
{
return (VIRTUAL);
}
break;
case 47:
TESTTTT();
{
return (DELETE);
}
break;
case 48:
TESTTTT();
{
return (NEWOP);
}
break;
case 49:
TESTTTT();
{
return (NEW0OP);
}
break;
case 50:
TESTTTT();
{
return (RENEW);
}
break;
case 51:
TESTTTT();
{
return (RENEW0);
}
break;
case 52:
TESTTTT();
{
return (IMPORT);
}
break;
case 53:
TESTTTT();
{
return (DEFINE);
}
break;
case 54:
TESTTTT();
{
return (INT64);
}
break;
case 55:
TESTTTT();
{
return (INT64);
}
break;
case 56:
TESTTTT();
{
return (VALIST);
}
break;
case 57:
TESTTTT();
{
return (VAARG);
}
break;
case 58:
TESTTTT();
{
return (EXT_ATTRIB);
}
break;
case 59:
TESTTTT();
{
return (EXT_ATTRIB);
}
break;
case 60:
TESTTTT();
{
return (EXT_ATTRIB);
}
break;
case 61:
TESTTTT();
{
return (EXT_STORAGE);
}
break;
case 62:
TESTTTT();
{
return (EXT_STORAGE);
}
break;
case 63:
TESTTTT();
{
return (EXT_STORAGE);
}
break;
case 64:
TESTTTT();
{
return (EXT_STORAGE);
}
break;
case 65:
TESTTTT();
{
return (EXT_STORAGE);
}
break;
case 66:
TESTTTT();
{
return (EXT_STORAGE);
}
break;
case 67:
TESTTTT();
{
return (EXT_STORAGE);
}
break;
case 68:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 69:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 70:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 71:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 72:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 73:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 74:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 75:
TESTTTT();
{
return (EXT_DECL);
}
break;
case 76:
TESTTTT();
{
return (PUBLIC);
}
break;
case 77:
TESTTTT();
{
return (PRIVATE);
}
break;
case 78:
TESTTTT();
{
return (TYPED_OBJECT);
}
break;
case 79:
TESTTTT();
{
return (ANY_OBJECT);
}
break;
case 80:
TESTTTT();
{
return (_INCREF);
}
break;
case 81:
TESTTTT();
{
return (EXTENSION);
}
break;
case 82:
TESTTTT();
{
return (EXTENSION);
}
break;
case 83:
TESTTTT();
{
return (ASM);
}
break;
case 84:
TESTTTT();
{
return (ASM);
}
break;
case 85:
TESTTTT();
{
return (ASM);
}
break;
case 86:
TESTTTT();
{
return (TYPEOF);
}
break;
case 87:
TESTTTT();
{
return (WATCH);
}
break;
case 88:
TESTTTT();
{
return (STOPWATCHING);
}
break;
case 89:
TESTTTT();
{
return (FIREWATCHERS);
}
break;
case 90:
TESTTTT();
{
return (WATCHABLE);
}
break;
case 91:
TESTTTT();
{
return (CLASS_DESIGNER);
}
break;
case 92:
TESTTTT();
{
return (CLASS_NO_EXPANSION);
}
break;
case 93:
TESTTTT();
{
return (CLASS_FIXED);
}
break;
case 94:
TESTTTT();
{
return (CLASS_DEFAULT_PROPERTY);
}
break;
case 95:
TESTTTT();
{
return (PROPERTY_CATEGORY);
}
break;
case 96:
TESTTTT();
{
return (CLASS_DATA);
}
break;
case 97:
TESTTTT();
{
return (CLASS_PROPERTY);
}
break;
case 98:
TESTTTT();
{
return (SUBCLASS);
}
break;
case 99:
TESTTTT();
{
return (NAMESPACE);
}
break;
case 100:
TESTTTT();
{
return (DBTABLE);
}
break;
case 101:
TESTTTT();
{
return (DBFIELD);
}
break;
case 102:
TESTTTT();
{
return (DBINDEX);
}
break;
case 103:
TESTTTT();
{
return (DATABASE_OPEN);
}
break;
case 104:
TESTTTT();
{
return (check_type());
}
break;
case 105:
TESTTTT();
{
return (CONSTANT);
}
break;
case 106:
TESTTTT();
{
return (CONSTANT);
}
break;
case 107:
TESTTTT();
{
return (CONSTANT);
}
break;
case 108:
TESTTTT();
{
return (CONSTANT);
}
break;
case 109:
TESTTTT();
{
return (CONSTANT);
}
break;
case 110:
TESTTTT();
{
return (CONSTANT);
}
break;
case 111:
TESTTTT();
{
return (CONSTANT);
}
break;
case 112:
TESTTTT();
{
return (STRING_LITERAL);
}
break;
case 113:
TESTTTT();
{
return (ELLIPSIS);
}
break;
case 114:
TESTTTT();
{
return (RIGHT_ASSIGN);
}
break;
case 115:
TESTTTT();
{
return (LEFT_ASSIGN);
}
break;
case 116:
TESTTTT();
{
return (ADD_ASSIGN);
}
break;
case 117:
TESTTTT();
{
return (SUB_ASSIGN);
}
break;
case 118:
TESTTTT();
{
return (MUL_ASSIGN);
}
break;
case 119:
TESTTTT();
{
return (DIV_ASSIGN);
}
break;
case 120:
TESTTTT();
{
return (MOD_ASSIGN);
}
break;
case 121:
TESTTTT();
{
return (AND_ASSIGN);
}
break;
case 122:
TESTTTT();
{
return (XOR_ASSIGN);
}
break;
case 123:
TESTTTT();
{
return (OR_ASSIGN);
}
break;
case 124:
TESTTTT();
{
return (RIGHT_OP);
}
break;
case 125:
TESTTTT();
{
return (LEFT_OP);
}
break;
case 126:
TESTTTT();
{
return (INC_OP);
}
break;
case 127:
TESTTTT();
{
return (DEC_OP);
}
break;
case 128:
TESTTTT();
{
return (PTR_OP);
}
break;
case 129:
TESTTTT();
{
return (AND_OP);
}
break;
case 130:
TESTTTT();
{
return (OR_OP);
}
break;
case 131:
TESTTTT();
{
return (LE_OP);
}
break;
case 132:
TESTTTT();
{
return (GE_OP);
}
break;
case 133:
TESTTTT();
{
return (EQ_OP);
}
break;
case 134:
TESTTTT();
{
return (NE_OP);
}
break;
case 135:
TESTTTT();
{
return (';');
}
break;
case 136:
TESTTTT();
{
return ('{');
}
break;
case 137:
TESTTTT();
{
return ('}');
}
break;
case 138:
TESTTTT();
{
return (',');
}
break;
case 139:
TESTTTT();
{
return (':');
}
break;
case 140:
TESTTTT();
{
return ('=');
}
break;
case 141:
TESTTTT();
{
return ('(');
}
break;
case 142:
TESTTTT();
{
return (')');
}
break;
case 143:
TESTTTT();
{
return ('[');
}
break;
case 144:
TESTTTT();
{
return (']');
}
break;
case 145:
TESTTTT();
{
return ('.');
}
break;
case 146:
TESTTTT();
{
return ('&');
}
break;
case 147:
TESTTTT();
{
return ('!');
}
break;
case 148:
TESTTTT();
{
return ('~');
}
break;
case 149:
TESTTTT();
{
return ('-');
}
break;
case 150:
TESTTTT();
{
return ('+');
}
break;
case 151:
TESTTTT();
{
return ('*');
}
break;
case 152:
TESTTTT();
{
return ('/');
}
break;
case 153:
TESTTTT();
{
return ('%');
}
break;
case 154:
TESTTTT();
{
return ('<');
}
break;
case 155:
TESTTTT();
{
return ('>');
}
break;
case 156:
TESTTTT();
{
return ('^');
}
break;
case 157:
TESTTTT();
{
return ('|');
}
break;
case 158:
TESTTTT();
{
return ('?');
}
break;
case 159:
TESTTTT();
{
return ('$');
}
break;
case 166LL:
{
if(--include_stack_ptr < 0)
{
return 0;
}
else
{
(__ecereNameSpace__ecere__com__eInstance_DecRef(fileInput), fileInput = 0);
yy_delete_buffer(yy_current_buffer);
fileInput = fileStack[include_stack_ptr];
yylloc = locStack[include_stack_ptr];
type_yylloc = locStack[include_stack_ptr];
expression_yylloc = locStack[include_stack_ptr];
yy_switch_to_buffer(include_stack[include_stack_ptr]);
defaultDeclMode = declMode = declModeStack[include_stack_ptr];
}
}
break;
case 160:
TESTTTT();
{
yylloc.start = yylloc.end;
type_yylloc.start = type_yylloc.end;
expression_yylloc.start = expression_yylloc.end;
}
break;
case 161:
TESTTTT();
{
yylloc.end.charPos = 1;
yylloc.end.line += yyleng;
yylloc.start = yylloc.end;
type_yylloc.end.charPos = 1;
type_yylloc.end.line += yyleng;
type_yylloc.start = type_yylloc.end;
expression_yylloc.end.charPos = 1;
expression_yylloc.end.line += yyleng;
expression_yylloc.start = expression_yylloc.end;
}
break;
case 162:
TESTTTT();
{
yylloc.start.charPos++;
yylloc.end.charPos = yylloc.start.charPos;
yylloc.start.pos = yylloc.end.pos;
expression_yylloc.start.charPos++;
expression_yylloc.end.charPos = expression_yylloc.start.charPos;
expression_yylloc.start.pos = expression_yylloc.end.pos;
type_yylloc.start.charPos++;
type_yylloc.end.charPos = type_yylloc.start.charPos;
type_yylloc.start.pos = type_yylloc.end.pos;
}
break;
case 163:
TESTTTT();
{
yylloc.start = yylloc.end;
expression_yylloc.start = expression_yylloc.end;
type_yylloc.start = type_yylloc.end;
}
break;
case 164:
TESTTTT();
(void)fwrite(yytext, yyleng, 1, yyout);
break;
case 165:
{
int yy_amount_of_matched_text = (int)(yy_cp - yytext) - 1;

*yy_cp = yy_hold_char;
if((*yy_current_buffer).yy_buffer_status == 0)
{
yy_n_chars = (*yy_current_buffer).yy_n_chars;
(*yy_current_buffer).yy_input_file = yyin;
(*yy_current_buffer).yy_buffer_status = 1;
}
if(yy_c_buf_p <= &(*yy_current_buffer).yy_ch_buf[yy_n_chars])
{
yy_state_type yy_next_state;

yy_c_buf_p = yytext + yy_amount_of_matched_text;
yy_current_state = yy_get_previous_state();
yy_next_state = yy_try_NUL_trans(yy_current_state);
yy_bp = yytext + 0;
if(yy_next_state)
{
yy_cp = ++yy_c_buf_p;
yy_current_state = yy_next_state;
goto yy_match;
}
else
{
yy_cp = yy_c_buf_p;
goto yy_find_action;
}
}
else
switch(yy_get_next_buffer())
{
case 1:
{
yy_did_buffer_switch_on_eof = 0;
if(yywrap())
{
yy_c_buf_p = yytext + 0;
yy_act = (165 + ((yy_start - 1) / 2) + 1);
goto do_action;
}
else
{
if(!yy_did_buffer_switch_on_eof)
yyrestart(yyin);
}
break;
}
case 0:
yy_c_buf_p = yytext + yy_amount_of_matched_text;
yy_current_state = yy_get_previous_state();
yy_cp = yy_c_buf_p;
yy_bp = yytext + 0;
goto yy_match;
case 2:
yy_c_buf_p = &(*yy_current_buffer).yy_ch_buf[yy_n_chars];
yy_current_state = yy_get_previous_state();
yy_cp = yy_c_buf_p;
yy_bp = yytext + 0;
goto yy_find_action;
}
break;
}
default:
yy_fatal_error("fatal flex scanner internal error--no action found");
}
}
}

int __ecereVMethodID___ecereNameSpace__ecere__sys__File_Read;

static int yy_get_next_buffer()
{
register char * dest = (*yy_current_buffer).yy_ch_buf;
register char * source = yytext;
register int number_to_move, i;
int ret_val;

if(yy_c_buf_p > &(*yy_current_buffer).yy_ch_buf[yy_n_chars + 1])
yy_fatal_error("fatal flex scanner internal error--end of buffer missed");
if((*yy_current_buffer).yy_fill_buffer == 0)
{
if(yy_c_buf_p - yytext - 0 == 1)
{
return 1;
}
else
{
return 2;
}
}
number_to_move = (int)(yy_c_buf_p - yytext) - 1;
for(i = 0; i < number_to_move; ++i)
*(dest++) = *(source++);
if((*yy_current_buffer).yy_buffer_status == 2)
(*yy_current_buffer).yy_n_chars = yy_n_chars = 0;
else
{
int num_to_read = (*yy_current_buffer).yy_buf_size - number_to_move - 1;

while(num_to_read <= 0)
{
YY_BUFFER_STATE b = yy_current_buffer;
int yy_c_buf_p_offset = (int)(yy_c_buf_p - (*b).yy_ch_buf);

if((*b).yy_is_our_buffer)
{
int new_size = (*b).yy_buf_size * 2;

if(new_size <= 0)
(*b).yy_buf_size += (*b).yy_buf_size / 8;
else
(*b).yy_buf_size *= 2;
(*b).yy_ch_buf = (char *)yy_flex_realloc((void *)(*b).yy_ch_buf, (*b).yy_buf_size + 2);
}
else
(*b).yy_ch_buf = 0;
if(!(*b).yy_ch_buf)
yy_fatal_error("fatal error - scanner input buffer overflow");
yy_c_buf_p = &(*b).yy_ch_buf[yy_c_buf_p_offset];
num_to_read = (*yy_current_buffer).yy_buf_size - number_to_move - 1;
}
if(num_to_read > 8192)
num_to_read = 8192;
yy_n_chars = ((int (*)(struct __ecereNameSpace__ecere__com__Instance *, void *  buffer, unsigned int size, unsigned int count))fileInput->_vTbl[__ecereVMethodID___ecereNameSpace__ecere__sys__File_Read])(fileInput, (&(*yy_current_buffer).yy_ch_buf[number_to_move]), 1, num_to_read);
(*yy_current_buffer).yy_n_chars = yy_n_chars;
}
if(yy_n_chars == 0)
{
if(number_to_move == 0)
{
ret_val = 1;
yyrestart(yyin);
}
else
{
ret_val = 2;
(*yy_current_buffer).yy_buffer_status = 2;
}
}
else
ret_val = 0;
yy_n_chars += number_to_move;
(*yy_current_buffer).yy_ch_buf[yy_n_chars] = (char)0;
(*yy_current_buffer).yy_ch_buf[yy_n_chars + 1] = (char)0;
yytext = &(*yy_current_buffer).yy_ch_buf[0];
return ret_val;
}

static yy_state_type yy_get_previous_state()
{
register yy_state_type yy_current_state;
register char * yy_cp;

yy_current_state = yy_start;
for(yy_cp = yytext + 0; yy_cp < yy_c_buf_p; ++yy_cp)
{
register YY_CHAR yy_c = (*yy_cp ? yy_ec[((unsigned int)(unsigned char)*yy_cp)] : (unsigned char)1);

if(yy_accept[yy_current_state])
{
yy_last_accepting_state = yy_current_state;
yy_last_accepting_cpos = yy_cp;
}
while(yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state)
{
yy_current_state = (int)yy_def[yy_current_state];
if(yy_current_state >= 737)
yy_c = yy_meta[(unsigned int)yy_c];
}
yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int)yy_c];
}
return yy_current_state;
}

static yy_state_type yy_try_NUL_trans(yy_state_type yy_current_state)
{
register int yy_is_jam;
register char * yy_cp = yy_c_buf_p;
register YY_CHAR yy_c = (unsigned char)1;

if(yy_accept[yy_current_state])
{
yy_last_accepting_state = yy_current_state;
yy_last_accepting_cpos = yy_cp;
}
while(yy_chk[yy_base[yy_current_state] + yy_c] != yy_current_state)
{
yy_current_state = (int)yy_def[yy_current_state];
if(yy_current_state >= 737)
yy_c = yy_meta[(unsigned int)yy_c];
}
yy_current_state = yy_nxt[yy_base[yy_current_state] + (unsigned int)yy_c];
yy_is_jam = (yy_current_state == 736);
return yy_is_jam ? 0 : yy_current_state;
}

static void yyunput(int c, register char * yy_bp)
{
register char * yy_cp = yy_c_buf_p;

*yy_cp = yy_hold_char;
if(yy_cp < (*yy_current_buffer).yy_ch_buf + 2)
{
register int number_to_move = yy_n_chars + 2;
register char * dest = &(*yy_current_buffer).yy_ch_buf[(*yy_current_buffer).yy_buf_size + 2];
register char * source = &(*yy_current_buffer).yy_ch_buf[number_to_move];

while(source > (*yy_current_buffer).yy_ch_buf)
*--dest = *--source;
yy_cp += (int)(dest - source);
yy_bp += (int)(dest - source);
(*yy_current_buffer).yy_n_chars = yy_n_chars = (*yy_current_buffer).yy_buf_size;
if(yy_cp < (*yy_current_buffer).yy_ch_buf + 2)
yy_fatal_error("flex scanner push-back overflow");
}
*--yy_cp = (char)c;
yytext = yy_bp;
yy_hold_char = *yy_cp;
yy_c_buf_p = yy_cp;
}

static int input()
{
int c;

*yy_c_buf_p = yy_hold_char;
if(*yy_c_buf_p == (char)0)
{
if(yy_c_buf_p < &(*yy_current_buffer).yy_ch_buf[yy_n_chars])
*yy_c_buf_p = '\0';
else
{
int offset = yy_c_buf_p - yytext;

++yy_c_buf_p;
switch(yy_get_next_buffer())
{
case 2:
yyrestart(yyin);
case 1:
{
if(yywrap())
return (-1);
if(!yy_did_buffer_switch_on_eof)
yyrestart(yyin);
return input();
}
case 0:
yy_c_buf_p = yytext + offset;
break;
}
}
}
c = *(unsigned char *)yy_c_buf_p;
*yy_c_buf_p = '\0';
yy_hold_char = *++yy_c_buf_p;
return c;
}

void yyrestart(FILE * input_file)
{
if(!yy_current_buffer)
yy_current_buffer = yy_create_buffer(yyin, 16384);
yy_init_buffer(yy_current_buffer, input_file);
yy_load_buffer_state();
}

void yy_switch_to_buffer(YY_BUFFER_STATE new_buffer)
{
if(yy_current_buffer == new_buffer)
return ;
if(yy_current_buffer)
{
*yy_c_buf_p = yy_hold_char;
(*yy_current_buffer).yy_buf_pos = yy_c_buf_p;
(*yy_current_buffer).yy_n_chars = yy_n_chars;
}
yy_current_buffer = new_buffer;
yy_load_buffer_state();
yy_did_buffer_switch_on_eof = 1;
}

void yy_load_buffer_state(void)
{
yy_n_chars = (*yy_current_buffer).yy_n_chars;
yytext = yy_c_buf_p = (*yy_current_buffer).yy_buf_pos;
yyin = (*yy_current_buffer).yy_input_file;
yy_hold_char = *yy_c_buf_p;
}

YY_BUFFER_STATE yy_create_buffer(FILE * file, int size)
{
YY_BUFFER_STATE b;

b = (YY_BUFFER_STATE)yy_flex_alloc(sizeof(struct yy_buffer_state));
if(!b)
yy_fatal_error("out of dynamic memory in yy_create_buffer()");
(*b).yy_buf_size = size;
(*b).yy_ch_buf = (char *)yy_flex_alloc((*b).yy_buf_size + 2);
if(!(*b).yy_ch_buf)
yy_fatal_error("out of dynamic memory in yy_create_buffer()");
(*b).yy_is_our_buffer = 1;
yy_init_buffer(b, file);
return b;
}

void yy_delete_buffer(YY_BUFFER_STATE b)
{
if(!b)
return ;
if(b == yy_current_buffer)
yy_current_buffer = (YY_BUFFER_STATE)0;
if((*b).yy_is_our_buffer)
yy_flex_free((void *)(*b).yy_ch_buf);
yy_flex_free((void *)b);
}

void yy_init_buffer(YY_BUFFER_STATE b, FILE * file)
{
yy_flush_buffer(b);
(*b).yy_input_file = file;
(*b).yy_fill_buffer = 1;
(*b).yy_is_interactive = 0;
}

void yy_flush_buffer(YY_BUFFER_STATE b)
{
if(!b)
return ;
(*b).yy_n_chars = 0;
(*b).yy_ch_buf[0] = (char)0;
(*b).yy_ch_buf[1] = (char)0;
(*b).yy_buf_pos = &(*b).yy_ch_buf[0];
(*b).yy_at_bol = 1;
(*b).yy_buffer_status = 0;
if(b == yy_current_buffer)
yy_load_buffer_state();
}

YY_BUFFER_STATE yy_scan_buffer(char * base, yy_size_t size)
{
YY_BUFFER_STATE b;

if(size < 2 || base[size - 2] != (char)0 || base[size - 1] != (char)0)
return 0;
b = (YY_BUFFER_STATE)yy_flex_alloc(sizeof(struct yy_buffer_state));
if(!b)
yy_fatal_error("out of dynamic memory in yy_scan_buffer()");
(*b).yy_buf_size = size - 2;
(*b).yy_buf_pos = (*b).yy_ch_buf = base;
(*b).yy_is_our_buffer = 0;
(*b).yy_input_file = 0;
(*b).yy_n_chars = (*b).yy_buf_size;
(*b).yy_is_interactive = 0;
(*b).yy_at_bol = 1;
(*b).yy_fill_buffer = 0;
(*b).yy_buffer_status = 0;
yy_switch_to_buffer(b);
return b;
}

YY_BUFFER_STATE yy_scan_string(const char * yy_str)
{
int len;

for(len = 0; yy_str[len]; ++len)
;
return yy_scan_bytes(yy_str, len);
}

YY_BUFFER_STATE yy_scan_bytes(const char * bytes, int len)
{
YY_BUFFER_STATE b;
char * buf;
yy_size_t n;
int i;

n = len + 2;
buf = (char *)yy_flex_alloc(n);
if(!buf)
yy_fatal_error("out of dynamic memory in yy_scan_bytes()");
for(i = 0; i < len; ++i)
buf[i] = bytes[i];
buf[len] = buf[len + 1] = (char)0;
b = yy_scan_buffer(buf, n);
if(!b)
yy_fatal_error("bad buffer in yy_scan_bytes()");
(*b).yy_is_our_buffer = 1;
return b;
}

static void yy_fatal_error(const char msg[])
{
(void)fprintf((bsl_stderr()), "%s\n", msg);
exit(2);
}

static void * yy_flex_alloc(yy_size_t size)
{
return (void *)malloc(size);
}

static void * yy_flex_realloc(void * ptr, yy_size_t size)
{
return (void *)realloc((char *)ptr, size);
}

static void yy_flex_free(void * ptr)
{
free(ptr);
}

yywrap()
{
return (1);
}

int comment()
{
int c, last = 0;

for(; ; )
{
c = input();
if(c == (-1))
break;
if(c == '\n')
{
yylloc.end.charPos = 1;
yylloc.end.pos++;
yylloc.end.line++;
}
else if(c == '\t')
{
yylloc.end.charPos++;
yylloc.end.pos++;
}
else
{
yylloc.end.charPos++;
yylloc.end.pos++;
}
if(c == '/' && last == '*')
break;
last = c;
}
yylloc.start = yylloc.end;
return 0;
}

int commentCPP()
{
int c, last = 0;

for(; ; )
{
c = input();
if(c == (-1))
break;
if(c == '\n')
{
yylloc.end.charPos = 1;
yylloc.end.pos++;
yylloc.end.line++;
break;
}
else if(c == '\t')
{
yylloc.end.charPos++;
yylloc.end.pos++;
}
else
{
yylloc.end.charPos++;
yylloc.end.pos++;
}
last = c;
}
yylloc.start = yylloc.end;
return 0;
}

extern int __ecereNameSpace__ecere__sys__GetValue(char * *  buffer);

extern unsigned int __ecereNameSpace__ecere__sys__GetString(char * *  buffer, char *  string, int max);

extern char *  __ecereNameSpace__ecere__sys__GetExtension(char *  string, char *  output);

extern int strcmp(const char * , const char * );

extern int GetIncludeFileID(char *  includeFile);

extern char *  __ecereNameSpace__ecere__sys__TrimLSpaces(char *  string, char *  output);

extern int strncmp(const char * , const char * , int n);

extern void *  memmove(void * , const void * , unsigned int size);

extern int strlen(const char * );

extern char *  strncpy(char * , const char * , int n);

extern char *  __ecereNameSpace__ecere__GetTranslatedString(struct __ecereNameSpace__ecere__com__Instance * module, char *  string, char *  stringAndContext);

extern struct __ecereNameSpace__ecere__com__Instance * __thisModule;

extern unsigned int inCompiler;

extern int FindIncludeFileID(char *  includeFile);

extern struct __ecereNameSpace__ecere__com__Instance * OpenIncludeFile(char *  includeFile);

extern int printf(char * , ...);

int preprocessor()
{
int c, last = 0;
int count = 0;
char line[1024];

line[0] = '\0';
for(; ; )
{
c = input();
if(c == (-1))
break;
if(c == '\n')
{
yylloc.end.charPos = 1;
yylloc.end.pos++;
yylloc.end.line++;
if(last != '\\')
{
char * pointer = line + 1;
int lineNumber;

line[count] = (char)0;
lineNumber = __ecereNameSpace__ecere__sys__GetValue(&pointer);
if(lineNumber)
{
char fileName[797];
int inOut;

__ecereNameSpace__ecere__sys__GetString(&pointer, fileName, (797));
inOut = __ecereNameSpace__ecere__sys__GetValue(&pointer);
if(inOut == 1)
{
char extension[17];

defaultDeclMode = declModeStack[include_stack_ptr] = declMode;
__ecereNameSpace__ecere__sys__GetExtension(fileName, extension);
if(!strcmp(extension, "c") || !strcmp(extension, "h"))
declMode = defaultDeclMode = 0;
include_stack_ptr++;
}
else if(inOut == 2)
{
include_stack_ptr--;
defaultDeclMode = declMode = declModeStack[include_stack_ptr];
}
yylloc.end.charPos = 1;
yylloc.end.line = lineNumber;
yylloc.end.included = (include_stack_ptr > 0) ? (unsigned int)GetIncludeFileID(fileName) : (unsigned int)0;
}
break;
}
count = 0;
}
else if(c == '\t')
{
yylloc.end.charPos++;
yylloc.end.pos++;
line[count++] = c;
}
else
{
yylloc.end.pos++;
if(c != '\r')
{
yylloc.end.charPos++;
line[count++] = c;
}
}
last = c;
}
yylloc.start = yylloc.end;
line[count] = (char)0;
__ecereNameSpace__ecere__sys__TrimLSpaces(line, line);
for(c = 0; line[c] && line[c] != ' '; c++)
;
if(!strncmp(line, "include", c))
{
char includeFile[797] = "";

memmove(line, line + c, strlen(line + c) + 1);
__ecereNameSpace__ecere__sys__TrimLSpaces(line, line);
if(line[0] == '\"')
{
for(c = 1; line[c]; c++)
{
if(line[c] == '\"')
{
strncpy(includeFile, line + 1, c - 1);
includeFile[c - 1] = '\0';
break;
}
}
}
else if(line[0] == '<')
{
for(c = 1; line[c]; c++)
if(line[c] == '>')
{
strncpy(includeFile, line + 1, c - 1);
includeFile[c - 1] = '\0';
break;
}
}
if(include_stack_ptr >= (10))
{
fprintf((bsl_stderr()), __ecereNameSpace__ecere__GetTranslatedString(__thisModule, "Includes nested too deeply", (((void *)0))));
exit(1);
}
if(inCompiler || !FindIncludeFileID(includeFile))
{
struct __ecereNameSpace__ecere__com__Instance * file = OpenIncludeFile(includeFile);

if(file)
{
char extension[17];

fileStack[include_stack_ptr] = fileInput;
locStack[include_stack_ptr] = yylloc;
defaultDeclMode = declModeStack[include_stack_ptr] = declMode;
include_stack[include_stack_ptr++] = yy_current_buffer;
yylloc.start.charPos = yylloc.end.charPos = 1;
yylloc.start.line = yylloc.end.line = 1;
yylloc.start.pos = yylloc.end.pos = 0;
yylloc.start.included = yylloc.end.included = (unsigned int)GetIncludeFileID(includeFile);
__ecereNameSpace__ecere__sys__GetExtension(includeFile, extension);
if(!strcmp(extension, "c") || !strcmp(extension, "h"))
declMode = defaultDeclMode = 0;
fileInput = file;
yy_switch_to_buffer(yy_create_buffer(fileInput, 16384));
yy_start = 1 + 2 * (0);
}
else
printf("");
}
}
return 0;
}

void resetScanner()
{
yy_flush_buffer(yy_current_buffer);
yylloc.start.charPos = yylloc.end.charPos = 1;
yylloc.start.line = yylloc.end.line = 1;
yylloc.start.pos = yylloc.end.pos = 0;
yylloc.start.included = yylloc.end.included = 0x0;
expression_yylloc.start.charPos = expression_yylloc.end.charPos = 1;
expression_yylloc.start.line = expression_yylloc.end.line = 1;
expression_yylloc.start.pos = expression_yylloc.end.pos = 0;
expression_yylloc.start.included = expression_yylloc.end.included = 0x0;
type_yylloc.start.charPos = type_yylloc.end.charPos = 1;
type_yylloc.start.line = type_yylloc.end.line = 1;
type_yylloc.start.pos = type_yylloc.end.pos = 0;
type_yylloc.start.included = type_yylloc.end.included = 0x0;
include_stack_ptr = 0;
}

void resetScannerPos(struct CodePosition * pos)
{
yy_flush_buffer(yy_current_buffer);
yylloc.start = yylloc.end = *pos;
type_yylloc.start = type_yylloc.end = *pos;
expression_yylloc.start = expression_yylloc.end = *pos;
}

extern struct __ecereNameSpace__ecere__com__Class * __ecereNameSpace__ecere__com__eSystem_RegisterClass(int type, char *  name, char *  baseName, int size, int sizeClass, unsigned int (* )(void * ), void (* )(void * ), struct __ecereNameSpace__ecere__com__Instance * module, int declMode, int inheritanceAccess);

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__NameSpace;

struct __ecereNameSpace__ecere__com__NameSpace
{
char *  name;
struct __ecereNameSpace__ecere__com__NameSpace *  btParent;
struct __ecereNameSpace__ecere__com__NameSpace *  left;
struct __ecereNameSpace__ecere__com__NameSpace *  right;
int depth;
struct __ecereNameSpace__ecere__com__NameSpace *  parent;
struct __ecereNameSpace__ecere__sys__BinaryTree nameSpaces;
struct __ecereNameSpace__ecere__sys__BinaryTree classes;
struct __ecereNameSpace__ecere__sys__BinaryTree defines;
struct __ecereNameSpace__ecere__sys__BinaryTree functions;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__Module;

struct __ecereNameSpace__ecere__com__Module
{
struct __ecereNameSpace__ecere__com__Instance * application;
struct __ecereNameSpace__ecere__sys__OldList classes;
struct __ecereNameSpace__ecere__sys__OldList defines;
struct __ecereNameSpace__ecere__sys__OldList functions;
struct __ecereNameSpace__ecere__sys__OldList modules;
struct __ecereNameSpace__ecere__com__Instance * prev;
struct __ecereNameSpace__ecere__com__Instance * next;
char *  name;
void *  library;
void *  Unload;
int importType;
int origImportType;
struct __ecereNameSpace__ecere__com__NameSpace privateNameSpace;
struct __ecereNameSpace__ecere__com__NameSpace publicNameSpace;
} __attribute__ ((gcc_struct));

extern struct __ecereNameSpace__ecere__com__DataMember * __ecereNameSpace__ecere__com__eClass_AddDataMember(struct __ecereNameSpace__ecere__com__Class * _class, char *  name, char *  type, unsigned int size, unsigned int alignment, int declMode);

extern struct __ecereNameSpace__ecere__com__Class * __ecereClass___ecereNameSpace__ecere__com__GlobalFunction;

struct __ecereNameSpace__ecere__com__GlobalFunction;

extern struct __ecereNameSpace__ecere__com__GlobalFunction * __ecereNameSpace__ecere__com__eSystem_RegisterFunction(char *  name, char *  type, void *  func, struct __ecereNameSpace__ecere__com__Instance * module, int declMode);

void __ecereRegisterModule_lexer(struct __ecereNameSpace__ecere__com__Instance * module)
{
struct __ecereNameSpace__ecere__com__Class * class;

class = __ecereNameSpace__ecere__com__eSystem_RegisterClass(1, "yy_buffer_state", 0, sizeof(struct yy_buffer_state), 0, 0, 0, module, 2, 1);
if(((struct __ecereNameSpace__ecere__com__Module *)(((char *)module + 12)))->application == ((struct __ecereNameSpace__ecere__com__Module *)(((char *)__thisModule + 12)))->application && class)
__ecereClass_yy_buffer_state = class;
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_input_file", "void *", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_ch_buf", "char *", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_buf_pos", "char *", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_buf_size", "uint", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_n_chars", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_is_our_buffer", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_is_interactive", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_at_bol", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_fill_buffer", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eClass_AddDataMember(class, "yy_buffer_status", "int", 4, 4, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetEchoOn", "void SetEchoOn(bool b)", SetEchoOn, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("TESTTTT", "void TESTTTT(void)", TESTTTT, module, 2);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("SetSomeSourceFileStack", "void SetSomeSourceFileStack(char * fileName, int index)", SetSomeSourceFileStack, module, 1);
__ecereNameSpace__ecere__com__eSystem_RegisterFunction("resetScanner", "void resetScanner(void)", resetScanner, module, 1);
}

void __ecereUnregisterModule_lexer(struct __ecereNameSpace__ecere__com__Instance * module)
{

}

