/*Crie um vetor de n inteiros usando malloc, preencha com valores lidos do teclado e mostre os elementos.*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *v, int n){
    
    for(int i = 0; i < n; i++){

        printf("\nDigite o valor do vetor na posicao %d: ",i);
        scanf("%d", (v+i));

    }

    for(int j = 0; j < n; j++){
        printf("%d ", *(v+j));
    }
}

int main(){

    printf("\nDigite quantos numeros voce deseja alocar: ");
    int n;
    scanf("%d", &n);

    int *v = (int*)malloc(n*sizeof(int));

    ler(v,n);
}