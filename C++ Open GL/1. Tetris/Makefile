CPPFLAGS=-Wall -g
OBJECTS=tetris.o painter.o tetromino.o Well.o game.o
%.0: %.cpp
	g++ -c $(CPPFLAGS) -o $0 $<
tetris: $(OBJECTS)
	g++ $(OBJECTS) -o tetris -g -lglut -lGL
tetris.o: tetris.cpp game.hpp Well.hpp painter.hpp tetromino.hpp 
painter.o: painter.cpp painter.hpp
tetromino.o: tetromino.cpp tetromino.hpp painter.hpp
Well.o: Well.cpp Well.hpp tetromino.hpp painter.hpp
game.o: game.cpp game.hpp Well.hpp tetromino.hpp painter.hpp
