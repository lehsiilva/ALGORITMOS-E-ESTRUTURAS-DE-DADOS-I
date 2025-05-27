/*Crie um programa em C que:
Peça ao usuário a quantidade inicial de números inteiros que deseja armazenar.
Aloca dinamicamente um vetor com esse tamanho.
Lê os valores do vetor.
Pergunta ao usuário se deseja adicionar mais elementos.
Se sim, leia a nova quantidade total de elementos desejados (deve ser maior que a anterior).
Use realloc para redimensionar o vetor.
Leia os novos valores restantes e adicione ao final do vetor.
Mostre todos os elementos armazenados após a realocação.
Libere a memória alocada.*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *v, int n){
    
    for(int i = 0; i < n; i++){

        printf("\nDigite o valor do vetor na posicao %d: ",i);
        scanf("%d", (v+i));

    }

    printf("\nAntes de realocar: \n");
    for(int j = 0; j < n; j++){
        printf("%d ", *(v+j));
    }
}

void lernovo(int *v, int tam, int n){
    
    for(int i = tam; i < n; i++){

        printf("\nDigite o valor do vetor na posicao %d: ",i);
        scanf("%d", (v+i));

    }

    printf("\nDepois de realocar: \n");
    for(int j = 0; j < n; j++){
        printf("%d ", *(v+j));
    }
}



int main(){

    printf("\nDigite o valor do vetor: ");
    int tam;
    scanf("%d", &tam);

    int *v = (int*)malloc(tam * sizeof(int));

    ler(v,tam);

    char resp;

    int novo;

    printf("\nDeseja adicionar mais elementos? S pra Sim, N para Nao: ");
    scanf(" %c", &resp);

    if(resp == 's' || resp == 'S'){
        printf("\nDigite o novo valor do vetor: ");
        scanf("%d", &novo);

    int *novoVet = (int*)realloc(v, novo * sizeof(int));

    v = novoVet;

    lernovo(v,tam,novo);

    }

    free(v);

}