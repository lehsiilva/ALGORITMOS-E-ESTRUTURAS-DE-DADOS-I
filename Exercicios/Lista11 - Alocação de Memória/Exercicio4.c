/*Escreva um programa em C que use a função ‘calloc‘ para alocar memória para uma
matriz 3x3 de inteiros. Preencha a matriz com valores fornecidos pelo usuário, exiba-a na
tela e, por fim, libere a memória alocada.*/

#include <stdio.h>
#include <stdlib.h>

const int linha = 3;
const int coluna = 3;

void ler(int **m){

    for(int i = 0; i < linha; i++){

        for(int j = 0; j < coluna; j++){

            printf("\nDigite o valor do 1 vetor na posicao %d %d: ", i,j);
            scanf("%d", &m[i][j]);
        }

    }

}

void exibir(int **m){

    for(int i = 0; i < linha; i++){

        for(int j = 0; j < coluna; j++){

            printf("%d ", m[i][j]);
            
        }

        printf("\n");

    }

}

int main (){

    int **m = (int **)calloc(linha,sizeof(int*));
    
    for(int i = 0; i < linha; i++){

        m[i] = (int *)calloc(coluna,sizeof(int));
    }

    ler(m);
    exibir(m);

    for(int i = 0; i < linha; i++){
        free(m[i]);
    }

    free(m);
}