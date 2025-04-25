/*Conte quantos números pares e ímpares existem em um vetor.*/

#include <stdio.h>

void ler(int tam, int v[]){
    for(int i = 0 ;i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d",&v[i]);
    }

}

void parImpar(int tam, int v[]){

    int par = 0;
    int impar = 0;

    for(int i = 0; i < tam; i++){
        if(v[i]% 2 == 0){
            par++;
        }else{
            impar++;
        }
    }

    printf("\nQuantidade num Pares: %d", par);
    printf("\nQuantidade num Impares: %d", impar);
    
}

int main(){
    printf("\nDigite a quantidade de elementos do seu vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    ler(tam, v);
    parImpar(tam, v);
}