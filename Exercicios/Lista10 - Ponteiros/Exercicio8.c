/*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array.*/
#include <stdio.h>

void ler(float *v){
    
    for(int i = 0; i < 10; i++){
        printf("\nDigite o valor da posicao %d:", i);
        scanf("%f",&v[i]);
    }

}

void exibir(float *v){

    printf("\nEndereços de memoria:");
    
    for(int i = 0; i < 10; i++){

        printf("\nv[%d]: %p", i, &v[i]);
      
    }
}

int main(){
    float v[10];
    ler(v);
    exibir(v);
}