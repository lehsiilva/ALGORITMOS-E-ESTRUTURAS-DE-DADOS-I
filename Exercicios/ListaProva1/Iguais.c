/*Escreva um programa que leia dois caracteres e informe se são iguais ou diferentes.*/

#include <stdio.h>

int main(){

    printf("\nDigite o primeiro caracter: ");
    char a;
    scanf(" %c", &a);

    printf("\nDigite o segundo caracter: ");
    char b;
    scanf(" %c", &b);

    if( a == b){
        printf("\nOs digitos sao iguais");
    }else{
        printf("\nOs digitos sao diferentes");
    }

    return 0;

}