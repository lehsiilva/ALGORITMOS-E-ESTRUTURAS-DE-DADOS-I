/*Leitura e Impressão Inversa:
Leia 5 números inteiros do usuário e armazene-os em um vetor.
Imprima os elementos do vetor na ordem inversa.*/

#include <stdio.h>

void ler(int *v){

    for(int i = 0; i < 5; i++){
        printf("\nDigite o valor na posicao %d: ", i);
        scanf("%d", (v + i));
    }
}

void inverter(int *v){

    printf("\nVetor inverso: \n");

    for(int i = 4; i >= 0; i--){
        
        printf("%d ", *(v + i));
    }

}

int main(){
    int v[5];
    ler(v);
    inverter(v);

    return 0;
}