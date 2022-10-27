/******************************************************************************

6. Faça um programa que gere aleatoriamente uma matriz 3 x 3 de letras minúsculas e imprima a
matriz gerada.


*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char matriz[3][3];
int i, j;

int main()
{
    srand(time(0));
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = (rand()%('z' - 'a' + 1)) + 'a';
        }
    }
    
    printf("\nMatriz");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%c ", matriz[i][j]);
        }
    }
}
