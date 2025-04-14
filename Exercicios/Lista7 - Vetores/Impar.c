/*Crie um vetor para armazenar 15 números inteiros. Solicite que o usuário insira os valores
e, em seguida, calcule e escreva a soma de todos os números ímpares do vetor*/

#include <stdio.h>

void ler(int v[], int tam){
    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", &v[i]);
    }

}

void impares(int v[], int tam){
    int impar = 0;
    for(int i = 0; i < tam; i++){
        if(v[i] % 2 == 1){
            impar+= v[i];
        }
    }

    printf("\nA soma dos numeros impares do vetor eh: %d",impar);

}

int main(){
    int tam = 15;
    int v[tam];

    ler(v,tam);
    impares(v,tam);
}