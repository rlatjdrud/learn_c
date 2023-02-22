CC = gcc
CFLAGS = -Wall -g
TARGET = ex12
OBJ = ex12.o

all:$(TARGET)
	./ex12 

$(OBJ) : ex12.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : ex12.o
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
