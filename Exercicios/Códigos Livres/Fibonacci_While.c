/*Faça um programa que leia um número inteiro 𝑛 e mostre na tela o 𝑛-ésimo termo da sequência de Fibonacci*/
#include <stdio.h>

int main(){

    printf("\nDigite o numero N: ");
    int n;
    scanf("%d", &n);

    int termo1 = 0;
    int termo2 = 1;

    int i =1;

    printf("\nA sequencia será: ");

    printf("%d ", termo2);

    while(i < n - 1){
        
        int troca;
        troca = termo1;
        termo1 = termo2;
        termo2 = troca + termo1;
        

    
        printf("%d ",termo2);

        i++;

    }


    return 0;

}