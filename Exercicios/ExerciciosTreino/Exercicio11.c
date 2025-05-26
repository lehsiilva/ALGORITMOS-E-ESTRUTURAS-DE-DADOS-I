/*Somas Parciais:
Crie uma matriz 4x4 de inteiros e solicite ao usuário que a preencha.
Calcule e imprima a soma de cada linha e a soma de cada coluna.*/

#include <stdio.h>

const int linha = 4;
const int coluna = 4;

void preencher(int m[linha][coluna]){

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("\nDigite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

}

void somaLinha(int m[linha][coluna]){

    int soma;

    for(int i = 0; i < linha; i++){

        soma = 0;

        for(int j = 0; j < coluna; j++){

            soma += m[i][j];
        }

        printf("\nSoma linha %d: %d", i , soma);
    }

}

void somaColuna(int m[linha][coluna]){

    int soma;

    printf("\n");
    
    for(int i = 0; i < coluna; i++){

        soma = 0;

        for(int j = 0; j < linha; j++){
            
            soma += m[j][i];
        }

         printf("\nSoma Coluna %d: %d", i , soma);
    }

}

int main(){
    int m[linha][coluna];

    preencher(m);
    somaLinha(m);
    somaColuna(m);

    return 0;
}