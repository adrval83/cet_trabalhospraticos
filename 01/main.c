/******************************************************************************

Aula #1 UC00606 - Desenvolver programas em linguagem estruturada

*******************************************************************************/
#include <stdio.h> //importa biblioteca, stdio.h - define variável (1 por linha)
//#define - define uma constante (Podem ser todas declaradas na mesma linha)
 
/*variaveis globais | Visiveis no programa todo.
-> Evitar o uso, devido à reserva de memória, logo no início*/

//void main() - //void não precisaria do return
int main()
{
    printf("Hello World");

    return 0; //Indica o sucesso ao SO que o programa acabou. Não necessário em progamas .exe .
}
