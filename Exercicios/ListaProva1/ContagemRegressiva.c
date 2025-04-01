/*Faça um programa recursivo que mostre uma contagem regressiva a partir de um número N até 0.*/


#include <stdio.h>

void contagem(int n){
 
    
    if(n >= 0){
        printf("%d ", n);
        contagem(n-1);
    }
        
    
}


int main(){
    
    printf("\nDigite um numero: ");
    int n;
    scanf("%d", &n);

    contagem(n);
    
    return 0;
}