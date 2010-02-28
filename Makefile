CC	=gcc -march=native --std=gnu99
CFLAGS	=-Os -Wall -Werror -pedantic
LDFLAGS	=

all:	mem

check:	mem
	/usr/bin/time -p ./mem

clean:
	${RM} *.out core.* lint tags

distclean clobber: clean
	${RM} mem
