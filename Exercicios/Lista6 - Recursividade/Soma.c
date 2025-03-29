/*Escreva um programa em C para calcular a soma dos números de 1 a n usando recursão.*/

#include <stdio.h>

int soma(int n){
    int resul;
    
    if(n == 0){
        resul=0;
    }else{
        resul = n + soma(n-1);
    }
    return resul;
}

int main(){
    printf("\nDigite o valor de N: ");
    int n;
    scanf("%d", &n);

    int resul = soma(n);
    printf("Resultado: %d", resul);
}