/*Faça um programa que leia um número inteiro N e mostre na tela os N primeiros números da sequência:
1, 5, 12, 16, 23, 27, 34...*/ //numeros com intervalos 4 e 7

#include <stdio.h>

int main(){
    
    int n;
    printf("\nDigite um valor N: ");
    scanf("%d", &n);

    int num = 1;

    int i =0;

    while (i < n){
       if(i%2 ==0){
        num+=4;
       }else{
        num+=7;
       }
       i++;
       printf("\nSequencia = %d", num);
    }
    



return 0;
}