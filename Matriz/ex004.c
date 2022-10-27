/******************************************************************************

4. Faça um programa que receba uma matriz 4 x 4 de números reais, modifique essa matriz
fazendo com que cada elemento receba o seu valor somado com o elemento da sua linha que
pertença a diagonal principal e imprima a diagonal secundária da nova matriz 

*******************************************************************************/

#include <stdio.h>

float matrizA[4][4], matrizB[4][4];
int i, j, num;

int main()
{
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Insira valores na matrizA[%d][%d]: ", i, j);
            scanf("%f", &matrizA[i][j]);
        }
    }
  
    printf("\nMatriz A: ");
    for (i = 0; i < 4; i++) {
          printf("\n");
          for (j = 0; j < 4; j++) {
            printf("%.1f ", matrizA[i][j]);
        }
    }
  
    for(i = 0; i < 4; i++) {
        num = matrizA[i][i];
        for(j = 0; j < 4; j++) {
            matrizB[i][j] = matrizA[i][j] + num;
        }

    }

    printf("\n\nMatriz B: ");
    for(i = 0; i < 4; i++){
        printf("\n");
        for(j = 0; j < 4; j++){
            printf("%.1f  ", matrizB[i][j]);

        }
    }
  
}
