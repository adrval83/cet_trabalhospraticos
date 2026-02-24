/******************************************************************************

3.
Elabore um programa em C que solicite ao utilizador dois números
inteiros e apresente o resultado da média dos dois números. 
*******************************************************************************/
#include <stdio.h>

int main() {
    int num1, num2;
    float soma;

    printf("Introduza o 1º número inteiro: ");
    scanf("%d", &num1);
    printf("Introduza o 2º número inteiro: ");
    scanf("%d", &num2);

    soma = (num1+num2);
    printf("\nA soma dos números é: %.0f", soma);
    
    printf("\nA média dos números é: %.2f", (soma/2));

    return 0;
}