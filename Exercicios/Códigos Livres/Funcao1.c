/*Faça uma função que leia 2 numeros e mostre a soma deles*/

#include <stdio.h>
void soma (int a, int b){
    int resul = a+b;
    printf("\nResultado: %d", resul);
}

int main(){

    printf("\nDigite o 1 numero: ");
    int a;
    scanf("%d", &a);

    printf("\nDigite o 2 numero: ");
    int b;
    scanf("%d", &b);

    soma(a,b);

    return 0;
}