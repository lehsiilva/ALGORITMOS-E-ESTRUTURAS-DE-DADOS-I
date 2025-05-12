/*Escreva uma funçao que use "CALLOC" para alocar memoria para um vetor x[5]. Preencha com valores do usuario e por fim libere a memoria. Preencher com uma matriz 3x3*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *x, int tam){

    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do 1 vetor na posição %d: ", i);
        scanf("%d", &x[i]);
    }
}

int main(){

    int tam= 5;

    int *x;

    x = (int*)calloc(tam,sizeof(int));

    ler(x,tam);

    printf("\nOriginal: ");
    
        for(int i = 0; i < tam; i++){
        printf("%d ", x[i]);
        }

    free(x);

    return 0;

}

