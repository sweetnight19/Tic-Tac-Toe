all: punters

main.o: main.c Juego/juego.h Tablero/tablero.h
	gcc -c main.c

juego.o: Juego/juego.c Juego/juego.h
	gcc -c Juego/juego.c

tablero.o: Tablero/tablero.c Tablero/tablero.h
	gcc -c Tablero/tablero.c

punters: main.o juego.o tablero.o
	gcc main.o juego.o tablero.o -Wall -Wextra -o juego.exe