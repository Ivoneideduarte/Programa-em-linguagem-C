/******************************************************************************

1. Faça um programa que receba 2 números reais do usuário e
uma operação (caractere) que ele deseja realizar. O programa
deve realizar a operação selecionada pelo usuário e
apresentar o resultado na tela. Cada operação deve ser
implementada dentro de uma função (use o comando switch
para chamar as funções de acordo com a operação selecionada). 

*******************************************************************************/

#include <stdio.h>

float soma(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mult(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b == 0) {
        printf("Erro: Divisão por zero!");
        exit(1);
    } else {
        return a / b;  
    }
}

int main()
{
    float a, b, res;
    char opr;
    
    system("clear");
    
    printf("Digite a operação: ");
    scanf("%f %c %f", &a, &opr, &b);
    
    switch(opr) {
        case '+': res = soma(a, b);
                  break;
        case '-': res = sub(a, b);
                  break;
        case '*': res = mult(a, b);
                  break; 
        case '/': res = divisao(a, b);
                  break; 
        default:
            printf("Operação inválida!");
            exit(2);
    }
    
    printf("Resultado: %.2f", res);
    
}
