/******************************************************************************
 
7. Faça um programa que receba do usuário dois parâmetros. O primeiro deve ser uma opção
entre par ou ímpar, e o segundo deve ser obrigatoriamente um número entre 2 e 7. Após isso, o
programa deve calcular e imprimir a soma de todos os números entre 1 e 100 que atendam aos
parâmetros informados pelo usuário.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int n, i, parOUimpar, soma = 0;

int main()
{   
    
    
    
    do { // Enquanto o valor for par e impar, executa. Senão, sai do laço
        printf("Informe um valor par ou impar: ");
        scanf("%d", &parOUimpar);
    } while (parOUimpar != 0 && parOUimpar != 1);
    
    do {
        printf("informe um número entre 2 e 7: ");
        scanf("%d", &n);
    } while (n < 2 || n > 7);
    
    printf("\nAtende: ");
    for (i = 1; i <= 100; i++) {
        if (i % 2 == parOUimpar && i % n == 0) {
            printf("%d ", i);
            soma += i;
        }
    }
    
    printf("\nSoma: %d", soma);
}