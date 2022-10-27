/******************************************************************************

5. Faça um programa que receba uma matriz 4 x 4 de inteiros e preencha um vetor, onde cada
posição i do vetor receberá a soma dos valores da linha i da matriz subtraído pela soma dos
valores da coluna i da matriz.

*******************************************************************************/

#include <stdio.h>

int matriz[4][4], i, j, vL[4], vC[4], vD[4];

int main()
{
    
    for (i = 0; i < 4; i++) {
        vL[i] = 0;
        vC[i] = 0;
    }
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
           printf("Insira valores m[%d][%d]: ", i, j);
           scanf("%d ", &matriz[i][j]);
           vL[i] = vL[i] + matriz[i][j];
           vC[j] = vC[j] + matriz[i][j];
        }
    }
    
    printf("\nMatriz A: ");
    for (i = 0; i < 4; i++) {
        printf("\n");
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
    }
    
    for(i = 0; i < 4; i++){
        vD[i] = vL[i] - vC[j];
    }
    
    printf("\n\nVetor Diferença: ");
    for (i = 0; i < 4; i++) {
        printf("%d", vD[i]);
    }
}
