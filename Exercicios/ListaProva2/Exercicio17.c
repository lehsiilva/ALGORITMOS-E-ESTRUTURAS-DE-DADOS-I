/*Escreva um programa que use ponteiros para contar quantos elementos pares há em um vetor de inteiros.*/

#include <stdio.h>

void ler(int *v, int tam){

    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", (v+i));
    }
}

int contar(int *v, int tam){

    int pares = 0;

    for(int i = 0; i < tam; i++){
        
        if(*(v+i)%2 == 0){
            pares++;
        }
    }

    return pares;

}

int main(){

    printf("\nDigite o tamanho do vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];
    
    ler(v,tam);

    int resul = contar(v, tam);

    printf("\nHa %d numeros pares no vetor", resul);
}