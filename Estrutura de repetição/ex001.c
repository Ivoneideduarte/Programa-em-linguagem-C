/******************************************************************************
 
1. Faça um programa que imprima os N primeiros números (fornecido pelo usuário) de uma
progressão aritmética, cujo primeiro elemento é igual a 7 e a razão é igual a 3.

*******************************************************************************/

#include <stdio.h>

int n, i;

int main()
{   
  printf("Digite a quantidade de termos: ");
  scanf("%d", &n);
  
  printf("\nPA: ");
  for (i = 0; i < n; i++) {
      printf("%d ", 7 + i * 3);
  }
}