CC = g++
C_FLAGES = -g -Wall
INCLUDE =
LIBS = -levent
SRCS := $(wildcard *.cpp)
TARGET := $(patsubst %.cpp, %, $(SRCS))
OBJDIR = .

.cpp:
	$(CC) $(C_FLAGES) -o $@ $< $(INCLUDE) $(LIBS)
	#mv $@ $(OBJDIR)
all: $(TARGET) clean
clean:
	rm -rf *.o

