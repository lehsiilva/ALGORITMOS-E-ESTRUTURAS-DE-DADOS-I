/* Escreva uma função recursiva que calcule o n-ésimo termo da sequência de Fibonacci.*/

#include <stdio.h>

int fibonacci(int n){
    int resul;
    
    if(n == 1){
        resul = 0;
    }else{
        if(n == 2){
            resul = 1;
        }else{
            resul = fibonacci(n-1) + fibonacci(n-2);
        }
    }

    return resul;
}


int main(){
    
    printf("\nDigite um numero: ");
    int n;
    scanf("%d", &n);
    
    int resul = fibonacci(n);
    printf("\nO %d termo de fibonacci eh: %d", n, resul);

    return 0;
}