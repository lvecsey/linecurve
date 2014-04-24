
CC=gcc

LIBS=-lm

linecurve : linecurve.o
	$(CC) -o $@ $^ $(LIBS)
