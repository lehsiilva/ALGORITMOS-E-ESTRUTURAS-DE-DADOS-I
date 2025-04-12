/*Desenvolva um programa que conte quantos números pares existem em um vetor.*/

#include <stdio.h>

int main(){

    printf("\nDigite o tamanho do vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    int par = 0;
    

    for(int i = 0; i < tam; i++){
        
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", &v[i]);

        if(v[i]%2 == 0){
            par++;
        }
    }

        printf("\nVetor: ");

        for(int j = 0; j < tam; j++){
            printf("%d ", v[j]);
        }

        printf("\nHa %d pares no vetor", par);

    return 0;

}