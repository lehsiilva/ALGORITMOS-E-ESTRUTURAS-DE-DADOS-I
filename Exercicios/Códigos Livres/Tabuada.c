/*Leia um número n e um limite k. Imprima a tabuada de n apenas até onde n * i ≤ k.*/

#include <stdio.h>

int main(){
    printf("\nDigite um numero: ");
    int num;
    scanf("%d", &num);

    printf("Digite um limite: ");
    int k;
    scanf("%d",&k);

    int multiplica = 0;

    for(int i = 1; multiplica < k; i++){

        multiplica = num * i;

        if(multiplica < k){

        printf("\n%d * %d = %d ", num, i, multiplica);
        
        }

    }

    return 0;
}