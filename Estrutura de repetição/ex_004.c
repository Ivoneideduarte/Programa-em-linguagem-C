/******************************************************************************

4) Elabore um programa em C que calcule a soma S = 1 + 2 + 3 + ... + 1000.

*******************************************************************************/

#include <stdio.h>

int i, soma = 0;

int main()
{   
    printf("S = ");
    for (i = 1; i <= 1000; i += 1 ) {
        soma += i;
        printf("%d + ", i);
        
    }
    
    printf("\nS = %d", soma);
}
