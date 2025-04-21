#include <stdio.h>
const int linha = 3;
const int coluna = 3;

void ler(int m[linha][coluna]){

    for(int i = 0; i < linha; i++){

        for(int j = 0; j < coluna; j++){

            printf("\nDigite o valor da matriz na posicao [%d][%d]: ", i,j);
            scanf("%d",&m[i][j]);
        }
    }
}

void diagonal(int m[linha][coluna]){
   
    int transpor[linha][coluna];

    for(int i = 0; i < coluna; i++){

        for(int j = 0; j < linha; j++){

                transpor[i][j] = m[j][i];
            
        }
        
    }

        printf("\nMatriz Original:\n");
        for(int d = 0; d < linha ; d++){
            for(int s = 0; s < coluna ; s++){
            printf("%d ", m[d][s]);
            }
            printf("\n");
        }
    

            printf("\nMatriz transposta:\n");
            for(int a = 0; a < linha ; a++){
                for(int v = 0; v < coluna ; v++){
                printf("%d ", transpor[a][v]);
                }
                printf("\n");
            }
            
}

int main(){
    int m[linha][coluna];
    ler(m);
    diagonal(m);
}