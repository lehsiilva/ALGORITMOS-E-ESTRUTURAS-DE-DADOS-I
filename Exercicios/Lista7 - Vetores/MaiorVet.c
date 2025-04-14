/*Crie um vetor para armazenar 10 números reais. Solicite que o usuário insira os valores
e, em seguida, determine e escreva o maior valor do vetor e a sua posição.*/

#include <stdio.h>


int main(){

    double v[10];

    printf("\nDigite o valor do vetor na posicao 0: ");
    scanf("%lf", &v[0]);


    double maior = v[0];
    

    for(int i = 1; i <= 10-1; i++){

        printf("\nDigite o valor do vetor na posicao %d: ",i);
        scanf("%lf", &v[i]);

            if(v[i] > maior){
            maior = v[i];
            }


    }

    printf("\nO maior valor eh: %.2lf", maior);

    


    
}