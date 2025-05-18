/*Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis
inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do array.
Escreva também uma função main que use essa função.*/
#include <stdio.h>

void ler(int *v, int n){

    for(int i = 0; i < n; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", (v+i));
    }

}

void min_max(int *v, int n, int *min, int *max){

    *min = *v;
    *max = *v;

    for(int i = 1; i < n; i++){
        
        if(*(v+i) > *max){
            *max = *(v + i);
        }

        if(*(v+i) < *min){
            *min = *(v + i);
        }
        
    }
}

int main(){

    printf("\nDigite o tamanho do seu vetor: ");
    int n;
    scanf("%d", &n);

    int v[n];

    int min;
    int max;

    ler(v,n);

    min_max(v,n,&min,&max);

    printf("\nMaximo: %d", max);
    printf("\nMinimo: %d", min);

}