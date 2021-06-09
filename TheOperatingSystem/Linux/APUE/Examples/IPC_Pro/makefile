CC = gcc 
CFLAGS = -Wall -g
server: server.o
	$(CC) $(CFLAGS) server.o -o server
read: read.o
	$(CC) $(CFLAGS) read.o -o read

server.o:server.c
	$(CC) $(CFLAGS) -c server.c -o server.o
read.o:read.c
	$(CC) $(CFLAGS) -c read.c -o read.o

.PHONY:clean
clean:
	rm -rf *.o server read

