/*Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos
caracteres ela possui.*/

#include <stdio.h>

int main(){

    printf("\nDigite uma palavra/frase: ");
    char s[100];
    scanf("%100[^\n]", s);
    
    int i = 0;
    
    while(s[i] != '\0'){
        i++;
    }

    printf("\nA string possui %d caracteres", i);

}