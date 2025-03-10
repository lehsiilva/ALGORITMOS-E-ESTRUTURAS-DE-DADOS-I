/*Leia 10 valores e encontre:
*o maior deles
*o menor
*a media*/

#include <stdio.h>

int main(){

    int num = 10;

    printf("\nDigite o 1 numero: ");
    int armazena;
    scanf("%d", &armazena);

    float medianum = armazena;

    int maior = armazena;
    int menor = armazena;
    

    for(int i = 2; i <= num; i++){
        printf("\nDigite o %d numero: ", i);
        int num1;
        scanf("%d", &num1);

        if (num1 > maior ){
            maior = num1;
        } 
        if(num1 < menor){
            menor = num1;
        }

        medianum+=num1;

    }

    float media = medianum/10;

    printf("\nMaior %d ", maior);
    printf("\nMenor %d ", menor);
    printf("\nMedia %.2f ", media);



   



}