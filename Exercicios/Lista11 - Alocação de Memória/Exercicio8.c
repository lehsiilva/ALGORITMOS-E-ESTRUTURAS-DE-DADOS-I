/*Escreva um programa que aloque dinamicamente um array de ‘n‘ inteiros, onde ‘n‘ é
informado pelo usuário. Preencha o array com valores fornecidos pelo usuário e use uma
função para calcular e retornar a média dos valores. Exiba a média e libere a memória
ao final.*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *v, int n){

    for(int i = 0; i < n; i ++){

        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", (v+i));
    }

}

float media(int *v, int n){

    int soma = 0;
    float media;

    for(int i = 0; i < n; i ++){

        soma += *(v+i);
    }

    media = (float)soma/n;

    return media;
}


int main(){

    printf("\nDigite o tamanho de N: ");
    int n;
    scanf("%d", &n);

    int *v = (int *)malloc(n*sizeof(int));

    ler(v,n);

    float resul = media(v,n);

    printf("\nMedia: %.2f", resul);

    free(v);

}