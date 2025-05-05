/*Crie uma função que receba dois ponteiros para vetores e o tamanho. A função deve copiar os elementos do primeiro vetor para o segundo, usando ponteiros.*/

#include <stdio.h>

void ler(int *v, int tam){

    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", v+i);
    }
}

void copia(int *v, int *m, int tam){

    for(int i = 0; i < tam; i++){
        *(m + i) =  *(v + i);
    }

    printf("\nCopia: ");
    for(int j = 0; j < tam; j++){
        printf("%d ", *(m + j));
    }

}

int main(){

    printf("\nDigite o tamanho do seu vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    int m[tam];

    ler(v,tam);
    copia(v,m,tam);
    

}