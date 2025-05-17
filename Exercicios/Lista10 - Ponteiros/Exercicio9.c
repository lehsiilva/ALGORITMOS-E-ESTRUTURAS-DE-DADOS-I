/*Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor
lido.*/

#include <stdio.h>

void ler(int *v){

    for(int i = 0; i < 5; i++){

        printf("\nDigite o valor na posicao %d: ", i);
        scanf("%d",(v+i));
    }
}

void dobro(int *v){

    for(int i = 0; i < 5; i++){

        printf("\nv[%d]: %d", i, *(v + i)* 2);
    }
}

int main(){

    int v[5];

    ler(v);

    dobro(v);
}