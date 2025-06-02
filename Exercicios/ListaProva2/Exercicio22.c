/*Construa uma função que receba uma matriz quadrada de reais. A função deverá calcular e retornar a
média dos valores posicionados acima da diagonal secundária.*/

#include <stdio.h>

const int linha = 3;
const int coluna = 3;

void ler(float *m){
    
    for(int i = 0; i < linha; i++){

        for(int j = 0 ; j < coluna; j++){

            printf("\nDigite o valor da matriz na posicao [%d][%d]: ", i,j);
            scanf("%f", (m + i * coluna +j));
        }
    }
}

float mediaElementos(float *m){
    
    float soma = 0;
    float media;

    int tam = 0;

    for(int i = 0; i < linha; i++){

        for(int j = 0 ; j < coluna - 1 - i; j++){
            
            soma += *(m + i * coluna + j);

            tam++;
             
        }
    }

    media = soma/tam;


    return media;
}

int main(){

    float matriz[linha][coluna];
    float *m= &matriz[0][0];

    ler(m);
    float media = mediaElementos(m);
    printf("\nMedia: %.2f", media);
}