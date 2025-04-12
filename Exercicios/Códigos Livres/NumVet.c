/*Escreva um programa que leia 10 números e os armazene em um vetor. Depois, imprima o vetor.*/

#include <stdio.h>

int main(){
    int v[10];

    for(int i = 0; i < 10; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", &v[i]);
    }

        printf("\nVetor: ");

            for(int j = 0; j <10; j++){
                printf("%d ", v[j]);
            }

    return 0;
}