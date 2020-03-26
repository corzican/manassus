CC=gcc
CFLAGS=-I.
DEPS = manassus.h
OBJ = manassus.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

manassus: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
