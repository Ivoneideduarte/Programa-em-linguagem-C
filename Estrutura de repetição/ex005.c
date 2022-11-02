/******************************************************************************
 
5. Faça um programa que leia números inteiros e quando receber 20 números positivos não nulos
ele deve imprimir a soma dos valores positivos e a quantidade de números positivos múltiplos
de três.

*******************************************************************************/

#include <stdio.h>

int qPositivos, n, qMult3, somaPositivos;

qPositivos = 0;
qMult3 = 0;
somaPositivos = 0;

int main()
{   
        while (qPositivos < 20) {
            printf("Informe números inteiros: ");
            scanf("%d", &n);
            
            if (n > 0) { //Verifica se o valor informado é posito e não nulo
                qPositivos++;
                somaPositivos += n;
                
                if (n % 3 == 0) {
                    qMult3++;
                }
            }
        }
        
        printf("\nQuantidade de números positivos: %d", qPositivos);
        printf("\nA soma dos positivos: %d", somaPositivos);
        printf("\nQuantidade de multiplos de 3: %d", qMult3);
}