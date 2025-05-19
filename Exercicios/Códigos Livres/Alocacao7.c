/*Crie um programa que aloque dinamicamente um vetor de n inteiros, leia os valores do usuário e exiba a soma de todos os elementos. */

#include <stdio.h>
#include <stdlib.h> 

void ler(int *v, int tam){

    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", (v+i));
    }
}

void soma(int *v, int tam){

    int soma = 0;

    for(int i = 0; i < tam; i++){
        
        soma += *(v+i);
    }

    printf("\nSoma: %d", soma);

}

int main(){

    printf("\nDigite o tamanho do vetor: ");
    int tam;
    scanf("%d", &tam);

    int *v = (int*)malloc(tam * sizeof(int));

    ler(v,tam);
    soma(v, tam);

    free(v);
    
}