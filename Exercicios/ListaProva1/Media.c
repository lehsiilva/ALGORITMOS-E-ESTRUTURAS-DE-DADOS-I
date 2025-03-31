/*Escreva um programa que leia 3 números do usuário e calcule a média aritmética deles.*/

#include <stdio.h>

int main(){

    int soma = 0;
    int num;

    for(int i = 1; i <= 3; i ++){
        printf("\nDigite o %d numero: ",i);
        scanf("%d", &num);

        soma+=num;

    }

    double media = (double)soma/3;

    printf("\nA media é: %.2lf", media);

    return 0;
}