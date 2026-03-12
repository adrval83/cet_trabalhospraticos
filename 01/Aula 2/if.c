/******************************************************************************

If - Responde pela positiva. sempre se a condição for verdadeira

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    
    printf("Insira número ");
    scanf("%d",&num);
    
//  if((num>=0 && num <=20) && (num>=0 && num1 <=20)){
//  if((num>=0 && num <=20) || (num>=0 && num1 <=20)){
//  if(num>=0 && num <=20){
//      if(num<=20){
//  if(!(num>=0)){   -> operador NOT

        if(num>=0){
        printf("Positivo")
            if(num<20){
                printf("\nMas menor que 20"); // aparece sempre que é positivo e menor que 20
            }
        //printf("exemplo") - escreve sempre que entra no bloco do if, ou seja, sempre que é positivo
    }
    printf("\nfim\n"); // aparece sempre
    return 0;
}