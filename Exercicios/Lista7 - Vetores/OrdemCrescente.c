/*Crie um vetor para armazenar 10 números reais. Solicite que o usuário insira os valores e,
em seguida, organize os números do vetor em ordem crescente e escreva o vetor ordenado.*/

#include <stdio.h>

void ler(double v[], double tam){

    for(int i = 0; i < tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%lf", &v[i]);
    }

}

void crescente(double v[], double tam){
    double troca;
    
    for(int i = 0; i < tam - 1 ; i++){
       
        for(int j = 0; j < tam - i - 1 ; j++){
            if(v[j] > v[j+1]){
                troca = v[j];
                v[j] = v[j+1];
                v[j+1] = troca;
                
            }

        }
        
    }
                printf("\nVetor em ordem crescente: ");
                for(int a = 0; a < tam; a++){
                    printf("%.2lf ",v[a]);
                }

   

}

int main(){
    int tam = 10;
    double v[tam];

    ler(v,tam);
    crescente(v,tam);
}