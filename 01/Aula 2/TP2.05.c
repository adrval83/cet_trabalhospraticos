/******************************************************************************

5.
Escreva um programa em C que peça ao utilizador que introduza dois números 
decimais e apresente o resultado da operação que pretende efetuar, inserindo o 
símbolo do operador respetivo ( *, / , - , + ). A escolha da operação deve ser feita 
pelo utilizador. Escreva o resultado da operação.

*******************************************************************************/
#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador;

    printf("Introduza o primeiro numero: ");
    scanf("%f", &num1);

    printf("Introduza o segundo numero: ");
    scanf("%f", &num2);

    printf("Escolha a operacao (+, -, *, /): ");
    scanf(" %c", &operador);

    if (operador == '+') {
        resultado = num1 + num2;
    }
    else if (operador == '-') {
        resultado = num1 - num2;
    }
    else if (operador == '*') {
        resultado = num1 * num2;
    }
    else if (operador == '/') {
        resultado = num1 / num2;
    }
    else {
        printf("Operador invalido.\n");
        return 0;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}