/*Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2
valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda
variável. Escreva o conteúdo das 2 variáveis na tela*/

#include <stdio.h>

void maior_menor(int *a, int *b){

    int maior;
    int menor;

    if(*a > *b){
        maior = *a;
        menor = *b;

    }else{
        maior = *b;
        menor = *a;
    }

    *a = maior;
    *b = menor;

}

int main(){
    printf("\nDigite o valor de A: ");
    int a; 
    scanf("%d", &a);

    printf("\nDigite o valor de B: ");
    int b; 
    scanf("%d", &b);

    maior_menor(&a, &b);

    printf("\nMaior: %d", a);
    printf("\nMenor: %d", b);
}