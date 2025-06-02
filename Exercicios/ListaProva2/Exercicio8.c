/*Análise de Elementos:
Declare um vetor de 15 números reais e preencha-o com valores aleatórios.
Encontre e imprima o maior e o menor elemento do vetor, junto com suas respectivas posições.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void preencher(int *v){
    srand(time(NULL));

    for(int i = 0; i < 15; i++){
        *(v + i) = rand()%99;
        printf("%d ", *(v+i));
    }
}

void maior_menor(int *v){
    
    int maior = *v;
    int menor = *v;

    int maior_posicao = 0;
    int menor_posicao = 0;

    for(int i = 0; i < 15; i++ ){
        if(*(v+i) > maior){
            maior = *(v+i);
            maior_posicao = i;
        }

        if(*(v + i) < menor){
            menor = *(v+i);
            menor_posicao = i;
        }
    }

    printf("\nMaior valor: v[%d] = %d ", maior_posicao, maior);
    printf("\nMenor valor: v[%d] = %d ", menor_posicao, menor);
}

int main(){

    int v[15];
    preencher(v);
    maior_menor(v);

    return 0;
}