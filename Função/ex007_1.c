/******************************************************************************
 
7. Faça uma função que receba três lados e verifique se eles formam um triângulo. A função deve
retornar 3, caso forme um triângulo equilátero (3 lados iguais), 2, caso forme um triângulo
isósceles (2 lados iguais), 1, caso forme um triângulo escaleno (3 lados distintos) e 0, caso não
forme um triângulo. Faça um programa que receba 3 números inteiros, positivos e não nulos e
através da função implementada imprima na tela um texto com o tipo de triângulo que ele
formará. Obs.: Para que se possa construir um triângulo é necessário que a medida de qualquer
um dos lados seja menor que a soma das medidas dos outros dois e maior que o valor absoluto
da diferença entre essas medidas.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int triangulo(int a, int b, int c) {
    if(a < (b + c) && b < (a + c) && c < (a + b) &&
       a > abs(b - c) && b > abs(a - c) && c > abs(a - b)) {
        if (a == b && b == c) {
            return 3;
        } else if (a == b || a == c || b == c) {
            return 2;
        } else {
            return 1;
        }
    } else {
        return 0;
    }
}

int main()
{
    int a, b, c, res;
    
    printf("Informe 3 lados de um triângulo: \n");
    scanf("%d %d %d", &a, &b, &c);
    
    res = triangulo(a, b, c);
    
    switch(res) {
        case 0: printf("As medidas informadas não formam um triângulo!");
                  break;
        case 1: printf("Triângulo escaleno");
                  break;
        case 2: printf("Triângulo isósceles");
                  break;
        case 3: printf("Triângulo equilátero");
                  break;
        
    }
}
