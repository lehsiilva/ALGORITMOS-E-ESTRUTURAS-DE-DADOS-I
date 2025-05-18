/*Implemente uma função que receba como parâmetro um array de números reais de tama-
nho N e retorne quantos números negativos há nesse array. Essa função deve obedecer
ao protótipo: int negativos(float *vet, int N);*/

#include <stdio.h>

void ler(float *vet, int n){

    for(int i = 0; i < n; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%f", (vet+i));
    }
}

int negativos(float *vet, int n){

    int negativo = 0;

    for(int i = 0; i < n; i++){

        if(*(vet+i) < 0){
            negativo++;
        }
    }

    return negativo;

}

int main(){

    printf("\nDigite o tamanho do seu vetor: ");
    int n;
    scanf("%d", &n);

    float vet[n];

    ler(vet, n);

    int resul = negativos(vet, n);

    printf("\nQuantidade de negativos: %d", resul);
}