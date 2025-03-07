/*Faça um programa para imprimir os múltiplos de 5.*/

#include <stdio.h>

int main(){

    printf("\nDigite quantos multiplos de 5 você deseja encontrar: ");
    int num;
    scanf("%d", &num);


    for(int i = 1; i <= num; i++){
        printf("\nOs múltiplos são: %d", 5*i);
    }

    return 0;
}
