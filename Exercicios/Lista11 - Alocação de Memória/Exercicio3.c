/*Crie um programa em C que aloque dinamicamente um array de ‘n‘ inteiros, onde ‘n‘ é
informado pelo usuário. Após a alocação, solicite ao usuário que insira os valores de cada
elemento do array. Em seguida, imprima os valores e libere a memória alocada.*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *v, int tam){

    for(int i = 0; i < tam ; i ++){
        
        printf("\nDigite o valor do vetor na posicao %d: ",i);
        scanf("%d", (v+i));
    }
}

void imprimir(int *v, int tam){

    for(int i = 0; i < tam ; i ++){

        printf("\nv[%d]:%d", i, *(v+i));
    }

}


int main(){
    
    printf("\nDigite o tamanho do vetor: ");
    int tam ;
    scanf("%d", &tam);

    int *v = (int *)malloc(tam * sizeof(int));

    if (v == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    ler(v, tam);
    imprimir(v,tam);

    free(v);
}
