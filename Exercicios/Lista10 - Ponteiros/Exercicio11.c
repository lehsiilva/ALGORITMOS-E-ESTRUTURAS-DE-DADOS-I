/*Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável,
o segundo menor valor na variável do meio, e o maior valor na última variável. A função
deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes.
Exiba os valores ordenados na tela*/
#include <stdio.h>

int verificar(int *a, int *b, int *c){

    int temp;

    if (*a > *b) { 

        temp = *a; 
        *a = *b; 
        *b = temp; 
    }

    if (*a > *c) { 

        temp = *a; 
        *a = *c; 
        *c = temp; 
    }

    if (*b > *c) { 

        temp = *b; 
        *b = *c; 
        *c = temp; 
    }


    if((*a == *b ) && (*b == *c)){
        
        return 1;

    }else{

        return 0;
    }
}

int main(){
    
    printf("\nDigite o valor de A: ");
    int a; 
    scanf("%d", &a);

    printf("\nDigite o valor de B: ");
    int b; 
    scanf("%d", &b);

    printf("\nDigite o valor de C: ");
    int c; 
    scanf("%d", &c);

    int resul = verificar(&a,&b,&c);

    if(resul == 1){
        printf("Valores Iguais");

    } else {

        printf("\nMaior: %d", c);
        printf("\nMaior: %d", b);
        printf("\nMaior: %d", a);
    }





}