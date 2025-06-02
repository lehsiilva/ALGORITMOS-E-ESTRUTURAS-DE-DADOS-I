/*Crie uma matriz de 3x3 inteiros usando malloc, preencha com valores lidos do teclado e mostre os elementos acima da diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>

const int linha = 3;
const int coluna = 3;

void ler(int *m){

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){

            printf("\nDigite o valor na posicao [%d][%d]: ", i, j);
            scanf("%d", (m + i * coluna +j));

        }
    }

}

void acimaDiagonal(int *m){

    for(int i = 0; i < linha; i++){
        for(int j = i + 1; j < coluna; j++){

            printf("%d ", *(m + i * coluna + j));

        }
    }


}

void abaixoDiagonal(int *m){

    printf("\n");
    for(int i = 1; i < linha; i++){
        for(int j = 0; j < i; j++){

            printf("%d ", *(m + i * coluna + j));

        }
    }


}

int main(){

    int *m = (int*)malloc(linha * coluna *sizeof(int));

    ler(m);
    acimaDiagonal(m);
    abaixoDiagonal(m);

    free(m);
}