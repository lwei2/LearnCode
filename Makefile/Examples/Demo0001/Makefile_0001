main : main.o tool.o

main.o : main.c tool.h
	gcc -c main.c

tool.o : tool.c tool.h
	gcc -c tool.c

.PHONY:clean
clean : 
	rm *.o main
