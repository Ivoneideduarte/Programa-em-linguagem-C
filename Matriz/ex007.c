/******************************************************************************

7. Faça um programa que gere aleatoriamente uma matriz 2 x 5 de letras minúsculas, sendo que a
primeira linha deverá conter somente consoantes e a segunda somente vogais. Após isso
imprima as 5 sílabas formadas nas colunas da matriz gerada.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j;
    char matriz[2][5], letra;
    
    srand(time(0));
    
    j = 0;
    
    while(j < 5) { // Percorre a coluna de 0 até 4
        
        letra = (rand() % ('z' - 'a' + 1)) + 'a'; // A variável letra irá armazenar o valor gerado aleatoriamente
        
        if (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u') {
            matriz[0][j] = letra;
            j++;
        }
    }
    
    for (j = 0; j < 5;) {
        letra = (rand() % ('z' - 'a' + 1) + 'a');
        
        switch (letra) {
            case 'a':;
            case 'e':;
            case 'i':;
            case 'o':;
            case 'u': matriz[1][j] = letra;
                j++;
        }
    }
    
    printf("Matriz gerada: \n");
    for (i = 0; i < 2; i++) {
        printf("\n");
        for (j = 0; j < 5; j++) {
            printf("%c ", matriz[i][j]);
        }
    }
}
