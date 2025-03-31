/*Escreva uma função que verifique se um número é perfeito (igual à soma de seus divisores próprios).*/
#include <stdio.h>

int perfeito(int n){

    int soma = 1;

    for(int i = 2; i < n; i ++){
        if(n% i == 0){
            soma+=i;
        }
    }

    return soma;
}

int main(){
    
    printf("\nDigite um numero: ");
    int n;
    scanf("%d", &n);
    
    int resul = perfeito(n);
    
    if(resul == n){
        printf("\nEh um numero perfeito");
    }else{
        printf("\nNao Eh um numero perfeito");
    }

    return 0;
}