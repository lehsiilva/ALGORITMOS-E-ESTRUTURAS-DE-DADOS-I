/*Crie um vetor de 5 posições, peça ao usuário para digitar os valores e depois exiba-os na ordem inversa (do último ao primeiro).
Exemplo de entrada: 3, 7, 2, 9, 5
Saída esperada: 5 9 2 7 3*/

#include <stdio.h>

int main(){

    int valores[5];

    for(int i = 0; i < 5; i++){
        printf("\nDigite o %d valor: ", i);
        scanf("%d", &valores[i]);
    }

    for(int i = 4; i >= 0; i--){
        printf("%d ", valores[i]);
    }
}
