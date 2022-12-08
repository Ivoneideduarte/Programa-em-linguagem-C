/******************************************************************************

5. Faça uma função que receba uma cadeia de caracteres e um caractere e retorne a quantidade
de vezes que esse caractere aparece na cadeia de caracteres. Faça um programa para utilizar
essa função. 

*******************************************************************************/

#include <stdio.h>

char contaChar(char cad[20], char c) {
    int i, qtd = 0;
    
    for (i = 0; cad[i] != '\0'; i++) {
        if (cad[i] == c) {
            qtd++;
        }
    }
    
    return qtd;
}

int main()
{
    char cad[20], c, i;
    
    system("clear");
    
    printf("Cadeia: ");
    gets(cad);
    
    __fpurge(stdin);
    printf("Caractere: ");
    scanf(" %c", &c);
    
    printf("Quantidade que %c de caracteres encontrados: %d", c, contaChar(cad, c));
    
    
}
