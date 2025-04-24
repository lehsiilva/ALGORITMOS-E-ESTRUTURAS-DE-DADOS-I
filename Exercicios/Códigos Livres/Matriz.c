/*Calcular a media geral de uma matriz 20*5 e a media das colunas*/ 

#include <stdio.h>
const int linha = 20;
const int coluna = 5;

void ler(int m[linha][coluna]){

    for(int i = 0; i < linha; i++){

        for(int j = 0; j < coluna; j++){

            printf("\nDigite o valor da matriz na posicao [%d][%d]: ", i,j);
            scanf("%d",&m[i][j]);
        }
    }
}

void media(int m[linha][coluna]){
    
    int somaGeral = 0;
    int somaColuna = 0;
    

    printf("\nTriangulo Superior:\n");

    for(int j = 0; j < linha; j++){

        for(int i = 0; i < coluna; i++){
            somaGeral += m[i][j];
            somaColuna += m[i][j];
        }
          
    }

    double mediageral = somaGeral/(linha*coluna);
    double mediaColuna = somaGeral/coluna;

    printf("\nsoma: %d", somaGeral);
    printf("\nMedia geral: %.2lf", mediageral);
    printf("\nMedia coluna: %.2lf", mediaColuna);
    
}

int main(){
    int m[linha][coluna];
    ler(m);
    media(m);
}