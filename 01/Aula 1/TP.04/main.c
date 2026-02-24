/******************************************************************************

4.
Elabore um programa em C que converta graus Fahrenheit em Celsius
segundo a seguinte fórmula: c= (F-32)/1,8

*******************************************************************************/
#include <stdio.h>

int main() 
{
    float F, C;

    printf("Introduza a temperatura: ");
    scanf("%f", &F);

    C = (F - 32) / 1.8;
    
    printf("\nA temperatura em Celsius é: %.2f\n", C);

    return 0;
}