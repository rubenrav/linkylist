CC = gcc

#CFLAGS = -Wall

OBJS = linked_list.o list_test.o

all: list

list: $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o list

test:list
	./list

.PHONY: all clean
