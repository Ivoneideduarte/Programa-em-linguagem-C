/******************************************************************************

2. Faça um programa que possua uma estrutura para armazenar o nome do aluno, a nota da AV1,
a nota da AV2, a Média e a Situação (Aprovado, Reprovado e Aguardando Final). O programa
deve solicitar ao usuário o nome, a nota da AV1 e a nota da AV2 e armazenar essas informações
na estrutura. O programa deverá calcular e armazenar a média e definir e armazenar a situação.
O aluno terá a situação Aprovado quando a média for maior ou igual a 7, Reprovado quando a
média for menor que 4 e Aguardando Final, caso contrário.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Q2 {
      char nomeAluno[20];
      float notas[3];
      float media;
      char situacao[20];
};
    
int main()
{
    struct Q2 valores;
    
    int i;
    
    system("clear");
    printf("Nome do aluno: ");
    gets(valores.nomeAluno);
    
    for (i = 0; i < 3; i++) {
        printf("Informe a nota AV%d: ", i+1);
        scanf("%f", &valores.notas[i]);
    }
    
    valores.media = (valores.notas[0] + valores.notas[1] + valores.notas[2])/3;
    
    if(valores.media >= 7) {
        strcpy(valores.situacao, "Aprovado");
    } else if (valores.media < 4) {
        strcpy(valores.situacao, "Reprovado");
    } else {
        strcpy(valores.situacao, "Aguardando Final...");
    }
    
    printf("\nNome do aluno: %s", valores.nomeAluno);
    printf("\nMédia: %.2f", valores.media);
    printf("\nSituação do aluno: %s", valores.situacao);
}
