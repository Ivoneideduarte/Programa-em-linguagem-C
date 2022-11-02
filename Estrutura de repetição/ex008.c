/******************************************************************************
 
8. Faça um programa que leia a idade e a altura de 10 pessoas. Após isso, o programa deve
imprimir a altura do mais novo e a idade do mais baixo.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int i, idade, idadeNovo, idadeBaixo;
float altura, alturaNovo, alturaBaixo;

int main()
{   
    for (i = 1; i <= 10; i++) {
        printf("Informe a sua idade: ");
        scanf("%d", &idade);
        printf("Informe a sua altura: ");
        scanf("%f", &altura);
        
        if (i == 1) {
            idadeNovo = idadeBaixo = idade;
            alturaNovo = alturaBaixo = altura;
        } else {
            if  (altura < alturaBaixo) {
                alturaBaixo = altura;
                idadeBaixo = idade;
            }
            
            if (idade < idadeNovo) {
                idadeNovo = idade;
                alturaNovo = altura;
            }
        }
    }
    
    printf("\nA altura do mais novo: %.2f", alturaNovo);
    printf("\nA idade do mais baixo: %d", idadeBaixo);  
}