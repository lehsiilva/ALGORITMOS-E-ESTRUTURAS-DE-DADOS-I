/*Faça um algoritmo para percorrer uma string e imprimir apenas as vogais.*/

#include <stdio.h>
#include <string.h>

const int max = 100;

void ler(char str[max]){

    printf("\nDigite uma palavra/frase: ");
    scanf("%[^\n]", str);
    
}

void vogais(char str[max]){

    int qnt = strlen(str);
    

    printf("\nString original: ");
    printf("%s", str);

    printf("\nVogais: ");
    for(int i = 0; i < qnt; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i'|| str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){

            printf("%c ", str[i]);

        }
    }

}

int main(){
    char str[max];
    ler(str);
    vogais(str);
}