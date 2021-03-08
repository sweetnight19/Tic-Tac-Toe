//
// Created by David Marquet on 03/03/2020.
//

#include "tablero.h"
#include <stdio.h>

void printarTablero(char a[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j < 2)
            {
                printf(" %c |", a[i][j]);
            }
            else
            {
                printf(" %c ", a[i][j]);
            }
        }
        if (i < 2)
        {
            printf("\n----------\n");
        }
    }
    printf("\n\n");
}

void printarMenu(int *opcion)
{
    printf("1. Jugar\n");
    printf("2. Salir\n");
    printf("opcion: ");
    scanf("%d", opcion);
}