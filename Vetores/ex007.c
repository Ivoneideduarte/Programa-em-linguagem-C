/******************************************************************************

7. Faça um programa que solicite o preenchimento de um vetor com cinco números inteiros,
positivos, não nulos e múltiplos de 3. Caso o usuário digite um número que não atenda aos
requisitos de preenchimento, o programa deverá ignorar esse número, exibir uma mensagem
informando que o número não será armazenado e solicitar um novo número para a mesma
posição do vetor. Após isso, o programa deverá imprimir os valores armazenados no vetor.

*******************************************************************************/

#include <stdio.h>

int v[5], i;


int main()
{
   printf("Informe cinco números inteiros, positivos, não nulos e múltiplos de 3\n");
   for (i = 0; i < 5; i++) {
       printf("Valor v[%d]: ", i);
       scanf("%d", &v[i]);
       
       if (v[i] <= 0 || v[i] % 3 != 0 ) {
           printf("\nValor inválido! Tente novamente.\n");
           i--;
        }
   }
    
   printf("\nVetor: ");
   for (i = 0; i < 5; i++) {
       printf("%d ", v[i]);
   }
}
