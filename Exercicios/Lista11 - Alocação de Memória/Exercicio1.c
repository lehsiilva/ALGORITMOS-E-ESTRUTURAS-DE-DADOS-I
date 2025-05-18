/*Implemente um programa que aloque dinamicamente um array de 10 números inteiros.
Preencha o array com valores de 1 a 10 e, em seguida, imprima esses valores. Libere a
memória ao final.*/

#include <stdio.h>
#include <stdlib.h>

void ler(int *v){

    for(int i = 0; i < 10 ; i ++){
        
        *(v+i) = i + 1 ;
    }
}

void imprimir(int *v){

    for(int i = 0; i < 10 ; i ++){

        printf("\nv[%d]:%d", i, *(v+i));
    }

}

int main(){
    
    int *v = (int *)malloc(10*sizeof(int));

    if (v == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    ler(v);
    imprimir(v);

    free(v);

}