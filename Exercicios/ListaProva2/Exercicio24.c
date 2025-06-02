/*Escreva um programa que cria uma matriz m x n com malloc, preenche com valores do usuário, e depois pergunta se o usuário quer adicionar mais linhas. Se sim, use realloc para aumentar a quantidade de linhas da matriz e permita que o usuário preencha os novos elementos. Por fim, imprima a matriz completa.*/

#include <stdio.h>
#include <stdlib.h>

void lernovo(int *m, int linha, int tam, int coluna){

    
    for(int i = linha; i < tam; i++){

        for(int j = 0; j < coluna; j++){

            printf("\nDigite o valor na posicao [%d][%d]: ", i, j);
            scanf("%d", (m + i * coluna + j));

        }
    }

    printf("\nMatriz Preenchida nova: \n");

    for(int a = 0; a < tam; a++){

        for(int k = 0; k < coluna; k++){

            printf("%d ", *(m + a * coluna + k));

        }

        printf("\n");
    }

}

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

    getchar();
    printf("\nDeseja aumentar a quantidade de linhas? S/N: ");
    char resp;
    scanf("%[^\n]", &resp);

    if(resp == 's' || resp == 'S'){

        printf("\nDigite o novo valor: ");
        int tam;
        scanf("%d", &tam);

        int *novo= (int*)realloc(m,tam * coluna * sizeof(int));

        m = novo;

        lernovo(m,linha, tam, coluna);
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