CC :=gcc
C_FLAGS = -levent
client:client.c
	$(CC) client.c -o client $(C_FLAGS)
server:server.c
	$(CC) server.c -o server $(C_FLAGS)
clean:
	rm -rf client && rm -rf server
