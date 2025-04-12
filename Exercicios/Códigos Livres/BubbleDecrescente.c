/*Bubble decrescente*/
#include <stdio.h>

void leituraVetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        printf("Digite o valor do vetor na posicao %d: ",i);
        scanf("%d",&v[i]);
    }


}

void bubble(int v[], int tam){
    int temp;
    printf("\nVetor ordenado: \n");
    for(int a = 0; a < tam; a++){
        printf("%d ",v[a]);
    }

        for(int i = 0; i < tam -1; i++){
            for(int j = 0; j < tam - 1 - i; j++){
                if(v[j] < v[j+1]){
                    temp = v[j];
                    v[j]= v[j+1];
                    v[j+1]= temp;

                }
            }
        }

            printf("\nVetor Decrescente: \n");
                for(int k= 0; k < tam; k++){
                    printf("%d ",v[k]);
                }

}

int main(){

    printf("\nDigite o tamanho do seu vetor: ");
    int tam;
    scanf("%d", &tam);

    int v[tam];

    leituraVetor(v,tam);
    bubble(v,tam);



}
