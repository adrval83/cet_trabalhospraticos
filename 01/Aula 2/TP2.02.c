/******************************************************************************

2.
Elabore um programa em C que peça ao utilizador um número e verifique se o 
mesmo é par ou ímpar. Deverá escrever no ecrã “Par” no caso de ser “Par” ou 
“Impar”, no caso de ser “Ímpar”.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num;

    printf("Introduza um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("\nPar\n");
    } else {
        printf("\nImpar\n");
    }

    return 0;
}