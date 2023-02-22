CC = gcc
CFLAGS = -Wall -g
TARGET = ex14
OBJ = ex14.o

all:$(TARGET)
	./ex14 I am ksk

$(OBJ) : ex14.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : ex14.o
	$(CC) $(CFLAGS) -o $@ $^

clean : 
	rm *.o $(TARGET)
