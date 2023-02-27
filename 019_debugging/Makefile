CC=gcc
CFLAGS = -Wall -g
TARGET = ex19
OBJ = ex19.o

all : $(TARGET)

$(OBJ) : ex19.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY : clean

clean : 
	rm -f *.o $(TARGET)
