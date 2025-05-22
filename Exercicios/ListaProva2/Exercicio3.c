/*Implemente um programa em C que aloque memória dinamicamente para uma matriz quadrada de inteiros com dimensões 50x50. O programa deve:
a) Preencher a matriz com valores entre 1 e 100, gerados aleatoriamente. 
b) Calcular e exibir a média dos valores da matriz. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int linha = 50;
const int coluna = 50;

void preencher(int **m){

    srand(time(NULL));

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            m[i][j] = 1 + rand()%100;
        }
    }

    printf("\nMatriz Original: \n");
    for(int a = 0; a < linha; a++){
        for(int k = 0; k < coluna; k++){
            printf("%d ", m[a][k]);
        }
        printf("\n");
    }
}

void media(int **m){

    int soma = 0;
    int tam = linha * coluna;
    double media;

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            soma += m[i][j];
        }
    }

    media = (double)soma/tam;

    printf("\nMedia: %.2lf", media);

}


int main(){

    int **m = (int **)malloc(linha * sizeof(int*));

    for(int i = 0; i < linha; i++){
        m[i] = (int*)malloc(coluna * sizeof(int));
    }

    preencher(m);
    media(m);

    for(int i = 0; i < linha; i++){
        free(m[i]);
    }

    free(m);
}