all: main

main: main.o nwd.o phi.o 
	clang -o main main.o nwd.o phi.o

main.o: main.c
	clang -c main.c

nwd.o: nwd.c 
	clang -c nwd.c 

phi.o: phi.c
	clang -c phi.c 

clean: 
	rm -f *.o *~