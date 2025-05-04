/*Escreva um programa que leia duas strings e as imprima em ordem alfabética*/

#include <stdio.h>
#include <string.h>

const int max = 100;

void ler(char str[max], char str2[max]){
    
    printf("\nDigite um palavra/frase na string 1: ");
    scanf("%[^\n]%*c", str);



    printf("\nDigite um palavra/frase na string 2: ");
    scanf("%[^\n]%*c", str2);

}


void alfabetico(char str[max], char str2[max]){

    int tam1 = strlen(str);
    int tam2 = strlen(str2);

    printf("\nString 1 em ordem alfabetica: ");
    for(int i = 0; i < tam1 - 1; i++){

        for(int j = 0; j < tam1 - 1 - i; j++){
        
            if(str[j] > str[j+1]){
            int troca1 = str[j];
            str[j] = str[j+1];
            str[j+1] = troca1;
            }

        }
    }

    printf("%s", str);

    printf("\nString 2 em ordem alfabetica: ");
    for(int k = 0; k < tam2 - 1; k++){

        for(int n = 0; n < tam2 - 1 - k; n++){
        
            if(str2[n] > str2[n+1]){
            int troca2 = str2[n];
            str2[n] = str2[n+1];
            str2[n+1] = troca2;
            }

        }
    }

    printf("%s", str2);

}

int main(){
    char str[max];
    char str2[max];

    ler(str,str2);
    alfabetico(str,str2);
}