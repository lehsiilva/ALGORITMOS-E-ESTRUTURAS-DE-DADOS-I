/*Crie um vetor de 5 elementos, preencha-o com números inteiros e depois exiba-os na ordem inversa.*/
#include <stdio.h>

void ler(int tam, int v[]){
    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor na posicao %d: ", i);
        scanf("%d",&v[i]);
    }

}

void inverso(int tam, int v[]){
    for(int i = tam-1; i >= 0; i--){
        printf("%d ", v[i]);
    }

}

int main(){
    printf("\nDigite quantos elementos tem o seu vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    ler(tam, v);
    inverso(tam,v);
}