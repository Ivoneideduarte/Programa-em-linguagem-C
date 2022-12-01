/******************************************************************************

3. Faça o mesmo programa da questão 2, só que com uma estrutura que permita armazenar cinco
alunos com suas respectivas notas, médias e situações.

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
    struct Q2 valores[5];
    
    int i, j;
    system("clear");
    
    for (j = 0; j < 5; j++) {
        __fpurge(stdin);
        printf("Nome do aluno: ");
        gets(valores[j].nomeAluno);
        
        for (i = 0; i < 3; i++) {
            printf("\nInforme a nota AV%d: ", i+1);
            scanf("%f", &valores[j].notas[i]);
            
            if (valores[j].notas[i] < 0 || valores[j].notas[i] > 10) {
                printf("\nNota inválida! Preencha novamente.");
                i--;
            }
        }
        
        valores[j].media = (valores[j].notas[0] + valores[j].notas[1] + valores[j].notas[2])/3;
        
        if(valores[j].media >= 7) {
            strcpy(valores[j].situacao, "Aprovado");
        } else if (valores[j].media < 4) {
            strcpy(valores[j].situacao, "Reprovado");
        } else {
            strcpy(valores[j].situacao, "Aguardando Final...");
        }
    }
    
    printf("\nAluno\t\tMédia\tSituação");
    for (j = 0; j < 5; j++) {
        printf("\n%s\t%.2f\t%s", valores[j].nomeAluno, valores[j].media, valores[j].situacao);
    }
    
}
