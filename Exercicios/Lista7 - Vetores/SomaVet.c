/*Crie dois vetores para armazenar 5 números inteiros cada. Solicite que o usuário insira os
valores para os dois vetores. Depois, crie e escreva um terceiro vetor onde cada elemento
seja a soma dos elementos correspondentes dos dois vetores lidos.*/

#include <stdio.h>


int main(){
    int v1[5];
    int v2[5];
    int v3[5];

    int soma;

    for(int k = 0; k < 5; k++){
        printf("\nDigite o valor do vetor 1 na posicao %d: ", k);
        scanf("%d",&v1[k]);
    }

        for(int a = 0; a < 5; a++){
            printf("\nDigite o valor do vetor 2 na posicao %d: ", a);
            scanf("%d",&v2[a]);
        }

            for(int i = 0; i < 5; i++){
                soma = 0;
                soma = (v1[i] + v2[i]);
                v3[i] = soma;
            }
                printf("\nVetor soma: ");
                
                    for(int j = 0; j < 5; j++){
                    printf("%d ", v3[j]);
                    }
        
}