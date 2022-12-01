/******************************************************************************

1. Faça um programa que possua uma estrutura para armazenar uma cadeia de caracteres, a
quantidade de letras maiúsculas, a quantidade de letras minúsculas e quantidades de caracteres
que não são letras. O programa deve receber do usuário a cadeia, armazená-la na estrutura,
calcular as quantidades e armazená-las na estrutura. Após isso, o programa deve imprimir todos
os valores armazenados na estrutura.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Q1 {
    char cadeia[30];
    int qtdMaiuculas;
    int qtdMinusculas;
    int qtdNaoLetras;
};

int main()
{
    struct Q1 valores;
    
    int i;
     valores.qtdMaiuculas = 0;
     valores.qtdMinusculas = 0;
     valores.qtdNaoLetras = 0;
    
    system("clear");
    printf("Informe uma cadeia: ");
    gets(valores.cadeia);
    
    for (i = 0; valores.cadeia[i] != '\0'; i++) {
        if (valores.cadeia[i] >= 'A' && valores.cadeia[i] <= 'Z') {
            valores.qtdMaiuculas++;
        } else if (valores.cadeia[i] >= 'a' && valores.cadeia[i] <= 'z') {
            valores.qtdMinusculas++;
        } else {
            valores.qtdNaoLetras++;
        }
    }
    
    printf("\nCadeia de caracteres: %s", valores.cadeia);
    printf("\nQuantidade de letras maiúsculas: %d", valores.qtdMaiuculas);
    printf("\nQuantidade de letras minúsculas: %d", valores.qtdMinusculas);
    printf("\nQuantidade de caracteres que não são letras: %d", valores.qtdNaoLetras);
}
