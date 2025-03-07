/*3. Faça um programa para calcular o N -ésimo termo da sequência de Fibonacci (1, 1, 2, 3, 5, 8, 13 21, ...).*/

#include <stdio.h>

int main(){

    
    printf("\nDigite o numero N: ");
    int n;
    scanf("%d", &n);

    int termo1 = 0;
    int termo2 = 1;

    printf("\nA sequencia é: %d %d ", termo1, termo2);

    for(int i = 1;i < n-2; i++){
        int troca;
        troca = termo1;
        termo1 = termo2;
        termo2 = troca + termo1;

        printf("%d ", termo2);


    }


}
