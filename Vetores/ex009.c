/******************************************************************************

9. Faça um programa que receba um vetor A de inteiros com 10 posições e informe 
qual número aparece mais vezes dentro do vetor.

*******************************************************************************/

#include <stdio.h>

int v[10], i, j, qMax, qtd, nMax;

int main()
{
    for (i = 0; i < 10; i++) {
        printf("Valor vA[%d]: ", i);
        scanf("%d", &v[i]);
    }
    
    qMax = 0;

    for(i = 0; i < 10; i++){
        qtd = 0;
        for(j = 0; j < 10; j++){
            if(v[i] == v[j]){
                qtd++;
            }
        }

        if(qtd > qMax){
            qMax = qtd;
            nMax = v[i];
        }
    }

    printf("\nO numero %d aparece %d vezes", nMax, qMax);

}
