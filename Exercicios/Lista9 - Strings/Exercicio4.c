/*Faça um programa que leia uma string e a imprima de trás para frente*/

#include <stdio.h>

int main(){
    printf("\nDigite uma palavra: ");
    char s[100];
    scanf("%100[^\n]", s);

    char troca;

    int a = 0;

    int k = 0;

    while(s[k] != '\0'){ //Tamanho do vetor
    
        k++;
    }

    printf("%d",k);
    
    int tam = k - 1;

    for(int i = tam; i > tam/2; i--){ //troca

        troca = s[a];
        s[a] = s[i];
        s[i]= troca;
        a++;
    
    }

    printf("\n%s", s);



}