/*Calcule a média dos valores armazenados em um vetor.*/

#include <stdio.h>

void ler(int tam, int v[]){
    for(int i = 0 ;i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d",&v[i]);
    }

}

void media(int tam, int v[]){

    int soma = 0;

    for(int i = 0; i < tam; i++){
        soma+=v[i];
    }

    double media = (double)soma/tam;

    printf("\nMedia: %.2lf", media);
    
}

int main(){
    printf("\nDigite a quantidade de elementos do seu vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    ler(tam, v);
    media(tam, v);
}