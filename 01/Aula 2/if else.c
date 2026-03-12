/******************************************************************************

If-else - if (<condição>){<codigo>} else {<codigo 2>}

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    
    printf("Insira número ");
    scanf("%d",&num);
    
        if(num>=0){
            printf("Positivo");
        }else{
            printf("Negativo");
        }
    }
    printf("\nfim\n");
    return 0;
}