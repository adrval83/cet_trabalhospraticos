/******************************************************************************

1.
Elabore um programa em C que solicite ao utilizador um número inteiro e depois
mostra no ecrã o número inserido. 

*******************************************************************************/
#include <stdio.h>

int main() {
    int numero;

    printf("Introduza um número inteiro: ");
    scanf("%d", &numero);

    printf("\nO numero inserido foi: %d\n", numero);

    return 0;
}