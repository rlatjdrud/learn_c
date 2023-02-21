CC = gcc
CFLAGS = -Wall -g
TARGET = ex8
OBJ = ex8.o

all:$(TARGET)
	./ex8 1 2

$(OBJ) : ex8.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : ex8.o
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
