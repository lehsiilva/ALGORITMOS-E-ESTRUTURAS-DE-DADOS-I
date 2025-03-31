/*Implemente uma calculadora que leia dois números e um operador (+, -, *, /) e mostre o resultado da operação.*/
#include <stdio.h>
int soma(int a, int b){
    int resul;
    resul = a+b;
    return resul;

}

int subtracao(int a, int b){
    int resul;
    resul = a-b;
    return resul;

}

double multiplicacao(int a, int b){
    int resul;
    resul = a*b;
    return resul;

}

double divisao(int a, int b){
    int resul;
    resul = a/b;
    return resul;

}


int main(){

    printf("\nDigite o 1 numero: ");
    int a;
    scanf("%d", &a);

    printf("\nDigite o 2 numero: ");
    int b;
    scanf("%d", &b);

    printf("\nDigite o operador: ");
    char operador;
    scanf(" %c", &operador);

    switch (operador)
    {
    case '+':
        printf("\nO valor da soma eh: %d",soma(a,b));
        break;
    case '-':
        printf("\nO valor da subtracao eh: %d",subtracao(a,b));
        break;
    case '*':
        printf("\nO valor da multiplicacao eh: %.2lf",multiplicacao(a,b));
        break;
        
    default:
        printf("\nO valor da divisao eh: %.2lf",divisao(a,b));
    
        
    }

    return 0;
}