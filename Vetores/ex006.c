/******************************************************************************

6. Faça um programa que receba um vetor A de ponto flutuante com 5 posições, construa um
outro vetor B e imprima os valores desse vetor B. A construção do vetor B deve seguir a
seguinte lógica: caso o índice de A seja par, B deve receber o valor A * 2, caso contrário, B
recebe o valor de A dividido pelo índice.


*******************************************************************************/

#include <stdio.h>

float vetorA[5], vetorB[5];
int i;

int main()
{
    for(i = 0; i < 5; i++) {
        //Inseri valores em cada posição do vetor A
        printf("Digite v[%d]: ", i);
        scanf("%f", &vetorA[i]);
    }
    
    printf("Vetor de A: ");
    for (i = 0; i <5; i++) {
        //Mostra os valores armazenados em cada posição do vetor A
        printf("%.2f ", vetorA[i]);
    }
    
    for(i = 0; i < 5; i++) {
        if (i % 2 == 0) {
             vetorB[i] = vetorA[i] * 2;
        } else {
           vetorB[i] = vetorA[i] / i;
        }
        
        //vetorB[i] = (i % 2 == 0) ? vA[i] * 2 : vA[i] / i;
    }
    
    printf("\nVetor de B: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", vetorB[i]);
    }
    
        
}
