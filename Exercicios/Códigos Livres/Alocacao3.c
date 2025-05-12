/*Escreva uma função chamada soma_elementos() que receba um ponteiro para um array de int(alocado dinamicamente) e o tamanho dp array. A função deve retomar a soma*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *v, int tam){

    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do 1 vetor na posição %d: ", i);
        scanf("%d", &v[i]);
    }
}

int soma_elementos(int *v, int tam){

    int soma = 0;

    for(int i = 0; i < tam; i++){

        soma += v[i];
    }

    return soma;
}

int main(){

    
    printf("\nDigite a quantidade do vetor: ");
    int tam;
    scanf("%d", &tam);

    int *v;

    v = (int*)malloc(tam * sizeof(int));

    ler(v,tam);

    int resul = soma_elementos(v,tam);

    printf("\nSoma: %d", resul);
}

