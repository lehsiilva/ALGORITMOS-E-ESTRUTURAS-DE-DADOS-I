/*Matriz Transposta:
Declare uma matriz 2x3 de inteiros e preencha-a com valores.
Crie e imprima a matriz transposta da primeira.*/

#include <stdio.h>

const int linha = 2;
const int coluna = 3;

void preencher(int *m){

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("\nDigite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", (m + i * coluna +j));
        }
    }

}

void transpor(int *m){

    int tramp[coluna][linha];
    int *t = &tramp[0][0];

    for(int i = 0; i < coluna; i++){

        for(int j = 0; j < linha; j++){

            *(t + i * linha + j) = *(m + j * coluna + i);
        }
    }

    printf("\nMatriz transposta: \n");
    for(int a = 0; a < coluna; a++){

        for(int k = 0; k < linha; k++){

            printf("%d ",*(t + a * linha + k));

        }

        printf("\n");
    }

}

int main(){
    int matriz[linha][coluna];
    int *m = &matriz[0][0];

    preencher(m);
    transpor(m);
    

    return 0;
}