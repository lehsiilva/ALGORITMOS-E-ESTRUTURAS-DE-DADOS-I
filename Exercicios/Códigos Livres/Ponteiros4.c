/*Crie uma função que receba um vetor de inteiros e o seu tamanho. A função deve contar e retornar quantos números pares existem no vetor. Use ponteiros para percorrer.*/

#include <stdio.h>

void ler(int *v, int tam){

    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", v+i);
    }

}

int pares(int *v, int tam){

    int par = 0;

    for(int i = 0; i < tam; i++){
        if(*(v+i)%2 == 0){
            par++;
        }
    }

    return par;

}

int main(){

    printf("\nDigite o tamanho do seu vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    ler(v,tam);
    
    int resul = pares(v,tam);

    printf("\nExiste %d numeros pares", resul);


}