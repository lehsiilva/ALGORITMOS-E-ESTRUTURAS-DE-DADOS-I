/*Escreva um programa em C que use a função ‘calloc‘ para alocar memória para uma
matriz 3x3 de inteiros. Preencha a matriz com valores fornecidos pelo usuário, exiba-a na
tela e, por fim, libere a memória alocada.*/

#include <stdio.h>
#include <stdlib.h>

const int linha = 3;
const int coluna = 3;

void ler(int *m){
    
    for(int i = 0; i < linha; i++){

        for(int j = 0 ; j < coluna; j++){

            printf("\nDigite o valor da matriz na posicao [%d][%d]: ", i,j);
            scanf("%d", (m + i * coluna +j));
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

    int *m = (int*)calloc(linha * coluna, sizeof(int));
    
    ler(m);

    free(m);

    return 0;
}