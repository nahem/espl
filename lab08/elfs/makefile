CC=gcc
CFLAGS=-O -g

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

all: encbc decbc test

test: encbc decbc testbc

encbc: secret-elf-b secret-elf-c
	$(CC) -m32 $(CFLAGS) -o $@ $^

decbc: secret-elf-a secret-elf-c
	$(CC) -m32 $(CFLAGS) -o $@ $^

testbc: bclib.c
	$(CC) -m32 $(CFLAGS) -o $@ -DTESTBC=1 $^

# TODO: add rule for encbc.o
secret-elf-a: decbc.c bclib.h
secret-elf-b: encbc.c
secret-elf-c: bclib.c bclib.h

clean:
	rm -f *.o encbc decbc testbc