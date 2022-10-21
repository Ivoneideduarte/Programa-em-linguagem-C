/******************************************************************************

8. Faça um programa que solicite o preenchimento de um vetor com cinco números inteiros e os
imprima de forma ordenada.

*******************************************************************************/

#include <stdio.h>

int v[5], i, j, aux;

int main()
{ 
    for(i = 0; i < 5; i++) {
        printf("Digite V[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if (v[j] < v[i]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
            
        }
    }
    
    printf("\nVetor ordenado: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

}
