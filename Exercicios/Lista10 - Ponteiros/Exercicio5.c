/*Elaborar um programa que leia dois valores inteiros (A e B). Em seguida, faça uma função
que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro
de A na própria variável A e o dobro de B na própria variável B.*/

#include <stdio.h>

int somadobro(int *a, int *b){
    int soma;

    *a = *a *2;
    *b = *b *2;

    soma = *a + *b;

    return soma;
}

int main(){
    printf("\nDigite o valor de A: ");
    int a; 
    scanf("%d", &a);

    printf("\nDigite o valor de B: ");
    int b; 
    scanf("%d", &b);

    int resul = somadobro(&a, &b);

    printf("\nDobro A: %d", a);
    printf("\nDobro B: %d", b);

    printf("\nSoma do dobro: %d", resul);
}