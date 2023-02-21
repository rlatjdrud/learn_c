CC = gcc
CFLAGS = -Wall -g
TARGET = ex11
OBJ = ex11.o

all:$(TARGET)
	./ex11 

$(OBJ) : ex11.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : ex11.o
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
