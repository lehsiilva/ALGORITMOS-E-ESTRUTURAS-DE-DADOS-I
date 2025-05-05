/*Implemente uma função que receba um ponteiro para o início de um array de inteiros e a quantidade de elementos. A função deve calcular e retornar a soma dos elementos do array.*/

#include <stdio.h>

void ler(int *v, int tam){

    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", v+i);
    }

}

int soma(int *v, int tam){

    int soma = 0;

    for(int i = 0; i < tam; i++){
        
       soma+=*(v+i);
    }

    
    return soma;
}

int main(){

    printf("\nDigite o tamanho do vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    ler(v,tam);

    int resul = soma(v, tam);

    printf("%d", resul);



}