CC=gcc
CFLAGS=-O -g

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

all: encbc decbc test

test: encbc decbc testbc


encbc: encbc.o
	$(CC) $(CFLAGS) -o $@ $^

decbc: decbc.o bclib.o
	$(CC) $(CFLAGS) -o $@ $^

testbc: bclib.c
	$(CC) $(CFLAGS) -o $@ -DTESTBC=1 $^

# TODO: add rule for encbc.o
decbc.o: decbc.c bclib.h
bclib.o: bclib.c bclib.h

clean:
	rm -f *.o encbc decbc testbc