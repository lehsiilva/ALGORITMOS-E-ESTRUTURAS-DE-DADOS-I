/*Faça um programa que mostre na tela os n primeiros elementos da sequência 1, 3, 5, 7,
9, ..*/

#include <stdio.h>

int main(){

    printf("\nDigite o numero N: ");
    int n;
    scanf("%d", &n);

    int seq = 1;

    printf("\nA sequencia é: %d ", seq);

    int i = 0;

    while(i < n-1){
        seq+=2;
        printf("%d ", seq);
        i++;
    }


}