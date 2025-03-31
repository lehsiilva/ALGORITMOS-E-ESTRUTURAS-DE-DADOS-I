/*Escreva uma função que receba um número inteiro positivo N e retorne o somatório dos
números inteiros positivos pares menores do que N. Exemplo: 19 = 1 + 9 = 10*/

#include <stdio.h>

int somatorio(int n){
    int soma = 0, resto;

    while(n > 0){
        resto = n % 10;
        soma += resto;
        n /= 10;
    }

    return soma;
}

int main(){
    printf("\nDigite um numero: ");
    int n;
    scanf("%d", &n);

    int resul = somatorio(n);
    printf("\nO somatorio dos numeros é: %d", resul);

    return 0;
}