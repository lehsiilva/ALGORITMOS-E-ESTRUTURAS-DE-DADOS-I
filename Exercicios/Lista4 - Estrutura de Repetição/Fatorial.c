/*Faça um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o fatorial
de N (N!)*/

#include <stdio.h>

int main(){
    printf("\nDigite um numero: ");
    int num;
    scanf("%d", &num);

    int fatorial = 1;

    for(int i = num; i > 1; i --){
        fatorial *= i;
    }

    printf("\nFatorial de %d e: %d", num, fatorial);



}