/*Implemente uma função que verifique se um vetor está ordenado em ordem crescente.*/

#include <stdio.h>
#include <stdbool.h>

void vetor(int v[], int tam){
    
    for(int i = 0; i < tam; i++){
    printf("\nDigite o valor do vetor na posicao %d: ",i);
    scanf("%d",&v[i]);
    }

}

void ordenado(int v[], int tam){
    int troca;
    bool verifica = true;

    for(int i = 0; i < tam-1; i++){
        
        for(int j = 0; j < tam - 1 - i; j++){
            if(v[j] > v[j+1]){
                troca = v[j];
                v[j] = v[j+1];
                v[j+1] = troca;
                verifica = false;
            }
        }
    }

    if(verifica == true){
        printf("\nO vetor esta ordenado de forma crescente");
    }else{
        printf("\nO vetor nao esta ordenado de forma crescente");
    }

}


int main(){
    
    printf("\nDigite o tamanho do vetor: ");
    int tam;
    scanf("%d",&tam);

    int v[tam];

    vetor(v,tam);
    ordenado(v,tam);

}
