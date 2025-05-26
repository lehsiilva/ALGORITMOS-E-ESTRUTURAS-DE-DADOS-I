/*Preenchimento e Impressão:
Declare uma matriz de inteiros 3x3.
Preencha essa matriz de forma que o elemento [i][j] seja igual a i * j.
Imprima a matriz formatada.*/

#include <stdio.h>

const int linha = 3;
const int coluna = 3;

void preencher(int *m){

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            *(m + i * coluna + j) = i *j;
        }
    }

    printf("\nMatriz Formatada: \n");
     for(int a = 0; a < linha; a++){
        for(int k = 0; k < coluna; k++){
            printf("%d ", *(m + a * coluna + k));
        }
        printf("\n");
    }

}

int main(){

    int matriz[linha][coluna];
    int *m = &matriz[0][0];

    preencher(m);

    return 0;
}