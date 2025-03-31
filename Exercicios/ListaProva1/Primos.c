/*Escreva um procedimento que receba um número inteiro positivo e verifica se o número
é um número primo ou não. O procedimento deve escrever na tela “É primo.” ou “Não é
primo."*/

#include <stdio.h>

void primos(int num){

    int primo = 1;
    if(num == 2){
        printf("\nEh Primo");
        primo = 1;
    }else{
       
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                primo = 0;
            }
        }

        if(primo == 0){
            printf("\nNão eh Primo");
            }else{
            printf("\nEh Primo");
        }
    }
        
}





int main(){
    printf("\nDigite um numero: ");
    int num;
    scanf("%d", &num);

    primos(num);

}