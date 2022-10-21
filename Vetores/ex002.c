/******************************************************************************

2. Faça um programa que permita com que o usuário preencha um vetor de 5 posições inteiras,
porém, caso o usuário digite um valor negativo o programa deve ignorar o valor preenchido e
atribuir zero nessa posição do vetor e continuar a solicitar número para as demais posições.
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
        
        if(vetor[i] < 0) { //Significa que é negatico
            vetor[i] = 0;
        }
    }
    
    printf("Vetor: ");
    for (i = 0; i < 5; i++) {
        //Faz a varredura no vetor, retornando a posição de cada elemento dentro do vetor
        printf(" %d ", vetor[i]);
    }
}
