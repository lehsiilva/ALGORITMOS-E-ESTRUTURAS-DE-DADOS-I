/*Crie uma função que recebe um vetor e um valor a ser buscado, e retorna o índice onde esse valor está. Caso não exista, retorne -1.*/

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void aleatorio(int *v, int tam){

    srand(time(NULL));

    for(int i = 0; i < tam; i++){

        *(v+i)= (rand()%11);
    }

    printf("\nVetor gerado: ");
    for(int j = 0; j < tam; j++){
        printf("%d ", *(v+j));
    }
}

int procurar(int *v, int tam, int p){

    int resul = -1;

    for(int i = 0; i < tam; i++){
       
        if(*(v+i) == p){

            resul = *(v+i);
        }
    }

    return resul;

}

int main(){

    printf("\nDigite o valor que voce quer procurar de 0-10: ");
    int p;
    scanf("%d", &p);

    printf("\nDigite o tamanho do vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    aleatorio(v,tam);
    int resul = procurar(v,tam,p);

    if(resul == -1){
        printf("\nValor nao encontrado!");
    }else{
        printf("\nValor %d encontrado!", resul);
    }

    return 0;

}