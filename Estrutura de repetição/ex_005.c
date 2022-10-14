/******************************************************************************

5) Elabore um programa em C que calcule a soma S = 5 + 10 + 15 + ... + 500.

*******************************************************************************/

#include <stdio.h>

int i, soma = 0;

int main()
{   
    printf("S = ");
    for (i = 5; i <= 500; i += 5) {
        soma += i;
        printf("%d + ", i);
    }
    
    printf("\nS = %d", soma);
}
