#####################################################################  
## file        : test makefile for build current dir .cpp          ##  
## author      : lwei2	                                           ##  
## date-time   : 04/10/2018                                        ##  
##################################################################### 
CC = g++
C_FLAGES = -g -Wall
INCLUDE =
LIBS =
#wildcard对cpp文件进行展开
#SRCS := $(wildcard *.cpp),表示获取当前目录下的cpp文件集，放在变量SRCS中
SRCS := $(wildcard *.cpp)
#将SRCS中后缀.cpp替换成空，即可执行程序的名字与cpp名字相同
#TARGET  := $(patsubst %.cpp, %, $(SRCS)),表示将对应的cpp文件名转为无后缀文件后放在下面的OBJS变量中，可以自己定义可执行文件后缀
TARGET := $(patsubst %.cpp, %, $(SRCS))
OBJDIR = .

.cpp:
	$(CC) $(C_FLAGES) -o $@ $< $(INCLUDE) $(LIBS)
	#可移动到指定的OBJDIR目录
	#mv $@ $(OBJDIR)
all: $(TARGET) clean
clean:
	rm -rf *.o
