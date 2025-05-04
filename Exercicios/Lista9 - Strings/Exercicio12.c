/*Faça um algoritmo para percorrer uma string e imprimir a quantidade de caracteres
minusculos*/

#include <stdio.h>
#include <string.h>

const int max = 100;

void ler(char str[max]){

    printf("\nDigite uma palavra/frase: ");
    scanf("%[^\n]", str);
    
}

void minusculo(char str[max]){

    int qnt = strlen(str);

    int minusculo = 0;
    

    printf("\nString original: ");
    printf("%s", str);

    printf("\nLetras Minusculas: ");
    for(int i = 0; i < qnt; i++){
        if(str[i] >= 97 && str[i] <= 122){ //minusculo de acordo com a tabela ASCII

            printf("%c", str[i]);

            minusculo++;

        } 
    }

    printf("\nQuantidade de letras minusculas: %d", minusculo);

}

int main(){
    char str[max];
    ler(str);
    minusculo(str);
}