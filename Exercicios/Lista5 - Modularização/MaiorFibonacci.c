/*Fazer uma função que recebe um número inteiro n e retorna o maior elemento da sequência
de Fibonacci que seja menor que n.*/

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

int MaiorFibonacci(int n){
    
    int resul;
    int fib = fibonacci(n);

    for(int i = 1; i <= n; i++){
        
        int menor = fib;
        
        fibonacci(i);

        if(fibonacci(i) < menor){

            menor = fibonacci(i);

            resul = menor;
        }

    }

    return resul;

}

int main(){

    printf("\nDigite qual termo voce deseja descobrir: ");
    int n;
    scanf("%d", &n);

    int resulf = fibonacci(n);
    printf("O %d termo de Fibonacci e: %d\n", n, resulf);

    int resul = MaiorFibonacci(n);
    printf("O maior elemento da sequencia de fibonacci menor que %d e: %d", resulf, resul);
}
