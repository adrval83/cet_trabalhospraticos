/******************************************************************************

If-else if -> if (<condição>){<codigo>} else if {(codigo 2)} {<codigo 2>} Else {<codigoodigo 3>

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    
    printf("Insira número ");
    scanf("%d",&num);
    
        if(num<0 || num>20){
            printf("Erro, fora dos limites");
        }
        else if(num<9.5){
            printf("\nInsuficiente\n");
        }else if(num<12){
            printf("\nSuficiente\n");
        }else if (num<18){
            printf("Bom");
        }else{
            printf("\nMuito Bom\n");
        }
    return 0;
}