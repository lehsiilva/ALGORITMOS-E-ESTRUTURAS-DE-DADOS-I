/*Escreva um programa em C que leia uma string com até 50 caracteres. O
programa deve:
a) Verificar e mostrar quantas vezes a letra 'a' (ou 'A') aparece na string. 
b) Criar uma nova string que seja a versão reversa da string original e imprimi-la. A função strrev não pode ser usada. */

#include <stdio.h>

int tamanho(char str[]){

    int i = 0;

    while(str[i] != '\0'){
        i++;
    }

    return i;
}


void repetidos(char str[], int tam){

    int repetido = 0;

    for(int i = 0; i < tam; i++){

        if(str[i] == 'a' || str[i] == 'A'){
            
            repetido++;
        }
    }

    printf("\nA letra A aparece : %d vezes", repetido);
}


void reverso(char str[]){

    int tam = tamanho(str);

    int cont = tam - 1;

    char nova[tam];

    int j = 0;

    for(int i = cont; i >= 0; i--){

        nova[j] = str[i];

        j++;

    }

    nova[tam] = '\0';

    printf("\nString invertida: ");
    printf("%s", nova);

}

int main(){

    int tam = 50;

    printf("\nDigite uma frase: ");
    char str[tam];
    scanf("%[^\n]", &str);

    tamanho(str);
    repetidos(str,tam);
    reverso(str);
}