/*Calcule a soma da série:
1 - 2 + 3 - 4 + 5 - ... ± n  */
#include <stdio.h>

int main(){
    printf("\nDigite um numero: ");
    int n;
    scanf("%d", &n);
    int i = 1;
    int soma = 0;

        while(i <= n){
            if(i%2 == 0){
                soma-=i;
            }else{
                soma+=i;
            }

            i++;
        }

    printf("\nResultado: %d", soma);

}