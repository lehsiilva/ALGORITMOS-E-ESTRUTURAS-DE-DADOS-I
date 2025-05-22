/*Implemente uma função que recebe uma matriz quadrada (N x N) como ponteiro para o
primeiro elemento e sua ordem N, e transpõe a matriz (troca linhas por colunas) direta-
mente na memória, usando ponteiros.*/


#include <stdio.h>


void ler(int *m, int n){

    for(int i = 0; i < n; i++){
        
        for (int j = 0; j < n; j++){

            printf("\nDigite o valor da matriz na posicao [%d][%d]: ", i, j);
            scanf("%d", (m + i * n + j));

        }
    }

    printf("\nOriginal: \n");
    for(int a = 0; a < n; a++){

        for (int b = 0; b < n; b++){

            printf("%d ", *(m + a * n + b));
                
        }

        printf("\n");
    }

}

void transpor(int *m, int n){

    for(int i = 0; i < n; i++){

        for (int j = i + 1; j < n; j++){

            int troca = *(m + i * n + j);
            *(m + i * n + j) =  *(m + j * n + i);
            *(m + j * n + i) = troca;
                
        }
    }

    printf("\nTrasposta: \n");
    for(int a = 0; a < n; a++){

        for (int b = 0; b < n; b++){

            printf("%d ", *(m + a * n + b));
                
        }
        printf("\n");
    }

}

int main(){

    printf("\nDigite o tamanho da matriz: ");
    int n;
    scanf("%d", &n);

    int matriz[n][n];
    int *m = &matriz[0][0];

    ler(m,n);
    transpor(m,n);



}

