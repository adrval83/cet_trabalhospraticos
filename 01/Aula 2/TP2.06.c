/******************************************************************************

6.
Elabore um programa em C que calcule a classificação final de um aluno, através da 
média de 3 testes, deverá mostrar:
- Excelente se média dos 3 testes for superior ou igual a 17 valores
- Bom se média dos 3 testes for superior a 14 valores
- Suficiente se média dos 3 testes for superior a 9.5 valores
- Insuficiente se média dos 3 testes for inferior a 9.5 valores


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

    if (media >= 17) {
        printf("Excelente\n");
    }
    else if (media > 14) {
        printf("Bom\n");
    }
    else if (media > 9.5) {
        printf("Suficiente\n");
    }
    else {
        printf("Insuficiente\n");
    }

    return 0;
}