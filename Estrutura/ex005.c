/******************************************************************************

5. Faça um programa que possua uma estrutura para armazenar uma matriz 2x2, o somatório dos
valores da diagonal principal e o somatório dos valores da diagonal secundária. O programa
deve solicitar ao usuário o preenchimento da matriz e armazená-la na estrutura. O programa
deve calcular os somatórios e armazená-los na estrutura. O programa deve permitir armazenar
3 elementos com essa mesma estrutura. Após receber e calcular todos os valores, o programa
deverá imprimir a diferença entre a soma dos três somatórios da diagonal principal menos a
soma dos três somatórios da diagonal secundária.

*******************************************************************************/

#include <stdio.h>

struct Q5 {
  int matriz[2][2];
  int somaDiagPrincipal;
  int somaDiagSecundaria;
};

int main()
{
    struct Q5 v[3];
    int i, j, k, soma = 0, diferenca;
   
    for (k = 0; k < 3; k++) {
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                printf("Informe os valores da m[%d][%d]: ", i, j);
                scanf("%d", &v[3].matriz[i][j]);
            }
        }
        
        v[3].somaDiagPrincipal = v[3].matriz[0][0] + v[3].matriz[1][1];
        v[3].somaDiagSecundaria = v[3].matriz[0][1] + v[3].matriz[1][0];
     
        diferenca = v[3].somaDiagPrincipal - v[3].somaDiagSecundaria;
        printf("\nDiferença %d\n\n", diferenca);
        
        soma += diferenca;
        
    }
    
    printf("\nDiferença total: %d", soma);
    
}
