build:
	cc -Wall -std=c99 src/*.c `pkg-config --libs --cflags raylib` -o pathfinding

run:
	./pathfinding
