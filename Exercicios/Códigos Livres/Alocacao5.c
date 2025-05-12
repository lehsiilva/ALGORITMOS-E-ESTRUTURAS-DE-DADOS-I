/*Escreva uma funçao que use "CALLOC" para preencher com uma matriz 3x3 . Preencha com valores do usuario e por fim libere a memoria. */

#include <stdio.h>
#include <stdlib.h>

const int linha = 3;
const int coluna = 3;

void ler(int **x){

    for(int i = 0; i < linha; i++){

        for(int j = 0; j < coluna; j++){

            printf("\nDigite o valor do 1 vetor na posição %d %d: ", i,j);
            scanf("%d", &x[i][j]);
        }

    }
}

int main(){

    int **x;
    
    x = (int**)calloc(linha,sizeof(int));

    for(int i = 0; i < linha; i++) {
        x[i] = (int*)calloc(coluna, sizeof(int));
    }

    ler(x);

    printf("\nOriginal: ");
    printf("\n");
    
        for(int i = 0; i < linha; i++){
            for(int j = 0; j < coluna; j++){
                printf("%d ", x[i][j]);
            }
            printf("\n");
        }

    free(x);

    return 0;

}

