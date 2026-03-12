/******************************************************************************

4.
Elabore um programa em C que calcule a classificação final de um aluno, sabendo 
as notas que obteve em três testes e a ponderação atribuída a cada um deles.
Teste Ponderação
1.º     20%
2.º     50%
3.º     30%
Se a classificação final for superior ou igual a dez, o aluno está aprovado; caso 
contrário, está reprovado.

*******************************************************************************/
#include <stdio.h>

int main() {
    float teste1, teste2, teste3, classificacao_final;

    printf("Introduza a nota do Teste 1: ");
    scanf("%f", &teste1);

    printf("Introduza a nota do Teste 2: ");
    scanf("%f", &teste2);

    printf("Introduza a nota do Teste 3: ");
    scanf("%f", &teste3);

    classificacao_final = (teste1 * 0.20) + (teste2 * 0.50) + (teste3 * 0.30);

    printf("Classificacao final: %.2f\n", classificacao_final);

    if (classificacao_final >= 10) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}