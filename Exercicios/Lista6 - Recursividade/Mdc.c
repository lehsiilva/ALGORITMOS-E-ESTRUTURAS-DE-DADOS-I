/*Fazer um método recursivo que calcule o MDC (máximo divisor comum) de dois inteiros
positivos m e n. Escreva um programa em C que leia dois números do teclado e utilize
este método para encontrar o MDC*/

#include <stdio.h>

int mdc(int a, int b){
    
    int resul;
    
    if(b == 0){

        resul = a;

    }else{
        
        resul = mdc(b,a%b);

    }

    return resul;
}

int main(){
    printf("\nDigite o valor de A: ");
    int a;
    scanf("%d", &a);

    printf("\nDigite o valor de B: ");
    int b;
    scanf("%d", &b);

    int resul = mdc(a,b);
    printf("\nO MDC de %d e %d é: %d", a, b, resul);

    return 0;
}
