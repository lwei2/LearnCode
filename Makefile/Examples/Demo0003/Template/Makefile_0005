IDIR=../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR=../lib
LIBS=-lm

_DEPS=hello.h
DEPS=$(patsubst %, $(IDIR)/%, $(_DEPS))

_OBJ= hello.o hellofunc.o
OBJ=$(patsubst %, $(ODIR)/%, $(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hello: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean
clean:
	rm -rf $(ODIR)/*.o *~ core $(INCDIR)/*~ && rm -rf hello
