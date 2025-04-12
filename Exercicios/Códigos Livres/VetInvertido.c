/*Implemente um programa que inverta a ordem dos elementos em um vetor.*/

#include <stdio.h>

int main(){

    printf("\nDigite o tamanho do vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];
    
    for(int i = 0; i < tam; i++){
        
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", &v[i]);

    }

        printf("\nVetor Original: ");
    
            for(int j = 0; j < tam; j++){
                printf("%d ", v[j]);
            }

                printf("\nVetor Invertido: ");
    
                for(int k = tam-1; k >= 0; k--){
                printf("%d ", v[k]);
                }
    
            
    

        
    return 0;

}