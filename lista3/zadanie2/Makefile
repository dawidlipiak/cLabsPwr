all: main

main: f.o rozwiazanie.o main.o
	clang -lm -o main main.o f.o rozwiazanie.o

main.o: main.c
	clang -lm -c main.c

f.o: f.c
	clang -lm -c f.c

rozwiazanie.o: rozwiazanie.c
	clang -lm -c rozwiazanie.c 

clean: 
	rm -f main *.o *~