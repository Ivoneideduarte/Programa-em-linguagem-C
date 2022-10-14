/******************************************************************************

2) Elabore um programa em C que leia a idade e o sexo de 7 pessoas, calcule e mostre:
    a) A média de idade do grupo
    b) A média de idade das mulheres
    c) A média de idade dos homens

*******************************************************************************/

#include <stdio.h>

int idade, i, somaF = 0, somaM = 0;
char sexo;
float mediaIdade, mediaIdadeMulheres, mediaIdadeHomens;

int main()
{
    for (i = 1; i <= 7; i++) {
        printf("Informe a idade da %d pessoa: ", i);
        scanf("%d", &idade);
        printf("Informe o sexo: (M – masculino, F - feminino”)");
        scanf("%c", &sexo);
        
        soma += soma + idade;
        
        if (sexo == "F") {
            //Feminino
            qtdF++;
            somaF += somaF + idade;
        } else {
            qtdM++;
            somaM += somaM + idade;
        }
    }
    
    mediaIdade = (somaF + somaM) / 7;
    printf("A média de idade do grupo: %.2f", mediaIdade);
    
    if (qtdF > 0) {
        mediaIdadeMulheres = somaF / qtdF;
    }
    printf("A média de idade das mulheres: %.2f", mediaIdadeMulheres);
    
    if (qtdM > 0) {
        mediaIdadeHomens = somaM / qtdM;
    }
    printf("A média de idade das mulheres: %.2f", mediaIdadeHomens);
}
}

