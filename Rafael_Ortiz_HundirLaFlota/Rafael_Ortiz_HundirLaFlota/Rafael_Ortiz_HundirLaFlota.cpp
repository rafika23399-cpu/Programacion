#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>

#define MAPSIZE 10

int main()
{
    srand(time(NULL));
    char map[MAPSIZE][MAPSIZE];
    char grid[MAPSIZE][MAPSIZE];
    int shipRow[9];
    int shipColumn[9];
    int shotRow;
    int shotColumn;
    int hits = 0;
    int tryes = 0;

    // Asignacion del mapa y grid:

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            map[i][j] = '-';
            grid[i][j] = '-';
        }
    }
   
    // Impresion del mapa vacio:
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf(" %c ", map[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------------\n");
    // Asignacion de barcos al mapa: 

    for (int i = 0; i < 9; i++)
    {
        printf("Introduce las posiciones de los barcos (fila) (columna): ");
        scanf_s("%d %d", &shipRow[i], &shipColumn[i]);
        grid[shipRow[i]][shipColumn[i]] = 'X';
    }
    // Bucle del juego: 
    while (hits < 9)
    {
        // Impresion del mapa al principio de cada turno:
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                printf(" %c ", map[i][j]);
            }
            printf("\n");
        }
        printf("A donde quieres disparar Capitan? Llevas %d intentos: ",tryes);
        scanf_s("%d %d", &shotRow, &shotColumn);
        tryes++;

        if (map[shotRow][shotColumn] == 'X')
        {
            printf("Ya has disparado aqui!\n");
        }
        else if (grid[shotRow][shotColumn] == 'X')
        {
            printf("Tocado!\n");
            map[shotRow][shotColumn] = 'X';
            hits++;
        }
        else
        {
            printf("Agua!\n");
            map[shotRow][shotColumn] = 'O';
        }
    }
    printf("Has hundido todos los barcos en %d intentos.", tryes);
}