/******************************************************************************

2. Faça um programa que receba uma matriz 2 x 3 e imprima a sua matriz transposta.

*******************************************************************************/

#include <stdio.h>


int matriz[2][3], i, j;

int main()
{

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Insira valores na matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz 2x3");
    for (i = 0; i < 2; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
    }
    
    printf("\nMatriz transposta");
    for (i = 0; i < 3; i++){
        printf("\n");
        for (j = 0; j < 2; j++) {
            printf("%d ", matriz[j][i]);
        }
    }
    
}
