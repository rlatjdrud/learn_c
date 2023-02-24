CC=gcc
CFLAGS = -Wall -g
TARGET = ex17
OBJ = ex17.o

all : $(TARGET)

$(OBJ) : ex17.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY : clean

clean : 
	rm -f *.o $(TARGET)
