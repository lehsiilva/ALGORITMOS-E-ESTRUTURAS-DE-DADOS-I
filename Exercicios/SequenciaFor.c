/*Faça um programa para ler um número inteiro n e mostrar na tela os n primeiros termos da sequência 1, 5, 12, 16, 23, 27, 34, ... que sejam divisíveis por dois e não divisíveis por três*/
#include <stdio.h>

int main(){

    printf("\nDigite quantos numeros voce deseja ler: ");
    int num;
    scanf("%d", &num);


    for(int i = 1; i<= num; i++){
        i+=4;
        printf("%d ", i);

        for(int j = 1; j<= num; j++){
        i+=7;
        printf("%d ", i);
        }
        
    }


}