/*Crie um vetor para armazenar 10 números inteiros. Solicite que o usuário insira os valores
e, em seguida, crie e escreva um segundo vetor com os números do primeiro vetor em ordem
inversa.*/

#include <stdio.h>

void ler(int v[], int tam){

    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", &v[i]);
    }

}

void inverso(int v[], int tam){
    
    int k[tam];
    int cont = tam - 1;
    
    for(int i = 0; i < tam ; i++){
        k[cont] = v[i];
        cont--;
        
    }

        printf("\nVetor em ordem inversa: ");
            for(int a = 0; a < tam; a++){
                printf("%d ",k[a]);
            }

   

}

int main(){
    int tam = 10;
    int v[tam];

    ler(v,tam);
    inverso(v,tam);
}