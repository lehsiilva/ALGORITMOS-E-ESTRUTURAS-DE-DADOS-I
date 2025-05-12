/**/
#include <stdio.h>
#include <stdlib.h>

void ler(int *v, int n){

    for(int i = 0; i < n; i++){
        printf("\nDigite o valor do 1 vetor na posição %d: ", i);
        scanf("%d", v+i);
    }
}

int main(){

    printf("\nDigite a quantidade do vetor: ");
    int n;
    scanf("%d", &n);

    int *v;

    v = (int*)malloc(n*sizeof(int));

    ler(v,n);


}