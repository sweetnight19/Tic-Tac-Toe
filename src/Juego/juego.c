//
// Created by david on 03/03/2020.
//

#include "juego.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void turnoJugador(char a[3][3])
{
    int i, j, k;
    char ficha;

    do
    {
        do
        {
            printf("Coloca una ficha: ");
            scanf("\n%c", &ficha);
        } while (ficha < '1' || ficha > '9');
        printf("\n");
        k = 0;
        switch (ficha)
        {
        case '1':
            i = 0;
            j = 0;
            if (a[i][j] == 'X' || a[i][j] == 'O')
            {
                k = 1;
                printf("La casilla está ocupada!\n\n");
            }
            break;
        case '2':
            i = 0;
            j = 1;
            if (a[i][j] == 'X' || a[i][j] == 'O')
            {
                k = 1;
                printf("La casilla está ocupada!\n\n");
            }
            break;
        case '3':
            i = 0;
            j = 2;
            if (a[i][j] == 'X' || a[i][j] == 'O')
            {
                k = 1;
                printf("La casilla está ocupada!\n\n");
            }
            break;
        case '4':
            i = 1;
            j = 0;
            if (a[i][j] == 'X' || a[i][j] == 'O')
            {
                k = 1;
                printf("La casilla está ocupada!\n\n");
            }
            break;
        case '5':
            i = 1;
            j = 1;
            if (a[i][j] == 'X' || a[i][j] == 'O')
            {
                k = 1;
                printf("La casilla está ocupada!\n\n");
            }
            break;
        case '6':
            i = 1;
            j = 2;
            if (a[i][j] == 'X' || a[i][j] == 'O')
            {
                k = 1;
                printf("La casilla está ocupada!\n\n");
            }
            break;
        case '7':
            i = 2;
            j = 0;
            if (a[i][j] == 'X' || a[i][j] == 'O')
            {
                k = 1;
                printf("La casilla está ocupada!\n\n");
            }
            break;
        case '8':
            i = 2;
            j = 1;
            if (a[i][j] == 'X' || a[i][j] == 'O')
            {
                k = 1;
                printf("La casilla está ocupada!\n\n");
            }
            break;
        case '9':
            i = 2;
            j = 2;
            if (a[i][j] == 'X' || a[i][j] == 'O')
            {
                k = 1;
                printf("La casilla está ocupada!\n\n");
            }
            break;
        }
    } while (k == 1);
    a[i][j] = 'X';
}

void turnoIA(char a[3][3])
{
    int i, j, k;

    do
    {
        i = rand() % 3;
        j = rand() % 3;
        k = 0;
        if (a[i][j] == 'X' || a[i][j] == 'O')
        {
            k = 1;
        }
    } while (k == 1);
    a[i][j] = 'O';
}

int finJuego(char a[3][3])
{
    if (a[0][0] == a[1][0] && a[0][0] == a[2][0])
    {
        if (a[0][0] == 'X')
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (a[0][0] == a[0][1] && a[0][0] == a[0][2])
    {
        if (a[0][0] == 'X')
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (a[0][0] == a[1][1] && a[0][0] == a[2][2])
    {
        if (a[0][0] == 'X')
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (a[0][1] == a[1][1] && a[0][1] == a[2][1])
    {
        if (a[0][1] == 'X')
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (a[0][2] == a[1][2] && a[0][2] == a[2][2])
    {
        if (a[0][2] == 'X')
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (a[0][2] == a[1][1] && a[0][2] == a[2][0])
    {
        if (a[0][2] == 'X')
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (a[1][0] == a[1][1] && a[1][0] == a[1][2])
    {
        if (a[1][0] == 'X')
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (a[2][0] == a[2][1] && a[2][0] == a[2][2])
    {
        if (a[2][0] == 'X')
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 2;
}