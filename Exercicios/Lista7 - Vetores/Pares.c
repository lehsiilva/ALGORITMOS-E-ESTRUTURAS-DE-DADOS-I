/*Crie um vetor para armazenar 10 números inteiros. Solicite que o usuário insira os valores
e, em seguida, conte e escreva quantos números pares existem no vetor.*/

#include <stdio.h>

void ler(int v[], int tam){
    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", &v[i]);
    }

}

void pares(int v[], int tam){
    int par = 0;
    for(int i = 0; i < tam; i++){
        if(v[i] % 2 == 0){
            par++;
        }
    }

    printf("\nQuantidade de numeros pares: %d",par);

}

int main(){
    int tam = 10;
    int v[tam];

    ler(v,tam);
    pares(v,tam);
}