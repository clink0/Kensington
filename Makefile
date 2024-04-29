main: main.o board.o boardShapes.o  moves.o
	g++ main.o board.o boardShapes.o  moves.o -o main

# Compilation rules
main.o: main.cpp
	g++ -c main.cpp

boardShapes.o: boardShapes.cpp board.h
	g++ -c boardShapes.cpp

board.o: board.cpp board.h
	g++ -c board.cpp

moves.o: moves.cpp moves.h
	g++ -c moves.cpp

# Clean up
clean:
	rm -f *.o main
