/******************************************************************************

10. Faça um programa que receba um vetor A de 5 elementos e construa um vetor B que possui os
mesmos números de A, sendo que na ordem invertida. Após isso o programa deverá imprimir os
conteúdos dos dois vetores.

*******************************************************************************/

#include <stdio.h>

int vA[5], vB[5], i, j;

int main()
{ 
    for(i = 0, j = 4; i < 5; i++, j--) {
        printf("Digite V[%d]: ", i);
        scanf("%d", &vA[i]);
        vB[j] = vA[i];
    }

    printf("\nVetor A: ");
    for(i = 0; i < 5; i++) {
        printf("%d  ", vA[i]);

    }

    printf("\nVetor B: ");
    for(i = 0; i < 5; i++) {

        printf("%d  ", vB[i]);
    }


}
