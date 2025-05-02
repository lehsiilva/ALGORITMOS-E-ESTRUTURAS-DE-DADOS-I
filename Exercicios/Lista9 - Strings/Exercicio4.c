/*Faça um programa que leia uma string e a imprima de trás para frente.*/

#include <stdio.h>

const int max = 100;

int cont(char str[max]){

    int k = 0;

    while(str[k] != '\0'){
        
        k++;
    }

    return k;

}

void lerInvertido(char str[max]){

    int qnt = cont(str); 

    for(int i = qnt; i >= 0; i--){
        printf("%c",str[i]);
    }

}

int main(){
    printf("\nDigite uma frase/palavra: ");
    char str[max];
    scanf("%100[^\n]", str);

    lerInvertido(str);
}

