/*Leia um vetor de 8 números e conte quantos são pares e quantos são ímpares.
Exemplo de entrada: [10, 3, 7, 4, 2, 9, 6, 5]
Saída esperada:
Pares: 4  
Ímpares: 4  */

#include <stdio.h>

int main(){
    int num[8];
    int par = 0;
    int impar = 0;

    for(int i = 0; i < 8; i++){
        printf("\nDigite o %d numero: ", i);
        scanf("%d", &num[i]);

        if(num[i] % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }

    printf("\nPares: %d", par);
    printf("\nImpares: %d", impar);
}