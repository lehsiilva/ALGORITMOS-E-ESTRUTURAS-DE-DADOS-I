/*Faça um programa que receba um número inteiro e informe se ele é par ou ímpar.*/

#include <stdio.h>

int main(){
    printf("\nDigite um numero: ");
    int num;
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\nEh Par");
    }else{
        printf("\nEh Impar");
    }

    return 0;
}