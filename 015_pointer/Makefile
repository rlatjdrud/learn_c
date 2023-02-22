CC = gcc
CFLAGS = -Wall -g
TARGET = ex15
OBJ = ex15.o

all:$(TARGET)
	./ex15

$(OBJ) : ex15.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : ex15.o
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
