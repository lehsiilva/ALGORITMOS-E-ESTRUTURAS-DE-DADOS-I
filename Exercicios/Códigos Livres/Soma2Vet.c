/*Desenvolva um programa que some dois vetores de mesmo tamanho em um terceiro vetor.*/


#include <stdio.h>


void vetor(int v[], int q[], int tam){
    
    for(int i = 0; i < tam; i++){
    printf("\nDigite o valor do vetor 1 na posicao %d: ",i);
    scanf("%d",&v[i]);
    }

    for(int j = 0; j < tam; j++){
        printf("\nDigite o valor do vetor 2 na posicao %d: ",j);
        scanf("%d",&q[j]);
        }

}

void soma(int v[], int q[], int tam){
    int k[tam];
    int soma;

    for(int i = 0; i < tam; i++){
        soma = 0;
        soma = (v[i] + q[i]);
        k[i] = soma;
    }

    printf("\nSoma em um terceiro vetor: ");
    for(int j = 0; j < tam; j++){ //exibir o terceiro vetor
        printf("%d ",k[j]);
    }
}

int main(){
    
    printf("\nDigite o tamanho do vetor: ");
    int tam;
    scanf("%d",&tam);

    int v[tam];
    int q[tam];

    vetor(v,q,tam);
    soma(v,q,tam);
    

}
