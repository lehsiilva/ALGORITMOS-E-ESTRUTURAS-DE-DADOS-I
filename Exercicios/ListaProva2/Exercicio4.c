/*Escreva uma função que receba a matriz criada na questão anterior (passagem por referência) e o tamanho da matriz (passagem por valor). A função deve:
a) Calcular e exibir a soma dos elementos da diagonal principal.
b) Transpor a matriz original usando ponteiros. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int **m, int linha, int coluna){

    srand(time(NULL));

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            *(*(m + i) + j) = 1 + rand()%100;
        }
    }

    printf("\nMatriz Original: \n");
    for(int a = 0; a < linha; a++){
        for(int k = 0; k < coluna; k++){
            printf("%d ", *(*(m + a) + k));
        }
        printf("\n");
    }
}

void somaDiagonal(int **m, int linha, int coluna){

    int soma = 0;

    for(int i = 0; i < linha; i ++){
        for(int j = 0; j < coluna; j++){

            if(i == j){
                soma+=*(*(m + i) + j);
            }
        }
    }

    printf("\nSoma da Diagonal Principal: %d", soma);

}

void Matriztransposta(int **m, int linha, int coluna){

    int **transposta= (int **)malloc(coluna * sizeof(int*));

    for(int i = 0; i < coluna; i++){
        transposta[i] = (int*)malloc(linha * sizeof(int));
    }

    for(int i = 0; i < coluna; i ++){
        for(int j = 0; j < linha; j++){
            
         *(*(transposta + j ) + i) = *(*(m + i) + j); 
        }
    }

    printf("\nMatriz Transposta: \n");
    for(int a = 0; a < linha; a++){
        for(int b =0; b < coluna; b++){
            printf("%d ", *(*(transposta + a)+ b));
        }
        printf("\n");
    }

    for(int i = 0; i < linha; i++){
        free(transposta[i]);
    }

    free(transposta);

    
}

int main(){

    int linha = 50;
    int coluna = 50;


    int **m = (int **)malloc(linha * sizeof(int*));

    for(int i = 0; i < linha; i++){
        m[i] = (int*)malloc(coluna * sizeof(int));
    }


    preencher(m, linha, coluna);
    somaDiagonal(m, linha, coluna);
    Matriztransposta(m, linha, coluna);

    for(int i = 0; i < linha; i++){
        free(m[i]);
    }

    free(m);
}