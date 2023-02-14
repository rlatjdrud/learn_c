CC = g++
CXXFLAGS = -Wall -g
OBJ = lqueue.o
TARGET = liblqueue.so

all : $(TARGET)

%.o : %.cc
	$(CC) -fPIC $(CXXFLAGS) -o $@ -c $^

$(TARGET) : lqueue.o
	$(CC) $(CXXFLAGS) -shared -o $@ $^

.PHONY : clean

clean : 
	rm -f *.o $(TARGET)

