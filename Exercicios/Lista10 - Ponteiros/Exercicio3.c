/*Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2
variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis
A e B, por exemplo, e, após a execução da função, A conterá o valor de B e B terá o valor
de A.*/

#include <stdio.h> 

void troca(int *a, int *b){

    int troca = *a;
    *a = *b;
    *b = troca;
}

int main(){
    printf("\nDigite o valor de A: ");
    int a; 
    scanf("%d", &a);

    printf("\nDigite o valor de B: ");
    int b; 
    scanf("%d", &b);

    printf("\nAntes da Troca: \n");
    printf("\nA: %d", a);
    printf("\nB: %d", b);
    printf("\n");

    troca(&a, &b);

    printf("\nDepois da Troca: \n");
    printf("\nA: %d", a);
    printf("\nB: %d", b);
}