/*Faça um programa que leia uma string e imprima as quatro primeiras letras dela.*/


#include <stdio.h>

int main(){
    printf("\nDigite um palavra/frase: ");
    char s[100];
    scanf("%100[^\n]", s);

    for(int i = 0; i < 4; i++){
    
        printf("%c",s[i]);
    }


}