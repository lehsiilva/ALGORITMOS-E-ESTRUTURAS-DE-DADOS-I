/*Diagonais:
Crie uma matriz quadrada 5x5 de inteiros.
Preencha-a com números inteiros sequenciais (de 1 a 25).
Imprima os elementos da diagonal principal e da diagonal secundária.*/

#include <stdio.h>

const int linha = 5;
const int coluna = 5;

void preencher(int *m){

    int cont  = 1;

    for(int i = 0; i < linha; i++){

        for(int j = 0; j < coluna; j++){
            
            *(m + i * coluna +j) = cont;

            cont++;
        }
    }

}

void diagonalPrincipal(int *m){

    printf("\nDiagonal principal: \n");
    for(int i = 0; i < linha; i++){

        for(int j = 0; j < coluna; j++){
            
            if(i == j){

                printf("%d ",*(m + i * coluna + j));
            }
        }
    }
}

void diagonalSecundaria(int *m){

    printf("\nDiagonal Secundaria: \n");
    for(int i = 0; i < linha; i++){

        for(int j = 0; j < coluna ; j++){

           if(i + j == (linha - 1)){

                printf("%d ", *(m + i * coluna + j));
            }

        }

        
    }
}

int main(){
    int matriz[linha][coluna];
    int *m = &matriz[0][0];

    preencher(m);
    diagonalPrincipal(m);
    diagonalSecundaria(m);

    return 0;
}
