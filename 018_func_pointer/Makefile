CC=gcc
CFLAGS = -Wall -g
TARGET = ex18
OBJ = ex18.o

all : $(TARGET)

$(OBJ) : ex18.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY : clean

clean : 
	rm -f *.o $(TARGET)
