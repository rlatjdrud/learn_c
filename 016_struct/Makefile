CC = gcc
CFLAGS = -Wall -g
OBJ = ex16.o
TARGET = ex16

all : $(TARGET)
	./ex16

$(OBJ) : ex16.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ 

.PHONY : clean

clean:
	rm *.o $(TARGET)
