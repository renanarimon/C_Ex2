CC = gcc
AR = ar
FLAGS = -Wall -g

all: libmy_mat.so connections

libmy_mat.so: my_mat.o 
	$(CC) -shared -o libmy_mat.so my_mat.o

my_mat.o: my_mat.h my_mat.c
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

connections: main.o libmy_mat.so
	$(CC) $(FLAGS) -o connections main.o ./libmy_mat.so

.PHONY: clean all

clean:
	rm -f *.o *.so connections


