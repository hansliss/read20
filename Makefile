DESTDIR=
CFLAGS= -O -Wall

SRCS= dump.h read20.c sindex.c fold.h fold.c
OBJS= read20.o sindex.o fold.o

read20:	$(OBJS)
	cc ${CFLAGS} -o read20 $(OBJS)

read20.o: dump.h read20.c

fold.o: fold.h fold.c

install: read20
	install -s read20 $(DESTDIR)/usr/local

clean: FRC
	rm -f *.o read20 core a.out errs Errs


FRC:
