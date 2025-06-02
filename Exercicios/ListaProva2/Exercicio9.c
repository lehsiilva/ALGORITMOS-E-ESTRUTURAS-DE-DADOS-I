/*Soma e Média:
Crie um vetor de 8 elementos de ponto flutuante.
Solicite ao usuário que preencha o vetor.
Calcule e imprima a soma de todos os elementos e a média aritmética.*/


#include <stdio.h>

void ler(float *v){

    for(int i = 0; i < 8; i++){
        printf("\nDigite o valor na posicao %d: ", i);
        scanf("%f", (v + i));
    }
}

float somaElementos(float *v){

    float soma = 0;

    for(int i = 0; i < 8; i++){

        soma+= *(v+i);
    }

    return soma;
}

void mediaElementos(float *v){

    float soma = somaElementos(v);
    float media = soma/8;

    printf("\nMedia: %.2f", media);
}

int main(){
    
    float v[8];

    ler(v);

    float soma = somaElementos(v);
    printf("\nSoma: %.2f", soma);

    mediaElementos(v);
}