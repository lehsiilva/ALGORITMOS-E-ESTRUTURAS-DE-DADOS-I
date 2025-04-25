/*Encontre o maior e o menor valor em um vetor de números reais.*/

#include <stdio.h>

void ler(int tam, int v[]){
    for(int i = 0 ;i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d",&v[i]);
    }

}

void maiorMenor(int tam, int v[]){

    int maior = v[0];
    int menor = v[0];

    for(int i = 0; i < tam; i++){
        
        if(v[i] > maior){
            maior = v[i];
        }
            if(v[i]< menor){
                menor = v[i];
            }
    }

    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);

}

int main(){
    printf("\nDigite a quantidade de elementos do seu vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    ler(tam, v);
    maiorMenor(tam, v);
}