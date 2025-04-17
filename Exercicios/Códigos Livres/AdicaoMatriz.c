/*Dadas as matrizes A = [2, 5] e B = [0, 4], calcule a soma dos termos:
                        [-1, 3]      [3, -2]*/

#include <stdio.h>

void ler(int linha, int coluna, int a[linha][coluna], int b[linha][coluna]){
    
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("\nDigite o valor A[%d][%d]", i, j);
            scanf("%d",&a[i][j]);
        }
    }
            for(int a = 0; a < linha; a++){
                for(int k = 0; k < coluna; k++){
                    printf("\nDigite o valor B[%d][%d]", a, k);
                    scanf("%d",&b[a][k]);
                }
            }
}

void adicao(int linha, int coluna, int a[linha][coluna], int b[linha][coluna]){

    printf("\nSoma da posicoes:\n ");
    
    for(int i = 0; i < linha; i++){
        
        for(int j = 0; j < coluna; j++){
            printf("%d\t", a[i][j] + b[i][j]);
            
        }

        printf("\n");
    }

}

int main(){

    printf("\nDigite o numero de linhas: ");
    int linha;
    scanf("%d",&linha);

    printf("\nDigite o numero de colunas: ");
    int coluna;
    scanf("%d",&coluna);

    int a[linha][coluna];
    int b[linha][coluna];

    ler(linha,coluna,a,b);
    adicao(linha,coluna,a,b);

}

