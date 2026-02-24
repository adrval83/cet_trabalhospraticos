/******************************************************************************

2.
Elabore um programa em C que solicite ao utilizador um número decimal e depois
mostra no ecrã o número inserido, com duas casas decimais. 

*******************************************************************************/
#include <stdio.h>

int main() {
    float numero;

    printf("Introduza um número decimal: ");
    scanf("%f", &numero);

    printf("\nO numero inserido foi: %.2f\n", numero);

    return 0;
}