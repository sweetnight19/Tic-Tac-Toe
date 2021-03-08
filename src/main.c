#include <stdio.h>
#include <stdlib.h>
#include "Tablero/tablero.h"
#include "Juego/juego.h"

char tablero[3][3];

void llenarTablero(char a[3][3])
{
    int i, j;
    char aux;

    aux = '1';

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            a[i][j] = aux;
            aux++;
        }
    }
}

int main()
{
    int i, j, opcio;

    printf("Bienvenido al juego Tic Tac Toe!\n\n");
    do
    {
        while (opcio < 1 || opcio > 2)
        {
            printarMenu(&opcio);
            if (opcio < 1 || opcio > 2)
            {
                printf("Error, introduce un valor válido\n");
            }
        }
        switch (opcio)
        {
        case 1:
            do
            {
                llenarTablero(tablero);
                printarTablero(tablero);
                i = 0;
                j = 2;
                do
                {
                    if (i % 2 == 0)
                    {
                        turnoJugador(tablero);
                    }
                    else
                    {
                        turnoIA(tablero);
                        printarTablero(tablero);
                    }
                    i++;
                    j = finJuego(tablero);
                } while (i <= 8 && j == 2);
                printarTablero(tablero);
                if (j == 1)
                {
                    printf("Has perdido...\n");
                }
                else
                {
                    printf("Has ganado!!!\n");
                }
                printf("Quieres volver a jugar? 1-SI 2-NO\n");
                scanf("%d", &opcio);
            } while (opcio == 1);
            break;
        case 2:
            break;
        }
    } while (opcio == 1);
    printf("\nGracias por jugar\n");
    return 0;
}
