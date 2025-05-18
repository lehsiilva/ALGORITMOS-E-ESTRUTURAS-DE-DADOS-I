/*Escreva uma função chamada soma_elementos que receba um ponteiro para um array de
inteiros (alocado dinamicamente) e o tamanho do array. A função deve retornar a soma
de todos os elementos. Teste a função alocando um array de tamanho 5 no programa
principal, preenchendo-o com valores de sua escolha.*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *v, int tam){

    for(int i = 0; i < tam ; i ++){
        
        printf("\nDigite o valor do vetor na posicao %d: ",i);
        scanf("%d", (v+i));
    }
}

int soma_elementos(int *v, int tam){

    int soma = 0;

    for(int i = 0; i < tam ; i ++){
        
        soma += *(v+i);
    }

    return soma;

}

int main(){
    
    int tam = 5;

    int *v = (int *)malloc(tam * sizeof(int));

    if (v == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    ler(v, tam);

    int resul = soma_elementos(v,tam);

    printf("\nSoma: %d", resul);

    free(v);
}