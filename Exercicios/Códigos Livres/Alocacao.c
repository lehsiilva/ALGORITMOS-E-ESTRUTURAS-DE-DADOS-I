/**/

#include <stdio.h>
#include <stdlib.h>

void ler(float u[], float v[], int n){

    for(int i = 0; i < n; i++){
        printf("\nDigite o valor do 1 vetor na posição %d: ", i);
        scanf("%d", &u[i]);
    }

    for(int j = 0; j < n; j++){
        printf("\nDigite o valor do 2 vetor na posição %d: ", j);
        scanf("%d", &v[j]);
    }
}



float produtoEscalar(float u[], float v[], int n){

    float soma = 0;

    for(int i = 0; i < n; i++){
        soma += (u[i] * v[i]);
    }

    return soma;

}

int main(){

    printf("\nDigite a quantidade do vetor: ");
    int n;
    scanf("%d", &n);

    float u[n];
    float v[n];

    float resul = produtoEscalar(u,v,n);

    printf("\nProduto escalar: %.2lf", resul);


}