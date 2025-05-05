/*Crie uma função que receba um ponteiro para o início de um vetor de inteiros e seu tamanho. A função deve retornar o maior valor presente no vetor, utilizando apenas ponteiros para percorrer os elementos*/

#include  <stdio.h>

void ler(int *v, int tam){

    for(int i = 0 ; i < tam; i++){

        printf("\nDigite o valor na posicao %d: ", i);
        scanf("%d", v + i);

    }

}


int maior(int *v, int tam){
    
    int i = 0;
    int maior = *(v+i);

    for(i = 1; i < tam; i++){

        if(*(v+i) > maior){
            maior = *(v+i);
        }
    }

    return maior;
}

int main(){

    printf("\nDigite o tamanho do seu vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    ler(v, tam);
    int resul = maior(v,tam);

    printf("\nMaior valor: %d", resul);


}