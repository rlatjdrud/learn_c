CC = gcc
CFLAGS = -Wall -g
TARGET = main

all : $(TARGET)

$(TARGET) : main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c -L./lib -lcalc




.PHONY : clean

clean : 
	rm -f *.o $(TARGET)
