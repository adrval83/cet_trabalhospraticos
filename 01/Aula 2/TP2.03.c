/******************************************************************************

3.
Elabore um programa em C que calcule a classificação final de um aluno, através da 
média de 3 testes, deverá mostrar:
- Aprovado se média dos 3 testes for superior ou igual a 9,5 valores
- Reprovado se média dos 3 testes for inferior a 9,5 valores

*******************************************************************************/
#include <stdio.h>

int main() {
    float teste1, teste2, teste3, media;

    printf("Introduza a nota do Teste 1: ");
    scanf("%f", &teste1);

    printf("Introduza a nota do Teste 2: ");
    scanf("%f", &teste2);

    printf("Introduza a nota do Teste 3: ");
    scanf("%f", &teste3);

    media = (teste1 + teste2 + teste3) / 3;

    printf("Media final: %.2f\n", media);

    if (media >= 9.5) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}