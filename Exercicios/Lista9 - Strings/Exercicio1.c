/*Faça um programa que leia e imprima uma string*/

#include <stdio.h>

int main(){

    printf("\nDigite uma frase: ");
    char s[100];
    scanf("%100[^\n]", s);
    printf("\n%s", s);
}