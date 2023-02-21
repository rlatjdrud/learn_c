CC = gcc
CFLAGS = -Wall -g
TARGET = ex7
OBJ = ex7.o
all:$(TARGET)
	./ex7

$(OBJ) : ex7.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : ex7.o
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
