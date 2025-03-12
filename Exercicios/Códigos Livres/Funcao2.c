/*Faça uma função que leia 2 numeros e retorne a soma deles */

#include <stdio.h>
int soma (int a, int b){
    return a+b;
}

int main(){

    printf("\nDigite o 1 numero: ");
    int a;
    scanf("%d", &a);

    printf("\nDigite o 2 numero: ");
    int b;
    scanf("%d", &b);

    printf("\nResultado: %d",soma(a,b));

    return 0;
}