/*Faça um função que receba 2 numeros e retorne a soma deles*/

#include <stdio.h>

int soma(int a,int b){
    int resul = a+b;
    return resul;
}

int main(){
    int a = 4;
    int b = 5;
    int resul = soma(a,b);
    printf("\nResultado: %d ", resul);

    return 0;
}