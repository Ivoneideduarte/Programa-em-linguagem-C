/******************************************************************************

1. Faça uma função recursiva que calcule o n-éssimo número da série de Fibonaci. Faça um
programa que receba o valor de n e utilize a função implementada para imprimir na tela 
néssimo número da série de Fibonaci. Obs.: a fórmula de recorrência para esta série é ni = ni–1 +
ni–2 , para i ≥ 3 pois n1 = n2 = 1.

*******************************************************************************/

#include <stdio.h>

int fibo(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
  int termo;
  
  printf("Digite o termo: ");
  scanf("%d", &termo);
  
  printf("\nO termo é %d", fibo(termo));
}
