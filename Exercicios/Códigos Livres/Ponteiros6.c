/*Crie uma função que receba um vetor de inteiros e seu tamanho, e retorne a média aritmética dos valores como float. Use apenas ponteiros para percorrer o vetor.*/

#include <stdio.h>

void ler(int *v, int tam){

    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", v+i);
    }
}

float media(int *v, int tam){

    int soma = 0;
    float media;

    for(int i = 0; i < tam; i++){
        soma += *(v + i);
    }

    media = soma/tam;

    return media;

}

int main(){

    printf("\nDigite o tamanho do seu vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    ler(v,tam);
    float resul = media(v,tam);

    printf("\nMedia: %.2f", resul);
}