/******************************************************************************

6. Faça um programa que receba 10 números inteiros e os armazene em um vetor. O programa
deve identificar qual o maior e o menor número armazenado nesse vetor e quantas vezes o
maior e o menor número aparecem nesse vetor e imprimir esses valores na tela. O maior, o
menor número e suas quantidades de vezes que aparecem no vetor devem ser armazenados
numa única estrutura.
Ex: Vetor Recebido: 4, 2, 4, 3, 4, 7, 5, 6, 5, 2. O programa deve imprimir: “Maior número: 7, que
aparece 1 vez(es); Menor número: 2, que aparece 2 vez(es).”


*******************************************************************************/

#include <stdio.h>

struct Q6 {
    int maior;
    int menor;
    int qtdMaior;
    int qtdMenor;
};

int main()
{
    struct Q6 q;
    int v[10];

    int i;
    
    for (i = 0; i < 10; i++) {
        printf("Valor v[%d]: ", i+1);
        scanf("%d", &v[i]);
    }
    
    q.maior = q.menor = v[0];
    
    for (i = 0; i < 10; i++) {
 
        if (v[i] > q.maior) {
            q.maior = v[i];
        }
        
        if (v[i] < q.menor) {
            q.menor = v[i];
        }
    }
    
    q.qtdMaior = q.qtdMenor = 0;
    
    for (i = 0; i < 10; i++) {
        if (v[i] == q.maior) {
            q.qtdMaior++;
        }
        
        if (v[i] == q.menor) {
            q.qtdMenor++;
        }
    }
    
    printf("\nVetor Recebido: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
    
    printf("\nMaior número: %d, que aparece %d vez(es)", q.maior, q.qtdMaior);
    printf("\nMenor número: %d, que aparece %d vez(es)", q.menor, q.qtdMenor);
    
}
