/******************************************************************************

If - Responde pela positiva. sempre se a condição for verdadeira

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    
    printf("Insira número ");
    scanf("%d",&num);
    
        if(num>=0){
            printf("Positivo");
        }
       if(num<0){
            printf("Negativo");
        }
    }
    printf("\nfim\n");
    return 0;
}