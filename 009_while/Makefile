CC = gcc
CFLAGS = -Wall -g
TARGET = ex9
OBJ = ex9.o

all:$(TARGET)
	./ex9 

$(OBJ) : ex9.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : ex9.o
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
