CC = gcc
CFLAGS = -Wall -g
TARGET = ex10
OBJ = ex10.o

all:$(TARGET)
	./ex10 zed 

$(OBJ) : ex10.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : ex10.o
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
