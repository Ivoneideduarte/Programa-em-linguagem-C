/******************************************************************************

5. Faça uma função que receba uma cadeia de caracteres e um caractere e retorne a quantidade
de vezes que esse caractere aparece na cadeia de caracteres. Faça um programa para utilizar
essa função. 

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int qtdCaracteres(char cad[50], char c) {
    int i, qtdC = 0;
    
    for (i = 0; cad[i] != '\0'; i++) {
        if (cad[i] == c) {
            qtdC++;
        }
    }
    
    return qtdC;
}

int main()
{
    char cad[50], c;
    int res;
    
    system("clear");
    printf("Informe uma cadeia de caracteres: ");
    gets(cad);
    
    printf("Informe um caractere: ");
    scanf(" %c", &c);
    
    res = qtdCaracteres(cad, c);
    
    printf("Quantidade de caracteres: %d", res);
    
}
