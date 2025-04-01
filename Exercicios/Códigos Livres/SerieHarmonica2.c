/*Faça um programa que leia um número inteiro n e calcule a série harmônica alternada até o termo n: 1 -1/2 + 1/3 -1/4.....1/n*/

#include <stdio.h>

double harmonico(int n){
    double soma = 0.00;
    
    for(int i = 1; i <= n; i ++){
        if(i%2 == 0){
            soma-=(1.00/i);
        }else{
            soma+=(1.00/i);
        }
    }

    return soma;
}


int main(){
    printf("\nDigite um numero: ");
    int n;
    scanf("%d", &n);

    double resul = harmonico(n);
    printf("O %d da serie harmonica eh : %.2lf", n, resul);

    return 0;
}