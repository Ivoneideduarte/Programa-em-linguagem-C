/******************************************************************************

2. Faça uma função recursiva que retorna a quantidade de combinações de k pessoas que podem
ser feitas com n pessoas, utilizando as regras abaixo. Faça um programa que receba o valor de k
e o valor de n e imprima a quantidade de combinações utilizando a função implementada.

*******************************************************************************/

#include <stdio.h>

int comb(int n, int k) {
    if (k == 1) {
        return n;
    }
    
    if (k == n) {
        return 1;
    }
    
    if (k > 1 && k < n) {
        return comb(n - 1, k - 1) + comb(n - 1, k);
    }
}

int main()
{
    int n, k;
    
    printf("Digite dois valores: ");
    scanf("%d %d", &n, &k);
    
    printf("\nResultado %d", comb(n, k));
}
