.PHONY: all objdir cleantarget clean realclean distclean

# CORE VARIABLES

MODULE := libpng
CONFIG := release
ifndef COMPILER
COMPILER := default
endif

TARGET_TYPE = staticlib

# FLAGS

ECFLAGS =
ifndef DEBIAN_PACKAGE
CFLAGS =
LDFLAGS =
endif
PRJ_CFLAGS =
CECFLAGS =
OFLAGS =
LIBS =

ifdef DEBUG
NOSTRIP := y
endif

CONSOLE = -mwindows

# INCLUDES

_CF_DIR = ../../

include $(_CF_DIR)crossplatform.mk
include $(_CF_DIR)default.cf

# POST-INCLUDES VARIABLES

OBJ = obj/$(CONFIG).$(PLATFORM)/

RES = 

TARGET = obj/$(CONFIG).$(PLATFORM)/$(LP)png$(A)

_OBJECTS = \
	$(OBJ)png.o \
	$(OBJ)pngerror.o \
	$(OBJ)pngget.o \
	$(OBJ)pngmem.o \
	$(OBJ)pngpread.o \
	$(OBJ)pngread.o \
	$(OBJ)pngrio.o \
	$(OBJ)pngrtran.o \
	$(OBJ)pngrutil.o \
	$(OBJ)pngset.o \
	$(OBJ)pngtrans.o \
	$(OBJ)pngwio.o \
	$(OBJ)pngwrite.o \
	$(OBJ)pngwtran.o \
	$(OBJ)pngwutil.o

OBJECTS = $(_OBJECTS)

SOURCES = \
	./png.c \
	./pngerror.c \
	./pngget.c \
	./pngmem.c \
	./pngpread.c \
	./pngread.c \
	./pngrio.c \
	./pngrtran.c \
	./pngrutil.c \
	./pngset.c \
	./pngtrans.c \
	./pngwio.c \
	./pngwrite.c \
	./pngwtran.c \
	./pngwutil.c

RESOURCES =

LIBS += $(SHAREDLIB) $(EXECUTABLE) $(LINKOPT)

PRJ_CFLAGS += \
	 $(if $(DEBUG), -g, -O2 -ffast-math) $(FPIC) -w \
			 -I. \
			 -I../zlib





CECFLAGS += -cpp $(_CPP)

ifndef STATIC_LIBRARY_TARGET
OFLAGS +=
endif

# TARGETS

all: objdir $(TARGET)

objdir:
	$(if $(wildcard $(OBJ)),,$(call mkdirq,$(OBJ)))

$(TARGET): $(SOURCES) $(RESOURCES) | objdir $(SYMBOLS) $(OBJECTS)
	$(AR) rcs $(TARGET) $(OBJECTS) $(LIBS)

# SYMBOL RULES

# C OBJECT RULES

# OBJECT RULES

$(OBJ)png.o: ./png.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./png.c -o $(OBJ)png.o

$(OBJ)pngerror.o: ./pngerror.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./pngerror.c -o $(OBJ)pngerror.o

$(OBJ)pngget.o: ./pngget.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./pngget.c -o $(OBJ)pngget.o

$(OBJ)pngmem.o: ./pngmem.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./pngmem.c -o $(OBJ)pngmem.o

$(OBJ)pngpread.o: ./pngpread.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./pngpread.c -o $(OBJ)pngpread.o

$(OBJ)pngread.o: ./pngread.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./pngread.c -o $(OBJ)pngread.o

$(OBJ)pngrio.o: ./pngrio.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./pngrio.c -o $(OBJ)pngrio.o

$(OBJ)pngrtran.o: ./pngrtran.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./pngrtran.c -o $(OBJ)pngrtran.o

$(OBJ)pngrutil.o: ./pngrutil.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./pngrutil.c -o $(OBJ)pngrutil.o

$(OBJ)pngset.o: ./pngset.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./pngset.c -o $(OBJ)pngset.o

$(OBJ)pngtrans.o: ./pngtrans.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./pngtrans.c -o $(OBJ)pngtrans.o

$(OBJ)pngwio.o: ./pngwio.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./pngwio.c -o $(OBJ)pngwio.o

$(OBJ)pngwrite.o: ./pngwrite.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./pngwrite.c -o $(OBJ)pngwrite.o

$(OBJ)pngwtran.o: ./pngwtran.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./pngwtran.c -o $(OBJ)pngwtran.o

$(OBJ)pngwutil.o: ./pngwutil.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c ./pngwutil.c -o $(OBJ)pngwutil.o

cleantarget: objdir
	$(call rmq,$(TARGET))

clean: cleantarget
	$(call rmq,$(_OBJECTS))

realclean: cleantarget
	$(call rmrq,$(OBJ))

distclean: cleantarget
	$(call rmrq,obj/)
