/******************************************************************************

1) Escreva um programa em C que leia 20 valores inteiros e ao final exiba:
    a) A soma dos valores positivos
    b) A quantidade de valores negativos

*******************************************************************************/

#include <stdio.h>

int num, i, somaPositivo, qtdNegativo;

//Inicializam com zero porque são acumuladores
somaPositivo = 0;
qtdNegativo = 0;

int main()
{
   printf("Informe 20 valores: ");
   
   for (i = 0; i <= 4; i++) {
       scanf("%d", &num);
       
       if (num >= 0) { // Condição Positiva
           somaPositivo += num;
       } else {
           qtdNegativo++;
       }
   }
   printf("A soma dos valores positivos: %d\n", somaPositivo);
   printf("A quantidade de valores negativos: %d", qtdNegativo);
}
