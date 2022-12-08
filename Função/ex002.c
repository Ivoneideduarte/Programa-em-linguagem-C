/******************************************************************************

2. Faça uma função que receba um número e informe se ele é primo ou não. Faça um programa
que receba um número inteiro e utilize a função implementada para imprimir na tela se o
número informado é primo ou não.

*******************************************************************************/

#include <stdio.h>

int ehPrimo(int n) {
    int i, divs = 0;
    
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divs++;   
        }
    }
    
    return divs == 2 ? 1 : 0;
    
}

int main()
{
    int n;    
    
    printf("Informe um número: ");
    scanf("%d", &n);
    
    if (ehPrimo(n) == 1) {
        printf("É primo!");
    } else {
        printf("Não é primo!");
    }
}
