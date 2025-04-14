/*Crie um vetor para armazenar 10 números inteiros. O vetor deve ser preenchido com
valores gerados aleatoriamente entre 5 e 20 e, em seguida, crie e escreva um segundo
vetor que contenha apenas os números pares presentes no primeiro vetor.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int v[10];
    int v2[10];
    int par = 0;
    
    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        v[i] = 5 + rand()%20;
        if(v[i] % 2 == 0){
            v2[par] = v[i];
            par++;

        }
    }

    printf("\nVetor original: ");
    for(int a = 0; a < 10; a++){
        printf("%d ", v[a]);
    }

    printf("\nVetor pares: ");
    for(int j = 0; j < par; j++){
        printf("%d ", v2[j]);
    }
}