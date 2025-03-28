/*Fazer uma função que recebe um número inteiro n e retorna o n-ésimo termo da sequência
de Fibonacci*/

#include <stdio.h>

int fibonacci(int n){
    
    int termo1 = 0;
    int termo2 = 1;
    
    for(int i = 1; i <= n-1; i ++){
        
        int troca = termo1;
        termo1 = termo2;
        termo2 = troca + termo1;
    }

    return termo2;

}

int main(){

    printf("\nDigite qual termo voce deseja descobrir: ");
    int n;
    scanf("%d", &n);

    int resul = fibonacci(n);
    printf("O %d termo de Fibonacci e: %d", n, resul);
}
