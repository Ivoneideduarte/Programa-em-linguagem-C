/******************************************************************************

4. Numa competição de ginástica artística, cinco avaliadores dão notas entre 0 e 10. Das notas
recebidas, a menor e a maior são descartadas, e a nota do atleta é dada pela média entre as
três notas restantes. Faça um programa que tenha uma estrutura para armazenar o nome do
atleta, as cinco notas e a nota final de cinco atletas. No fim o programa deve informar o 1º, o 2º e 3º colocado na prova.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Q4 {
    char nomeAtleta[30];
    float notas[5];
    float notaFinal;
};
    
int main()
{
    struct Q4 valores[5], aux;
    int i, j;
    
    float menor, maior, soma;
    
    system("clear");
    
    for (i = 0; i < 5; i++) {
        __fpurge(stdin);
        printf("\nNome do atleta: ");
        gets(valores[i].nomeAtleta);
        
        for(j = 0; j < 5; j++) {
            
            printf("\nNota do %d avaliador: ", j+1);
            scanf("%f", &valores[i].notas[j]);
            
            if (valores[i].notas[j] < 0 || valores[i].notas[j] > 10) {
                printf("\nValor inválido! Preencha novamente.");
                j--;
            }
        }
        
        soma = 0;
        menor = maior = valores[i].notas[0];
        
        for (j = 0; j < 5; j++) {
            soma += valores[i].notas[j];
            
            if(valores[i].notas[j] < menor) {
                menor = valores[i].notas[j];
            }
            
            if(valores[i].notas[j] > maior) {
                maior = valores[i].notas[j];
            }
        }
        
        valores[i].notaFinal = (soma - menor - maior)/3;
    }
    
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if(valores[j].notaFinal > valores[i].notaFinal) {
                aux = valores[i];
                valores[i] = valores[j];
                valores[j] = aux;
            }
        }
    }
    
    for (i = 0; i < 5; i++) {
        printf("\n%do. %s: %.2f", i+1, valores[i].nomeAtleta, valores[i].notaFinal);
    }
    
}
