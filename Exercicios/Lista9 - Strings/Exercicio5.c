/*Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada
dentro da mesma variável. Em seguida, imprima a string invertida.*/

#include <stdio.h>

const int max = 100;

int tamanho(char s[max]){
    
    int k = 0;

    while(s[k] != '\0'){ //Tamanho do vetor
    
        k++;
    }

    return k;
}

void invertido(char s[max]){
    
    int cont = tamanho(s);

    char troca;

    int a = 0;
    
    int tam = cont - 1;

    for(int i = tam; i > tam/2; i--){ //troca

        troca = s[a];
        s[a] = s[i];
        s[i]= troca;
        a++;
    
    }

    printf("\n%s", s);

}

int main(){
    printf("\nDigite uma palavra: ");
    char s[100];
    scanf("%100[^\n]", s);

    invertido(s);

}