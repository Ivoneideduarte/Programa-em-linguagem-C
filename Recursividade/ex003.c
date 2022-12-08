/******************************************************************************

3. Faça uma função recursiva para calcular o máximo divisor comum mdc(x, y). Faça um programa
que receba os dois números inteiros positivos e não nulos e imprima o mdc entre os dois
números utilizando a função implementada.

*******************************************************************************/

#include <stdio.h>

int mdc(int x, int y) {
    if (y <= x && x % y == 0) {
        return y;
    }
    if (x < y) {
        return mdc(y, x);
    } else {
        return mdc(y, x%y);
    }
}

int main()
{
   int a, b;
   
   printf("Digite dois números: ");
   scanf("%d %d", &a, &b);
   
   if ((a <= 0 && a % 3 != 0) || (b <= 0 && b % 3 != 0)) {
       scanf("%d %d", &a, &b);
   }
   
     printf("\nMDC: %d", mdc(a,b));
}
