/*Crie um programa que aloque dinamicamente um array de 5 inteiros, preencha-o com
valores fornecidos pelo usuário e exiba o maior valor presente no array. Depois, libere a
memória.*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *v){

    for(int i = 0; i < 5; i ++){

        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", (v+i));
    }

}

void maior(int *v){

    int maior = *v;

    for(int i = 1; i < 5; i ++){
        
        if(*(v+i) > maior){

            maior = *(v+i);
        }
    }

    printf("\nMaior: %d", maior);

}

int main(){

    int *v = (int*)malloc(5*sizeof(int));
    
    ler(v);
    maior(v);

    free(v);
}