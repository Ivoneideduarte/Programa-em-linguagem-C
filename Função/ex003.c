/******************************************************************************

3. Faça uma função que calcule o n-éssimo número da série de Fibonaci. Faça um programa que
receba o valor de n e utilize a função implementada para imprimir na tela n-éssimo número da
série de Fibonaci. Obs.: a fórmula de recorrência para esta série é ni = ni–1 + ni–2 , para i ≥ 2 pois
n0 = n1 = 1.

*******************************************************************************/

#include <stdio.h>

int fibo(int n) {
    
    int n0, n1, aux, i;
    
    n0 = n1 = 1;
    
    for (i = 3; i <= n; i++) {
        aux = n0;
        n0 = n1;
        n1 = aux + n1;
    }
    
    return n1;
}

int main()
{
    int termo;
    
    printf("Digite o termo: ");
    scanf("%d", &termo);
    
    printf("O termo é %d", fibo(termo));
}
