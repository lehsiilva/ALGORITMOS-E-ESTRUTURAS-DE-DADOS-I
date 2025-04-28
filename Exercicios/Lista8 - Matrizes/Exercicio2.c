/*Explique com suas palavras o que o programa abaixo está produzindo. Mostre a matriz
resultante*/ //O objetivo é preencher a matriz com a soma de seus indices

#include <stdio.h>



int main() {

    int mat[3][2], i, j,k,a;

    for(i = 0; i <= 2; i++) {
        for(j = 0; j <= 1; j++) {
            mat[i][j] = i + j;
        }
    }

    for(k = 0; k <= 1; k++) {
        for(a = 0; a <= 2; a++) {
            printf("%d ", mat[k][a]);
           
        }

        printf("\n");
    }
}