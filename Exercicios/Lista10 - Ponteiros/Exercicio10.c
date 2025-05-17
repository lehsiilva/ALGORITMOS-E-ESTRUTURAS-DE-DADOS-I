/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o endereço das posições contendo valores pares.*/

#include <stdio.h>

void ler(int *v){
    
    for(int i = 0; i < 5; i++){
        printf("\nDigite o valor da posicao %d: ", i);
        scanf("%d",(v + i));
    }

}

void exibir(int *v){

    printf("\nEndereços de memoria:");
    
    for(int i = 0; i < 5; i++){

        if(*(v+i)%2 == 0){

        printf("\nv[%d]: %p", i, &*(v+i));

        }
      
    }
}

int main(){
    int v[5];
    ler(v);
    exibir(v);
}