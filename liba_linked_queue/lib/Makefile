CC = g++
CXXFLAGS = -Wall -g
OBJ = list_queue.o
TARGET = liblist_queue.a

all : $(TARGET)

%.o : %.cc
	$(CC) $(CXXFLAGS) -o $@ -c $^

$(TARGET) : $(OBJ)
	ar rc $@ $^

.PHONY : clean

clean : 
	rm -f *.o $(TARGET)

