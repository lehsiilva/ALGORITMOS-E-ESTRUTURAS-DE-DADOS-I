/*Implemente uma função recursiva que calcule a potência de um número.*/

#include <stdio.h>

int potencia(int a, int b){
    int resul;
    
    if(b == 1){
        resul = a;
    }else{
        resul = a * potencia(a, b-1);
    }
        
    return resul;
}


int main(){
    
    printf("\nDigite um numero: ");
    int a;
    scanf("%d", &a);
    
    printf("\nDigite a potencia: ");
    int b;
    scanf("%d", &b);
    
    int resul = potencia(a,b);
    printf("\nResultado: %d", resul);

    return 0;
}