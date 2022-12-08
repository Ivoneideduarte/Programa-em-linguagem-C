/******************************************************************************

4. Faça uma função para gerar um número aleatório evitando a repetição a cada execução. A
função deve ter como parâmetros o limite inferior e superior do intervalo em que o número deve
ser gerado. Faça um programa que receba os valores dos limites inferior e superior e utilize a
função implementada para imprimir na tela o número aleatório gerado.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int min, int max) {
    int res;
    res = (rand()%(max - min + 1)) + min; 
    
    return res;
}

int main()
{
    int min, max, res;
    
    srand(time(0));
    
    printf("Digite um intervalo: \n");
    scanf("%d - %d", &min, &max);
    
    res = aleatorio(min, max);
    
    printf("\nAleatório: %d ", res);
}
