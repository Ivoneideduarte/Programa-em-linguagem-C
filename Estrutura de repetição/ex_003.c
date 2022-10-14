/******************************************************************************

3) Elabore um programa em C que leia várias idades e calcule e mostre a média das idades digitadas.
Finalize digitando a idade igual a zero.

*******************************************************************************/

#include <stdio.h>

int idade, qtdIdades = 0, somaIdades = 0;
float mediaIdades;

int main()
{   
    printf("Digite zero pra encerrar!\n");

    printf("Informe uma lista de idades: ");
    
    do {
        scanf("%d", &idade);
        somaIdades += idade;
        qtdIdades++;
       
    } while (idade != 0); 
    
    if (qtdIdades > 0) {
        mediaIdades = somaIdades / qtdIdades;
        printf("A média das idades informadas é: %.2f", mediaIdades);
    }
    
}
