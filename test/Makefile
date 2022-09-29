# See 'The GNU Make Manual' at
# https://www.gnu.org/software/make/manual/make.html

MAIN := test
# all:: $(MAIN)
all: $(MAIN)

CC := gcc
RM := rm -f
# CFLAGS := -g -O2 -Wall
# CFLAGS := -fcoverage-mapping -fprofile-instr-generate -Wall
CFLAGS := -Wall
# -lc links in the standard C library.
# -lm links in the math library
# LIBS := -lc
LIBS := -lfoo
# LINK := ld
LINK := gcc

HEADERS := $(wildcard *.h)
# patsubst = Pattern substitution?
OBJECTS := $(patsubst %.c,%.o,$(wildcard *.c))

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $<

$(MAIN): $(OBJECTS)
	rm -f libfoo.*
	cp ../src/libfoo.* .
	$(LINK) libfoo.a $(OBJECTS) -o $@

# If all libraries are in the lib path:
#	$(LINK) $(LIBS) $(OBJECTS) -o $@

clean:
	@$(RM) $(MAIN) $(OBJECTS)
