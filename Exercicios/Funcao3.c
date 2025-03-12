/*Faça uma função que receba 2 numeros e mostre a soma deles*/

#include <stdio.h>
#include <math.h>

void soma(int a,int b){
    int resul = a+b;
    printf("\n%d ", resul);
}

int main(){
    int a = 4;
    int b = 5;
    soma(a,b);

    return 0;
}