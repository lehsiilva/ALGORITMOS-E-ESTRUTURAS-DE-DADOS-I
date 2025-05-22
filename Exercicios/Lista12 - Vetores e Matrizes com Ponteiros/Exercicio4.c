/*Escreva uma função que recebe uma matriz representada como um ponteiro para o pri-
meiro elemento, o número de linhas e colunas, e retorna o maior valor encontrado na
matriz. A matriz deve ser percorrida usando aritmética de ponteiros.*/

#include <stdio.h>


void ler(int *m, int linha, int coluna){

    for(int i = 0; i < linha; i++){
        
        for (int j = 0; j < coluna; j++){

            printf("\nDigite o valor da matriz na posicao [%d][%d]: ", i, j);
            scanf("%d", (m + i * coluna + j));

        }
    }

}

int maiorelemento(int *m, int linha, int coluna){

    int maior = *m;

    for(int i = 0; i < linha; i++){

        for (int j = 0; j < coluna; j++){

                if(*(m + i * coluna + j) > maior){
                    
                    maior = *(m + i * coluna + j);
                }
        }
    }

    return maior;
}


int main(){

    printf("\nDigite o numero de linhas: ");
    int linha;
    scanf("%d", &linha);

    printf("\nDigite o numero de colunas: ");
    int coluna;
    scanf("%d", &coluna);


    int matriz[linha][coluna];

    int *m = &matriz[0][0];

    ler(m, linha, coluna);
    int resul = maiorelemento(m, linha,coluna);

    printf("\nMaior valor encontrado: %d", resul);

    return 0;
}