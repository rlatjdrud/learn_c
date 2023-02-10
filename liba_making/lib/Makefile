CC = gcc
CFLAGS = -Wall -g
OBJ = calc.o
TARGET = libcalc.a

all : $(TARGET)

$(OBJ) : calc.c
	$(CC) $(CFLAGS) -o $@ -c $^

$(TARGET) : $(OBJ)
	ar rc  $(TARGET) $^

.PHONY : clean

clean : 
	rm *.o $(TARGET)
