.PHONY: all objdir cleantarget clean realclean distclean

# CORE VARIABLES

MODULE := ungif
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

TARGET = obj/$(CONFIG).$(PLATFORM)/$(LP)ungif$(A)

_OBJECTS = \
	$(OBJ)dgif_lib.o \
	$(OBJ)gif_err.o \
	$(OBJ)gifalloc.o

OBJECTS = $(_OBJECTS)

SOURCES = \
	lib/dgif_lib.c \
	lib/gif_err.c \
	lib/gifalloc.c

RESOURCES =

LIBS += $(SHAREDLIB) $(EXECUTABLE) $(LINKOPT)

PRJ_CFLAGS += \
	 $(if $(DEBUG), -g, -O2 -ffast-math) $(FORCE_32_BIT) $(FPIC) -w $(FVISIBILITY)





CECFLAGS += -cpp $(_CPP)

ifndef STATIC_LIBRARY_TARGET
OFLAGS += $(FORCE_32_BIT)
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

$(OBJ)dgif_lib.o: lib/dgif_lib.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c lib/dgif_lib.c -o $(OBJ)dgif_lib.o

$(OBJ)gif_err.o: lib/gif_err.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c lib/gif_err.c -o $(OBJ)gif_err.o

$(OBJ)gifalloc.o: lib/gifalloc.c
	$(CC) $(CFLAGS) $(PRJ_CFLAGS) -c lib/gifalloc.c -o $(OBJ)gifalloc.o

cleantarget: objdir
	$(call rmq,$(TARGET))

clean: cleantarget
	$(call rmq,$(_OBJECTS))

realclean: cleantarget
	$(call rmrq,$(OBJ))

distclean: cleantarget
	$(call rmrq,obj/)
