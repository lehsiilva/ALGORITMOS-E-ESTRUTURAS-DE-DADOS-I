/*Crie um vetor de 5 inteiros e imprima, para cada posição, o valor armazenado e o endereço de memória correspondente usando ponteiros.*/

#include <stdio.h>
#include <stdlib.h> 

void ler(int *v){

    for(int i = 0; i < 5; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", (v+i));
    }

    for(int j = 0; j < 5; j++){
        printf("\nConteudo: %d", *(v+j));
        printf("\nEndereco: %p", (v+j));
    }
}



int main(){

    int v[5];

    ler(v);
}