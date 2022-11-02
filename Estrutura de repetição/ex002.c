/******************************************************************************
 
2. Faça um programa que calcule a soma S = 5 + 10 + 15 + ... + 100.

*******************************************************************************/

#include <stdio.h>

int i, soma = 0;

int main()
{   
    printf("\nS = ");
    for (i = 5; i <= 100; i += 5) {
        
        if (i == 100) {
            printf("%d ", i);
        } else {
            printf ("%d + ", i);
        }
        
        soma += i;
    }
    printf(" = %d", soma);
}