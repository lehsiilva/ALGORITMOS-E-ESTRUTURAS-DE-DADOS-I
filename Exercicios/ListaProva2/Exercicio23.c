/* Escreva um programa que aloque dinamicamente uma matriz de inteiros de tamanho m x n usando malloc, onde o usuário entra com os valores de m e n. Depois, o programa deve solicitar que o usuário preencha todos os elementos da matriz e, ao final, imprimir a matriz.*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *m, int linha, int coluna){

    for(int i = 0; i < linha; i++){

        for(int j = 0; j < coluna; j++){

            printf("\nDigite o valor na posicao [%d][%d]: ", i, j);
            scanf("%d", (m + i * coluna + j));

        }
    }

    printf("\nMatriz Preenchida: \n");

    for(int a = 0; a < linha; a++){

        for(int k = 0; k < coluna; k++){

            printf("%d ", *(m + a * coluna + k));

        }

        printf("\n");
    }

}

int main(){

    printf("\nDigite o tamanho da linha: ");
    int linha;
    scanf("%d", &linha);

    printf("\nDigite o tamanho da coluna: ");
    int coluna;
    scanf("%d", &coluna);

    
    int *m = (int*)malloc(linha * coluna * sizeof(int));

    ler(m, linha, coluna);

    free(m);
}