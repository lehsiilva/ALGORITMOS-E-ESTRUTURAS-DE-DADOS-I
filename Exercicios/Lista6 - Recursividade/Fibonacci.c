/*Escreva um programa em C para imprimir a série Fibonacci usando recursão.*/


#include <stdio.h>

int fibonacci(int termo){
    
    int resul; 
    if(termo == 1){
        resul = 0;
    }else{
        if(termo == 2){
            resul = 1;
        }else{
            resul = fibonacci(termo-1) + fibonacci(termo-2);
        }
    }
    return resul;
}

int main(){
    printf("\nDigite o termo que voce deseja descobrir: ");
    int termo;
    scanf("%d", &termo);

    int resul = fibonacci(termo);
    printf("O termo %d da sequencia Fibonacci e: %d", termo, resul);

}