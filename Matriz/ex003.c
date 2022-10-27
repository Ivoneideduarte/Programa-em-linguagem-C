/******************************************************************************
 
3. Faça um programa que armazene, em apenas uma variável (matriz), os números dos alunos, as
suas duas notas e as suas médias, sendo que a turma tem 10 alunos. O programa deve solicitar
ao usuário as duas notas para cada aluno com numero i (i = 1, . . ., 10) e armazenar o número
desse aluno, suas notas e sua média que deve ser calculada. No final, o programa deve calcular
e imprimir a média geral da turma.

*******************************************************************************/

#include <stdio.h>

const int TAM = 2;


int main()
{
    float matriz[TAM][4];
    int i, j;
    
    for (i = 0; i < TAM; i++) 
    {
        for (j = 0; j < 4; j++) 
        {
            switch(j) {
                case 0: matriz[i][0] = i+1; //Coluna da matrícula
                        break;
                case 1: printf("Digite a nota da AV1 do aluno %d: ", i+1); //Coluna da nota 1
                        scanf("%f", &matriz[i][1]);
                        break;
                case 2: printf("Digite a nota da AV2 do aluno %d: ", i+1); //Coluna da nota 2
                        scanf("%f", &matriz[i][2]);
                        break;
                case 3: matriz[i][3] = (matriz[i][1]+matriz[i][2])/2; ////Coluna da média
                        break;
            }
        }
    }
    
    printf("\nMat.\tAV1\tAV2\tMedia ");
    
    for(i = 0; i < TAM; i++) 
    {
        printf("\n%.0f\t%.2f\t%.2f\t%.2f\t", matriz[i][0], matriz[i][1], matriz[i][2], matriz[i][3]);
    }
}
