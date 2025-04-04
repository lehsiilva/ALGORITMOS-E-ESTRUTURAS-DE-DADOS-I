/*Leia um vetor de 6 números inteiros, calcule e mostre:
A soma de todos os elementos.
A média aritmética dos valores.

Exemplo de entrada: [4, 8, 15, 16, 23, 42]
Saída esperada:
Soma: 108  
Média: 18*/

#include <stdio.h>

int main(){

    int num[6];
    int soma = 0;

    for(int i = 0; i < 6; i++){
        printf("\nDigite o %d numero: ", i);
        scanf("%d", &num[i]);

        soma += num[i];
    }

    float media = soma/6;

    printf("\nSoma: %d", soma);
    printf("\nMedia: %.2f", media);


}