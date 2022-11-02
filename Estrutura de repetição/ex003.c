/******************************************************************************
 
3. Faça um programa que receba um número e informe se ele é primo ou não.

*******************************************************************************/

#include <stdio.h>

int n, i, divs = 0;

int main()
{   
    printf("Digite um número: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divs++;
        }
    }
    
    if (divs == 2) {
        printf("Número %d é primo!", n);
    } else {
        printf("Número %d não é primo!", n);
    }
}