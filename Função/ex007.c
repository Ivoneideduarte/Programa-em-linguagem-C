/******************************************************************************
Faça um programa em C que leia três valores para os lados de um triângulo (A, B, C), verifique se os lados formam um triângulo e, se esta condição for verdadeira, indique o tipo de triângulo: equilátero, isósceles ou escaleno.

Vale lembrar que para ser triângulo:

A < B + C

B < A + C

C < A + B 

E que:

Triângulo equilátero: é aquele que possui três lados de mesma medida

Triângulo isósceles: é aquele que possui dois lados de mesma medida

Triângulo escaleno: é aquele que não possui lados de mesma medida


7. Faça uma função que receba três lados e verifique se eles foram um triângulo. A função deve
retornar 3, caso forme um triângulo equilátero (3 lados iguais), 2, caso forme um triângulo
isósceles (2 lados iguais), 1, caso forme um triângulo escaleno (3 lados distintos) e 0, caso não
forme um triângulo. Faça um programa que receba 3 números inteiros, positivos e não nulos e
através da função implementada imprima na tela um texto com o tipo de triângulo que ele
formará. Obs.: Para que se possa construir um triângulo é necessário que a medida de qualquer
um dos lados seja menor que a soma das medidas dos outros dois e maior que o valor absoluto
da diferença entre essas medidas.


*******************************************************************************/

#include <stdio.h>

int triangulo(int v[]) { //A = 0 B = 1 C = 2
    
    if ((v[0] < (v[1] + v[2])) && (v[1] < (v[0] + v[2])) && (v[2] < (v[0] + v[1]))) {
        if ((v[0] == v[1]) && (v[1] == v[2])) { // Triângulo equilátero
            return 3;
        } else if ((v[0] == v[1]) || (v[0] == v[2]) || (v[1] == v[2])) { // Triângulo isósceles
            return 2;
        } else { //Triângulo escaleno
            return 1;
        }
    } else { // As medidas informadas NÃO formam um TRIÂNGULO!
        return 0;
    }
}

int main()
{   
    int v[3], i, res;
    
    for (i = 0; i < 3; i++) {
        printf("Informe v[%d]: ", i);
        scanf("%d", &v[i]);
        
        if (v[i] <= 0) {
            printf("Valor inválido, tente novamente!\n");
            i--;
        }
    }
    
    res = triangulo(v);
    
    switch(res) {
        case 0: 
            printf("As medidas informadas NÃO formam um TRIÂNGULO!");
            break;
        case 1: 
            printf("Triângulo escaleno");
            break;
        case 2: 
            printf("Triângulo isósceles");
            break;
        case 3: 
            printf("Triângulo equilátero");
            break;
    }
}
