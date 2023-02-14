CC = g++
CFLAGS = -Wall -g
TARGET = main

all : $(TARGET)



$(TARGET) : main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.cc -llqueue




.PHONY : clean

clean : 
	rm -f *.o  $(TARGET)
