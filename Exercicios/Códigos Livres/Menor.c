/*Crie um programa que encontre o maior e o menor valor em um vetor.*/

#include <stdio.h>

int main(){

    printf("\nDigite o tamanho do vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    printf("\nDigite o valor do vetor na posicao 0: ");
    scanf("%d", &v[0]);

    int maior = v[0];
    int menor = v[0];

    for(int i = 1; i <= tam-1; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", &v[i]);

        if(v[i] > maior){
            maior = v[i];
        }

        if(v[i] < menor){
            menor = v[i];
        }

    }

    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);



}