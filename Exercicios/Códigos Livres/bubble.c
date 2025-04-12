/*Bubble crescente*/

#include <stdio.h>

void vetor(int vet[], int tam){
    
    for(int i = 0; i< tam; i++){
        printf("\nDigite o valor do vetor na posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

}

void bubble(int vet[], int tam){
    int temp;

    printf("\nVetor ordenado: \n");
    for(int a = 0; a < tam ; a++){
        printf("%d ", vet[a]);
    }

        for(int i = 0; i < tam -1 ; i++){
            for(int j = 0;  j < tam - i - 1; j++){
                if(vet[j] > vet[j+1]){
                    temp = vet[j];
                    vet[j] = vet[j+1];
                    vet[j+1]= temp;
                }
            }
        }

            printf("\nVetor ordenado crescente: \n");
                for(int k = 0; k < tam; k++){
                printf("%d ", vet[k]);
                }


}



int main(){
    
    printf("\nDigite o tamanho do vetor: ");
    int tam;
    scanf("%d",&tam);
    
    int vet[tam];
    
    vetor(vet,tam);
    bubble(vet,tam);

}