/******************************************************************************

7. Faça um programa que preencha um vetor A de 10 posições inteiras com valores aleatórios
entre 1 e 10, sendo que, ao final do preenchimento, o programa deverá garantir que no vetor A
não existirá números repetidos. Após isso, o programa deve imprimir os elementos deste vetor
separados por 2 espaços e a quantidade (QTD) de números aleatórios gerados. O vetor A e
quantidade QTD devem ser armazenados numa única estrutura.
Ex.: Vetor A: 2 3 1 7 9 4 5 6 10 8
Aleatorios Gerados: 18


*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Q7 {
  int vA[10];
  int qtd;
};

int main()
{
    struct Q7 q;
    
    int i, j;
    
    srand(time(0));
    
    q.qtd = 0;
    
    for (i = 0; i < 10; i++) {
        q.vA[i] = (rand() % (10 - 1 + 1)) + 1;
        q.qtd++;
        
        for (j = 0; j < i; j++) {
            if(q.vA[j] == q.vA[i]) {
                i--;
                break;
            }
        }
    }
    
    printf("\nVetor: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", q.vA[i]);
    }
    
    printf("\n\nQtd de aleatorio: %d", q.qtd);
}
