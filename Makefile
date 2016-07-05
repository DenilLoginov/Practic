CC=g++
all: queue

queue: Main.o Queue.o List.o
	$(CC) Main.o Queue.o List.o -o queue

Main.o: Main.cpp
	$(CC) -c Main.cpp

Queue.o: Queue.cpp
	$(CC) -c Queue.cpp

List.o: List.cpp
	$(CC) -c List.cpp
	
clean:
	rm -rf queue *.o