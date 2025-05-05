/*Crie uma função que inverta os elementos de um vetor dentro da própria função. A função deve receber o ponteiro do vetor e seu tamanho, e trocar os elementos de início com os do fim, usando ponteiros.*/

#include <stdio.h>

void ler(int *v, int tam){

    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", v+i);
    }
}

void inverter(int *v, int tam){

    int qnt = tam - 1;

    int troca;

    int j = 0;

    for(int i = qnt; i > qnt/2 ; i--){
        
        troca = *(v + j);
        *(v + j) = *(v + i);
        *(v + i) = troca;

        j++;
    }

    printf("\nVetor Invertido: ");

    for(int k = 0; k < tam; k++){

        printf("%d", *(v + k));
    }
    

}

int main(){
    printf("\nDigite o tamanho do seu vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    ler(v,tam);
    inverter(v,tam);
}