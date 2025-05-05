/*Crie uma função que receba dois vetores de inteiros e um terceiro vetor onde será armazenada a soma elemento a elemento dos dois primeiros. Todos os vetores têm o mesmo tamanho.*/
#include <stdio.h>

void ler(int *v, int *m, int tam){

    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor 1 na posicao %d: ", i);
        scanf("%d", v+i);
    }

    for(int j = 0; j < tam; j++){
        printf("\nDigite o valor do vetor 2 na posicao %d: ", j);
        scanf("%d", m+j);
    }
}

void soma(int *v, int *m, int *n, int tam){

    int soma;
    
    for(int i = 0; i < tam; i++){
        soma = 0;
        soma += *(m + i) + *(v + i);
        *(n + i) = soma;
    }

    printf("\nSoma: ");
    for(int j = 0; j < tam; j++){

        printf("%d ", *(n + j));
    }

}

int main(){

    printf("\nDigite o tamanho do seu vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    int m[tam];

    int n[tam];

    ler(v,m,tam);
    soma(v,m,n,tam);
    

}