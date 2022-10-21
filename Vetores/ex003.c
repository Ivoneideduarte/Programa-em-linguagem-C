/******************************************************************************

3. Faça um programa que permita com que o usuário preencha um vetor de 5 posições inteiras,
porém, caso o usuário digite um valor negativo o programa deve solicitar um novo número para
a mesma posição. Após o preenchimento o programa deverá imprimir os valores do vetor que
foram preenchidos.

*******************************************************************************/

#include <stdio.h>

int vetor[5], i;

int main()
{
    for (i = 0; i < 5; i++) {
        //Percorre todas as posições do vetor colocando valores
        printf("Digite vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
        
        if(vetor[i] < 0) { //Significa que é negatico
            //printf("Informe outro valor: ");
            //scanf("%d", &vetor[i]);
            i--;
        }
    }
    
    printf("Vetor: ");
    for (i = 0; i < 5; i++) {
        //Faz a varredura no vetor, retornando a posição de cada elemento dentro do vetor
        printf(" %d ", vetor[i]);
    }
}
