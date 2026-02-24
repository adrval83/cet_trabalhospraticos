/******************************************************************************

Aula #1 UC00606 - Desenvolver programas em linguagem estruturada

*******************************************************************************/
#include <stdio.h> //importa biblioteca, stdio.h - define variável (1 por linha)
//#define - define uma constante (Podem ser todas declaradas na mesma linha - em CAPS LOCK)

/*variaveis globais | Visiveis no programa todo.
-> Evitar o uso, devido à reserva de memória, logo no início*/


//void main() - //void não precisaria do return
int main()
{
    
    //declaração da variável
    int a; //declara um valor (à sorte), a posição de memória
//      int a=0; //declara o valor de 0 (zero)
    
    printf("Hello World");
    printf("\nO valor de a = %d\n",a);

    a=20;
    
    printf("\nO valor de a é: %d e %.1f",a,10.5);
    
    printf("\n%d + %d = %d ",2,2, (a+2));
    
    return 0; //Indica o sucesso ao SO que o programa acabou. Não necessário em progamas .exe .
}
