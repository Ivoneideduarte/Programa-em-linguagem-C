/******************************************************************************
 
4. Faça um programa que leia um número N e exiba todos os primos existentes entre 1 e N.

*******************************************************************************/

#include <stdio.h>

int n, num, i, divs;

int main()
{   
   printf("Informe um número: ");
   scanf("%d", &n);
   
   printf("\nPrimos: ");
   for (num = 1; num <= n; num++) {
        divs = 0;
        for (i = 1; i <= num; i++) {
           if (num % i == 0) {
               divs++;
           }
        }
        if (divs == 2) {
        printf("%d ", num);
        }
   }
}