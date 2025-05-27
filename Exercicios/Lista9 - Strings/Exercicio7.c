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

    int tam1 = strlen(str);
    int tam2 = strlen(str2);

    int cont = 0;
    int j;

    for(int i = 0; i <= tam1 - tam2; i++){
        for( j = 0; j < tam2; j++){
            if(str[i+j] != str2[j]){
                break;
            }
        }

        if(j == tam2){
            cont++;
        }
    }

    if(cont != 0){
        printf("\nA string 1 esta contida na 2");
        
    }else{
        printf("\nA string 1 nao esta contida na 2");
    }


    

}

int main(){
    char str[max];
    char str2[max];

    ler(str,str2);
    conferir(str,str2);
}