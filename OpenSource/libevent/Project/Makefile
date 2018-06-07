CC =gcc
CFLAGS = -levent
SRC :=$(wildcard *.c)
TARGET :=$(patsubst %.c, %, $(SRC))

.c:
	$(CC) -o $@ $< $(CFLAGS)
all:$(TARGET) see
see:
	ls -s $(TARGET)
#all:$(TARGET) clean \
clean:	\
	rm -rf *.o && rm -rf $(TARGET)
