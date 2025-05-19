/*Crie uma matriz m x n alocada dinamicamente, leia os valores, gere a matriz transposta, e imprima as duas.*/

#include <stdio.h>
#include <stdlib.h>



void ler(int **m, int linha, int coluna){

    for(int i = 0; i < linha; i++){

        for(int j = 0; j < coluna; j++){

            printf("\nDigite o valor da matriz na posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nMatriz Original:\n");

    for(int a = 0; a < linha; a++){

        for(int k = 0; k < coluna; k++){

            printf("%d ", m[a][k]);
        }

        printf("\n");
    }
}

void transpor(int **m, int linha, int coluna){

    printf("\nMatriz transposta:\n");

    for(int i = 0; i < coluna; i++){

        for(int j = 0; j < linha; j++){
            
            printf("%d ",m[j][i]);
        }

        printf("\n");
    }

}



int main(){

    printf("\nDigite a quantidade de linhas: ");
    int linha;
    scanf("%d", &linha);

    printf("\nDigite a quantidade de colunas ");
    int coluna;
    scanf("%d", & coluna);

    int **m = (int **)malloc(linha*sizeof(int*));

    for(int i = 0; i < linha; i ++){

        m[i] = (int *)malloc(coluna*sizeof(int));
    }

    ler(m, linha, coluna);
    transpor(m, linha,coluna);

    for(int i = 0; i < linha; i ++ ){
        free(m[i]);
    }

    free(m);

    return 0;

}