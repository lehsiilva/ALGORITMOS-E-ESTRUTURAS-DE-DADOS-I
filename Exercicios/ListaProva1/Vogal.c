/*Escreva um programa que leia um caractere e informe se é uma vogal ou consoante (considere apenas letras minúsculas).*/

#include <stdio.h>

int main(){

    printf("\nDigite uma letra: ");
    char a;
    scanf(" %c", &a);

    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
        printf("\nEh uma vogal");
        
    }else {
        printf("\nNao eh uma vogal");
    }

    return 0;


}