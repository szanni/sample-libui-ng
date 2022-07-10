.PHONY: all clean

PACKAGE = sample

CC ?= gcc

CPPFLAGS += -Wall -Wextra -pedantic
LDFLAGS += -lui

all: ${PACKAGE}

clean:
	rm -rf ${PACKAGE}

${PACKAGE}: main.c
	${CC} main.c -o $@ ${CXXFLAGS} ${LDFLAGS}
