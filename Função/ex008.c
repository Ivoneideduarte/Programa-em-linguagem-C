/******************************************************************************
 
8. Faça uma função que receba um número (n) e informe o seu maior divisor (d), tal que d seja
diferente de n. Faça um programa que receba um número do usuário e usando a função
implementada imprima na tela o seu maior divisor diferente de n.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int maxDiv(int n) {
    int i;
    
    for (i = n - 1; i >= 1; i--) {
        if(n % i == 0) {
            return i;
        }
    }
}

int main()
{
    int a;
    
    printf("\nDigite um número: ");
    scanf("%d", &a);
    
    printf("\nMaior divisor diferente dele mesmo: %d", maxDiv(a));
}
