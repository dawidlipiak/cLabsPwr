all: main

main: main.o agents.o newagent.o north.o south.o east.o west.o distance.o
	clang -lm -o main main.o agents.o newagent.o north.o south.o east.o west.o distance.o

main.o: main.c
	clang -c main.c

agents.o: agents.c
	clang -c agents.c

newagent.o: newagent.c
	clang -c newagent.c

north.o: north.c 
	clang -c north.c

south.o: south.c 
	clang -c south.c 

east.o: east.c 
	clang -c east.c 

west.o: west.c 
	clang -c west.c 

distance.o: distance.c
	clang -c distance.c 

clean:
	rm -f *.o *~