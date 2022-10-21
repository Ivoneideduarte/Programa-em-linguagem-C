/******************************************************************************

4. Faça um programa que solicite o preenchimento de um vetor com cinco números inteiros e
imprima o maior e o menor número.

*******************************************************************************/

#include <stdio.h>

int vetor[5], i, maior, menor;

int main()
{
    for (i = 0; i < 5; i++) {
        //Percorre todas as posições do vetor colocando valores
        printf("Digite vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("Vetor: ");
    for (i = 0; i < 5; i++) {
        //Faz a varredura no vetor, retornando a posição de cada elemento dentro do vetor
        printf(" %d ", vetor[i]);
    }
    
    menor = maior = vetor[0];
    for (i = 0; i < 5; i++) {
        
        if (vetor[i] > maior) {
            maior = vetor[i];
        } 
        
        if (vetor[i] < menor) {
            menor = vetor[i];   
        }
    }
    
    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d", menor);
}
