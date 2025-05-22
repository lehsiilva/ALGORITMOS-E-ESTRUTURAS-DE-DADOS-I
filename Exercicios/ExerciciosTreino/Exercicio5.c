/*Implemente uma função em C que receba uma matriz quadrada de inteiros (alocada dinamicamente em um bloco contínuo de memória) e o tamanho da matriz. A função deve usar aritmética de ponteiros para acessar os elementos da matriz. A função deve:
a) Calcular e retornar o maior valor presente na matriz.
b) Calcular e retornar a soma dos elementos que estão abaixo da diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *m, int tamanho){
    
    for(int i = 0; i < tamanho; i++){

        for(int j = 0; j < tamanho; j++){

            printf("\nDigite o valor na posicao [%d][%d]: ", i,j);
            scanf("%d", (m + i * tamanho + j));
            
        }
    }
}

void MaiorElemento(int *m, int *maior, int tamanho){

    *maior = *m;

    for(int i = 0; i < tamanho; i++){

        for(int j = 0; j < tamanho; j++){

            int valor = *(m + i *tamanho + j );

            if(valor > *maior){

                *maior = valor;
            }
        }
    }

}

void SomaElemento(int *m, int *soma, int tamanho){

    *soma = 0;

    for(int i = 1; i < tamanho; i++){

        for(int j = 0; j < i; j++){

            *soma += *(m + i * tamanho + j);
        }
    }
    
}




int main(){

    printf("\nDigiite o tamanho: ");
    int tamanho;
    scanf("%d", &tamanho);

    int *m = malloc(tamanho* tamanho * sizeof(int));

    int maior;
    int soma;

    ler(m, tamanho);
    MaiorElemento(m, &maior, tamanho);
    SomaElemento(m, &soma, tamanho);

    printf("\nMaior Elemento: %d", maior);
    printf("\nSoma dos Elemento: %d", soma);

    free(m);
}