/******************************************************************************

3.
Elabore um programa em C que solicite ao utilizador dois números
inteiros e apresente o resultado da média dos dois números. 
*******************************************************************************/
#include <stdio.h>

int main() 
{
    int num1, num2;
    float media=0.0;

    printf("Introduza o 1º número inteiro: ");
    scanf("%d", &num1);
    printf("Introduza o 2º número inteiro: ");
    scanf("%d", &num2);

//    media = (num1+num2)/2.0;
    media = (float)(num1+num2)/2;
    printf("\nA soma dos números é: %d", (num1+num2));
    
    printf("\nA média dos números é: %.2f", media);

    return 0;
}