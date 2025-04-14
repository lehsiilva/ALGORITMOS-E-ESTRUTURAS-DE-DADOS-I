/*Crie um vetor para armazenar 10 números inteiros. Solicite que o usuário insira os valores
e, após a leitura, escreva cada elemento do vetor e a sua respectiva posição no formato:
"Elemento [valor] na posição [índice]".*/

#include <stdio.h>


int main(){

    int v[10];

    for(int i = 0; i < 10; i++){
        printf("\nDigite o valor do vetor na posicao %d: ",i);
        scanf("%d", &v[i]);
    }

        for(int j = 0;j < 10; j++){
        printf("\nElemento %d na posicao %d", v[j],j);
        }



    
}