/*Construa um programa que leia duas strings do teclado. Imprima uma mensagem infor-
mando se a segunda string lida está contida dentro da primeira.*/

#include <stdio.h>
#include <string.h>

const int max = 100;

void ler(char str[max], char str2[max]){
    
    printf("\nDigite um palavra/frase na string 1: ");
    scanf("%[^\n]%*c", str);



    printf("\nDigite um palavra/frase na string 2: ");
    scanf("%[^\n]%*c", str2);

}

void conferir(char str[max],char str2[max]){


    if(strstr(str,str2) != NULL){
        printf("\nPalavra contida");
    }else{
        printf("\nNao ha");
    }


    

}

int main(){
    char str[max];
    char str2[max];

    ler(str,str2);
    conferir(str,str2);
}