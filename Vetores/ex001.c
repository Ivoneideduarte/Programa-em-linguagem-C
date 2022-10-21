/******************************************************************************

1. Faça um programa que permita com que o usuário preencha um vetor de 5 posições inteiras.
Após o preenchimento o programa deverá imprimir todos os valores do vetor.


*******************************************************************************/

#include <stdio.h>

int vetor[5], i;

int main()
{
    for (i = 0; i < 5; i++) {
        //Percorre todas as posições do vetor colocando valores
        printf("Digite vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    for (i = 0; i < 5; i++) {
        //Faz a varredura no vetor, retornando a posição de cada elemento dentro do vetor
        printf("\nValores informados: p[%d] - %d", i, vetor[i]);
    }
}
