CC = g++
CFLAGS = -Wall -g
TARGET = main

all : $(TARGET)



$(TARGET) : main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.cc -L./lib -llist_queue




.PHONY : clean

clean : 
	rm -f *.o  $(TARGET)
