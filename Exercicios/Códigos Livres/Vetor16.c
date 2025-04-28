/*Dados dois vetores ordenados, crie um terceiro vetor que seja a fusão ordenada dos dois primeiros*/

#include <stdio.h>

void ler(int tam, int tam2, int v[], int m[]){
    for(int i = 0 ;i < tam; i++){
        printf("\nDigite o valor do primeiro vetor na posicao %d: ", i);
        scanf("%d",&v[i]);
    }

    for(int j = 0 ;j < tam2; j++){
        printf("\nDigite o valor do segundo vetor na posicao %d: ", j);
        scanf("%d",&m[j]);
    }

}

void juntar(int tam, int tam2, int v[], int m[]){

    int tamanho = tam + tam2;
    int n[tamanho];
    int cont = tam;
    
    for(int i = 0; i < tam; i++){
       
        n[i]= v[i];

    }

    for(int a = 0; a < tam2; a++){
        n[cont]= m[a];
        cont++;

    }


    printf("\nJuntos: ");
    for(int j = 0; j < tamanho; j++){
       
        printf("%d ", n[j]);
        
    }

}





int main(){
    printf("\nDigite a quantidade de elementos do vetor 1: ");
    int tam;
    scanf("%d", &tam);

    printf("\nDigite a quantidade de elementos do vetor 2: ");
    int tam2;
    scanf("%d", &tam2);

    int v[tam];
    int m[tam2];

    ler(tam, tam2, v, m);
    juntar(tam,tam2, v, m);
}