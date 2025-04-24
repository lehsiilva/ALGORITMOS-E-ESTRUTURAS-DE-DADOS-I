/*Dada uma matriz 3*3 mostre os elementos pares da diagonal principal e da secundaria*/
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
    int local;
    int par;

    printf("\nDiagonal principal: ");
    for(int k = 0; k < linha; k++){

        for(int a = 0; a < coluna; a++){

           if(k == a){
                par = m[k][a];

           }

        }

            if(par%2 ==0){
                printf("%d ", par);
            }
        
          
        
    }


    printf("\nDiagonal secundaria: ");
    for(int i = 0; i < linha; i++){

        for(int j = 0; j < coluna - i; j++){
            local = m[i][j];
        }
        
            if(local %2 ==0){
                printf("%d ",local);
            }
          
        
    }
    
}

int main(){
    int m[linha][coluna];
    ler(m);
    diagonal(m);
}