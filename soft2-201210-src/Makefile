CC := gcc
CCFLAGS := -Wall -g
SUFFIX := .c
SOURCES := $(wildcard *$(SUFFIX))
TARGETS := $(SOURCES:.c=)

.PHONY: all clean
all: $(TARGETS)
.c:
	$(CC) $(CCFLAGS) -o $@ $<

clean:
	rm -rf *.dSYM
