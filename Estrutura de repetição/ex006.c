/******************************************************************************
 
6. Faça um programa que simule 100 lançamentos de um dado e informe quantas vezes cada uma
das seis faces aparece.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i, faces, q1 = 0, q2 = 0, q3 = 0, q4 = 0, q5 = 0, q6 = 0;

int main()
{   
    srand(time(0));
    
    for (i = 1; i <= 100; i++) {
        faces = (rand() % (6 - 1 + 1) + 1);
        
        switch(faces) {
            case 1: 
                q1++;
                break;
            case 2: 
                q2++;
                break;
            case 3: 
                q3++;
                break;
            case 4: 
                q4++;
                break;
            case 5: 
                q5++;
                break;
            case 6: 
                q6++;
                break;
        }
    }
    
    printf("\nQtd de 1: %d", q1);
    printf("\nQtd de 2: %d", q2);
    printf("\nQtd de 3: %d", q3);
    printf("\nQtd de 4: %d", q4);
    printf("\nQtd de 5: %d", q5);
    printf("\nQtd de 6: %d", q6);
}