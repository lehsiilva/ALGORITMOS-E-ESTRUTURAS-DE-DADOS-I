/*Ordene um vetor em ordem crescente e depois em ordem decrescente*/
#include <stdio.h>

void ler(int tam, int v[]){
    for(int i = 0 ;i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d",&v[i]);
    }

}

void crescente(int tam, int v[]){

    int troca;

   
    for(int i = 0; i < tam-1; i++){
        for(int j = 0; j < tam - 1 - i; j++){
            if(v[j] > v[j+1]){
                troca = v[j];
                v[j] = v[j+1];
                v[j+1] = troca;
                
            }
        }
    }

    printf("\nCrescente: ");
    for(int a = 0; a < tam; a++){
        printf("%d ", v[a]);
    }  
    
}

void decrescente(int tam, int v[]){
   
    int troca;

    for(int j = 0; j < tam-1; j++){
        for(int b = 0; b < tam - 1 - j; b++){
            if(v[b] < v[b+1]){
                troca = v[b];
                v[b] = v[b+1];
                v[b+1] = troca;
            }    
            
        }
    }

    printf("\nDecrescente: ");
    for(int k = 0; k < tam; k++){
        printf("%d ", v[k]);
    }
}

int main(){
    printf("\nDigite a quantidade de elementos do seu vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    ler(tam, v);
    crescente(tam, v);
    decrescente(tam, v);
}