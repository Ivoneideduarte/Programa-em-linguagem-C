/******************************************************************************

1. Faça um programa que permita ao usuário preencher uma matriz 2 x 2 e imprima o valor do
determinante dessa matriz (Obs.: determinante = diferença entre o produto dos termos da
diagonal principal e o produto dos termos da diagonal secundária).


*******************************************************************************/

#include <stdio.h>

int matriz[2][2], i, j;
int determinante, diagonalP, diagonalS;

int main()
{
    //Inserindo valores
    for(i = 0; i < 2; i++) { //Percorre as linhas
        for (j = 0; j < 2; j++) { //Percorre as colunas
            printf("Insira valores na matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    //Mostrando valores
    printf("\nMatriz");
    for (i = 0; i < 2; i++) {
        printf("\n");
        for (j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
    }
    
    diagonalP = matriz[0][0] * matriz[1][1];
    diagonalS = matriz[0][1] * matriz[1][0];
    
    determinante = diagonalP - diagonalS;
    
    printf("\nDeterminante: %d ", determinante);
    
}
