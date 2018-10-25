OBJS = main.o sub.o add.o
main:$(OBJS)
	gcc -Wall -g $(OBJS) -o $@
main.o: main.c
	gcc -Wall -g -c $< -o $@
add.o:add.c add.h
	gcc -Wall -g -c $< -o $@
sub.o:sub.c sub.h
	gcc -Wall -g -c $< -o $@
.PHONY:clean
clean:
	rm -rf *.o  main

#main:main.o sub.o add.o 
#	gcc -Wall -g main.o add.o sub.o -o main
#main.o: main.c
#	gcc -Wall -g -c main.c -o main.o
#add.o:add.c add.h
#	gcc -Wall -g -c add.c -o add.o
#sub.o:sub.c sub.h
#	gcc -Wall -g -c sub.c -o sub.o
#.PHONY:clean
#clean:
#	rm -rf *.o main

