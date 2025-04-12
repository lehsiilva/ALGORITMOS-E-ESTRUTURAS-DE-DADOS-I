/*Faça um programa que some todos os elementos de um vetor de inteiros.*/

#include <stdio.h>

int main(){

    printf("\nDigite o tamanho do vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    int soma = 0;

    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", &v[i]);

        soma+=v[i];
    }

    printf("\nSoma: %d", soma);



}