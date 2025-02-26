/*Faça um programa que leia um numero inteiro N e mostre na tela os N primeiros números inteiros pares*/

#include <stdio.h>

int main(){

    printf("\nDigite o numero N: ");
    int n;
    scanf("%d", &n);
    int i =1;

    while(n > 0){
        if(i%2 == 0){
        printf("\nOs 10 primeiros numeros sao: %d", i);
        n--;
        }
        i++; 
    }

    return 0;
}