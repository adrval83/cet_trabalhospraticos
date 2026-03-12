/******************************************************************************

7.
Um aluno de Desenvolvimento de Software obtém aprovação se obtiver 10 ou mais 
valores em cada uma das disciplinas: Matemática, Programação e Sistemas de 
Informação; é aprovado com distinção se obtiver 16 valores ou mais em pelo menos 
duas disciplinas e for aprovado na terceira; reprova nos restantes casos. Elabore um 
programa em C que mostre a media das notas, bem como a classificação do aluno

*******************************************************************************/
#include <stdio.h>

int main() {
    float matematica, programacao, sistemas, media;

    printf("Nota de Matematica: ");
    scanf("%f", &matematica);

    printf("Nota de Programacao: ");
    scanf("%f", &programacao);

    printf("Nota de Sistemas de Informacao: ");
    scanf("%f", &sistemas);

    media = (matematica + programacao + sistemas) / 3;

    printf("Media: %.2f\n", media);

    if (matematica >= 10 && programacao >= 10 && sistemas >= 10) {

        int contagem_distincao = 0;

        if (matematica >= 16) contagem_distincao++;
        if (programacao >= 16) contagem_distincao++;
        if (sistemas >= 16) contagem_distincao++;

        if (contagem_distincao >= 2) {
            printf("Aprovado com Distincao\n");
        } else {
            printf("Aprovado\n");
        }

    } else {
        printf("Reprovado\n");
    }

    return 0;
}