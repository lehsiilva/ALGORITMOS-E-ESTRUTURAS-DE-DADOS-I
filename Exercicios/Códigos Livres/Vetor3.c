/*Dado um vetor de 10 números, encontre e exiba o maior e o menor valor armazenado.
Exemplo de entrada: [5, 12, 3, 8, 20, 1, 9, 0, 15, 7]
Saída esperada:
Maior: 20  
Menor: 0  */

#include <stdio.h>

int main(){
    int num[10];
    int maior = 0;
    int menor = 100;

    for(int i = 0; i < 10; i++){
        printf("\nDigite o %d numero: ", i);
        scanf("%d", &num[i]);

        if(num[i] < menor){
            menor = num[i];
        }

        if(num[i] > maior){
            maior = num[i];
        }
            
    }

    printf("\nMaior: %d", maior);
    printf("\nMenor: %d", menor);



}