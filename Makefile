CC=g++
CFLAGS=--std=c++11
EXE=tictactoe

all: main.o board.o
	$(CC) $(CFLAGS) -o $(EXE) obj/*.o

main.o: src/main.cpp inc/main.hpp | obj
	$(CC) $(CFLAGS) -c src/main.cpp -o obj/main.o

board.o: src/board.cpp inc/board.hpp | obj
	$(CC) $(CFLAGS) -c src/board.cpp -o obj/board.o

obj:
	mkdir -p obj

clean:
	rm -rf $(EXE) obj
