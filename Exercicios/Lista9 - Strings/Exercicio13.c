/*Faça um algoritmo para percorrer uma string e imprimir a quantidade de caracteres
MAIUSCULO*/

#include <stdio.h>
#include <string.h>

const int max = 100;

void ler(char str[max]){

    printf("\nDigite uma palavra/frase: ");
    scanf("%[^\n]", str);
    
}

void maiusculo(char str[max]){

    int qnt = strlen(str);

    int maiusculo = 0;
    

    printf("\nString original: ");
    printf("%s", str);

    printf("\nLetras Minusculas: ");
    for(int i = 0; i < qnt; i++){
        if(str[i] >= 65 && str[i] <= 90){ //MAIUSCULO de acordo com a tabela ASCII

            printf("%c", str[i]);

            maiusculo++;

        } 
    }

    printf("\nQuantidade de letras minusculas: %d", maiusculo);

}

int main(){
    char str[max];
    ler(str);
    maiusculo(str);
}