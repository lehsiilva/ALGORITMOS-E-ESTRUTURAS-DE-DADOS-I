/*Implemente um programa em C que declare um vetor de 10 numeros inteiros. O programa deve:
a) Preencher o vetor com valores fornecidos pelo usuário
b) Calcular e mostrar a soma de todos os elementos do vetor*/

#include <stdio.h>

void ler(int v[], int tam){

    for(int i = 0; i < tam; i++){

        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", &v[i]);
    }
}

void soma(int v[], int tam){

    int somar = 0;

    for(int i = 0; i < tam; i++){
        
        somar += v[i];
    }

    printf("\nSoma: %d", somar);
}

int main(){

    int tam = 10;
    int v[tam];

    ler(v, tam);
    soma(v,tam);
}