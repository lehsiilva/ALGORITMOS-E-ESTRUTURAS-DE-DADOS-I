/*Implemente uma função que receba um número inteiro positivo e retorne a soma de seus dígitos.*/

#include <stdio.h>

int soma(int n){
    int resto;
    int soma = 0;

    while(n > 0){
        resto = n%10;
        soma+=resto;
        n/=10;
    }

    return soma;
}

int main(){
    printf("\nDigite um numero: ");
    int n;
    scanf("%d", &n);

    int resul = soma(n);
    printf("\nAsoma dos numeros é %d", resul);

    return 0;
}