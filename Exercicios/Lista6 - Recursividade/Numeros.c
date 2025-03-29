/*Escreva um programa em C para imprimir na tela os 50 primeiros números naturais
usando recursão*/
#include <stdio.h>

void numeros(int num){

    if(num <= 50){
        printf("%d ", num); //empilha
        numeros(num+1);
        printf("%d ", num); //desempilha
    }
}


int main(){
    int num = 1;
    numeros(num);
}