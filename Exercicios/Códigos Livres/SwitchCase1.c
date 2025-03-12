/*Faça um programa que leia um caractere, identifique-o e escreva
na tela se ele é um ponto, uma vírgula ou outro sinal. User o
comando switch-case.*/

#include <stdio.h>

int main(){
    printf("\nDigite o primeiro valor: ");
    char a;
    scanf("%c", &a);

    switch (a){
    case '.':
        printf("\nÉ um ponto");
        break;

    case ',':
        printf("\nÉ um vírgula");
        break;    
    
    default:
        printf("\nÉ outro sinak");
    }


    return 0;
}