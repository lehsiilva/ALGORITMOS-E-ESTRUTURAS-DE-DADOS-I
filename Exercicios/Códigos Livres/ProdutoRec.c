/*Escreva uma função recursiva em C que calcule o produto dos dígitos pares de um número inteiro positivo. Se não houver dígitos pares, retorne 1*/

#include <stdio.h>

int produto(int num ){

    int resul;

    int prod = 1;

    int resto= num % 10;

    int divide = num/10;

    if(num == 0){
        resul = 1;
    }else{
        resul = (resto) * produto(divide);

        if(resto%2 == 0){
            prod*= resto;
        }
    }

    return resul;
}

int main(){
        printf("\nDigite um numero: ");
        int n;
        scanf("%d", &n);
    
        int resul = produto(n);
        printf("\nResultado %d", resul);

        return 0;
}