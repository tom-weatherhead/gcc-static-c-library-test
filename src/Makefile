# Makefile for a static C library

# See e.g. https://www.howtogeek.com/427086/how-to-use-linuxs-ar-command-to-create-static-libraries/

# See 'The GNU Make Manual' at
# https://www.gnu.org/software/make/manual/make.html

MAIN := libfoo.a
# all:: $(MAIN)
all: $(MAIN)

CC := gcc
AR := ar
RM := rm -f
# CFLAGS := -g -O2 -Wall
# CFLAGS := -fcoverage-mapping -fprofile-instr-generate -Wall
CFLAGS := -Wall
# -lc links in the standard C library.
# -lm links in the math library
# LIBS := -lc
# LINK := ld
# LINK := gcc

HEADERS := $(wildcard *.h)
# patsubst = Pattern substitution?
OBJECTS := $(patsubst %.c,%.o,$(wildcard *.c))

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $<

$(MAIN): $(OBJECTS)
	$(AR) -crs $(MAIN) $(OBJECTS)
	$(AR) -t $(MAIN)

# ...then see what files are in the lib: $ ar -t libfoo.a

clean:
	@$(RM) $(MAIN) $(OBJECTS)
