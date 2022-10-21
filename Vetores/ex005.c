/******************************************************************************

5. Numa competição de ginástica artística, cinco avaliadores dão notas entre 0 e 10. Das notas
recebidas, a menor e a maior são descartadas, e a nota do atleta é dada pela média entre as
três notas restantes. Faça um programa que receba as cinco notas dos avaliadores e apresente
a nota do atleta.


*******************************************************************************/

#include <stdio.h>

int notas[5], i, maior, menor, soma = 0;

int main()
{
    printf("Avaliadores: Notas entre 0 e 10");
    for (i = 0; i < 5; i++) { //Serão 5 avaliadores, ou seja, o for vai percorrer a nota dos 5 avaliadores e armazenar
        //Percorre todas as posições do vetor colocando valores
    
        printf("\nInforme a %dª nota: ", i); // 0 à 4
        scanf("%d", &notas[i]); //Os valores serão armazenados em cada posição do vetor notas[i]

    }
    
    printf("Vetor: ");
    for (i = 0; i < 5; i++) {
        //Faz a varredura no vetor, retornando a posição de cada elemento dentro do vetor
        printf(" %d ", notas[i]);
    }
    
    menor = maior = notas[0];
    for (i = 0; i < 5; i++) {
        soma += notas[i];
        
        if (notas[i] > maior) {
            maior = notas[i];
        } 
        
        if (notas[i] < menor) {
            menor = notas[i];   
        }
    }

    printf("\nMaior valor: %d", maior);
    printf("\nMenor valor: %d", menor);
    //printf("\nA nota do atleta é: %.2f ", (soma - menor - maior) / 3.0);
    printf("\nA nota do atleta é: %.2f ", (soma - menor - maior) / (float)3);
}
