/*Escreva um programa em C que leia 20 números do usuário, um número por vez. Após a
leitura de todos os números, o programa deve exibir o maior, o menor número entre eles
e e a média.*/

#include <stdio.h>

int main(){
    int n, maior, menor, soma, i; 

    maior = 0;
    menor = 100;
    i = 1;
    soma = 0;

    while(i <= 20){
        printf("\nDigite o %d numero: ", i);
        scanf("%d", &n);

        if(n > maior){
            maior = n;
        } 

        if(n < menor){
            menor = n;
        }

        soma+=n;

        i++;
    }

    float media = (float)soma/20;

    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
    printf("\nMedia: %.2f", media);
}