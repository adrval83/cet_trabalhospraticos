/******************************************************************************

1.
Elabore um programa em C que peça ao utilizador dois números e verifique qual é o 
maior. Escreva no ecrã o maior.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Introduza o primeiro numero: ");
    scanf("%d", &num1);

    printf("Introduza o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O maior numero é: %d\n", num1);
    } 
    else if (num2 > num1) {
        printf("O maior numero é: %d\n", num2);
    } 
    else {
        printf("Os dois numeros são iguais.\n");
    }

    return 0;
}