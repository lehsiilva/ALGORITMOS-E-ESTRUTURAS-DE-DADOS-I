/*Faça um programa que leia um número decimal (0-9) e mostre seu equivalente em binário (apenas para números de 0 a 15).*/

#include <stdio.h>

void binario(int n){
    int resto;
    int num = 0;

    while(n > 0){
        resto = n%2;
        num = resto;
        n/=2;

        if(num == 0){
            printf("%d ",0);
            
        }
        if (num == 1){
            printf("%d ",1);
        }

    }

}


int main(){
    
    printf("\nDigite um numero: ");
    int n;
    scanf("%d", &n);

    binario(n);
   
    return 0;
}