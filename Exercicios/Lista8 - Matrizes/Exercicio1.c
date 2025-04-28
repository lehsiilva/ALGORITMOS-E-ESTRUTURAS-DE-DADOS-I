/* Escreva um programa em C que declare uma matriz de inteiros com 2 linhas e 3 colunas.
O programa deve solicitar que o usuário insira os valores inteiros para preencher a matriz.
Em seguida, o programa deve:
a) Mostrar a matriz original.
b) Criar uma matriz chamada matrizTransposta e exibir a matriz transposta (ou seja,
uma matriz 3 × 2).
c) Calcular e exibir a soma de todos os elementos da matriz.*/

#include <stdio.h>
const int linha = 2;
const int coluna = 3;

void ler(int m[linha][coluna]){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("\nDigite o termo [%d][%d]: ", i,j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nMatriz Original\n");
    for(int k = 0; k < linha; k++){
        for(int n = 0; n < coluna; n++){
            printf("%d ", m[k][n]);
        }
        printf("\n");
    }

}

void transposta(int m[linha][coluna]){
    
    int transposta[linha][coluna];
    
    for(int i = 0; i < coluna; i++){
        
        for(int j = 0; j < linha; j++){
            transposta[i][j]= m[j][i];
        
        }
    }

    printf("\nMatriz Transposta\n");
    for(int k = 0; k < coluna; k++){
        for(int n = 0; n < linha; n++){
            printf("%d ", transposta[k][n]);
        }
        printf("\n");
    }



}

void soma(int m[linha][coluna]){
   
    int soma = 0;
    
    for(int i = 0; i < linha; i++){
        
        for(int j = 0; j < coluna; j++){
            
            soma+= m[i][j];
        
        }
    }

    printf("\nSoma Matriz: %d ", soma);

}

int main(){
    int m[linha][coluna];
    ler(m);
    transposta(m);
    soma(m);
}