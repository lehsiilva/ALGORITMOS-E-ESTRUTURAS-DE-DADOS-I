/*Crie dois vetores para armazenar 10 números inteiros cada. Solicite que o usuário insira
os valores e, em seguida, crie e escreva um terceiro vetor que contenha apenas os números
que aparecem em ambos os vetores (interseção).*/


#include <stdio.h>

void ler(int v[], int k[], int tam){

    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do primeiro vetor na posicao %d: ", i);
        scanf("%d", &v[i]);
    }

    for(int j = 0; j < tam; j++){
        printf("\nDigite o valor do segundo vetor na posicao %d: ", j);
        scanf("%d", &k[j]);
    }

}

void compara(int v[], int k[], int tam){

    int a[tam];
    int cont = 0;
    
        for(int i = 0; i < tam; i++){

            for(int j = 0; j < tam; j++){
                
                if(v[i] == k[j]){
                    a[cont] = v[i];
                    cont++;
                }
            }
        }
                printf("\nVetor interseccao: ");
                for(int n = 0; n < cont; n++){
                
                    printf("%d ", a[n]);
                }

}

int main(){
    int tam = 10;
    int v[tam];
    int k[tam];

    ler(v,k,tam);
    compara(v,k,tam);
}