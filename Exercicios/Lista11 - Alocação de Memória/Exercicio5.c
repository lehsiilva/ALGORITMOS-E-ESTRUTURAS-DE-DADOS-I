/*Escreva uma função redimensiona_array que utilize realloc para redimensionar di-
namicamente um array de inteiros. A função deve receber o ponteiro para o array, o
tamanho atual e o novo tamanho desejado, e deve retornar o ponteiro para o novo array
redimensionado. Teste a função no programa principal*/

#include <stdio.h>
#include <stdlib.h>

int* redimensiona_array(int *v, int tam_desejado){
    
    int *novo = realloc(v,tam_desejado*sizeof(int));

    return novo;

}

int main(){

    printf("\nDigite o tamanho atual do vetor: ");
    int tam_atual ;
    scanf("%d", &tam_atual);

    printf("\nDigite o tamanho desejado do vetor: ");
    int tam_desejado ;
    scanf("%d", &tam_desejado);

    int *v = (int *)malloc(tam_atual*sizeof(int));

    v = redimensiona_array(v,tam_desejado);

    free(v);

}