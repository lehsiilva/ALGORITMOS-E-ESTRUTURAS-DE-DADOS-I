/*Escreva um programa em C que declare uma matriz de inteiros com 2 linhas e 3 colunas.
O programa deve solicitar que o usuário insira os valores inteiros para preencher a matriz.
Em seguida, o programa deve:
a) Mostrar a matriz original.
b) Criar uma matriz chamada matrizTransposta e exibir a matriz transposta (ou seja,
uma matriz 3 × 2).
c) Calcular e exibir a soma de todos os elementos da matriz.*/

#include <stdio.h>

const int linha = 2;
const int coluna = 3;


void ler(int *m){

    for(int i = 0; i < linha; i++){
        
        for (int j = 0; j < coluna; j++){

            printf("\nDigite o valor da matriz na posicao [%d][%d]: ", i, j);
            scanf("%d", (m + i * coluna + j));

        }
    }

    printf("\nOriginal: \n");
    for(int a = 0; a < linha; a++){

        for (int b = 0; b < coluna; b++){

            printf("%d ", *(m + a * coluna + b));
                
        }

        printf("\n");
    }

}


void matrizTransposta(int *m, int *transposta){

    for(int i = 0; i < coluna; i++){
        
        for (int j = 0; j < linha; j++){

            *(transposta + i * linha + j) = *(m + j * coluna + i);

        }
    }

    printf("\nTransposta: \n");
    for(int a = 0; a < coluna; a++){

        for (int b = 0; b < linha; b++){

            printf("%d ", *(transposta + a * linha + b));
                
        }

        printf("\n");
    }

}

void soma(int *m){

    int somar = 0;

    for(int i = 0; i < linha; i++){
        
        for (int j = 0; j < coluna; j++){

            somar+=*(m + i * coluna + j);

        }
    }

    printf("\nSoma: %d", somar);

}

int main(){
    int matriz[linha][coluna];

    int*m = &matriz[0][0];

    int transposta[coluna][linha];

    int *t = &transposta[0][0];

    ler(m);
    matrizTransposta(m,t);
    soma(m);

    return 0;
}