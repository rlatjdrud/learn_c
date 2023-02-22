CC = gcc
CFLAGS = -Wall -g
TARGET = ex13
OBJ = ex13.o

all:$(TARGET)
	./ex13 I am ksk

$(OBJ) : ex13.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : ex13.o
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
