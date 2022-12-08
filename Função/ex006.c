/******************************************************************************

6. Faça uma função que converta um ângulo de graus para radianos ( = 3.141592 = 180º). 
Faça um programa que receba um ângulo em graus e imprima o seu seno, cosseno e tangente.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float converte(int angG) {
    float angR;
    
    angR = (3.141592 * angG) / 180;
    
    return angR;
}

int main()
{
    int ang;
    
    printf("Informe o ângulo em graus: ");
    scanf("%d", &ang);
    
    printf("\nSeno %.2f", sin(converte(ang)));
    printf("\nCosseno %.2f", cos(converte(ang)));
    printf("\nTangente %.2f", tan(converte(ang)));
    
}
