/*Faca um programa que leia uma string e imprima uma mensagem dizendo se ela eh um
palindromo ou nao*/



#include <stdio.h>

const int max = 100;

int tamanho(char str[max]){

    int k = 0;

    while(str[k] != '\0'){
        k++;
    }

    return k;

}

void inverter(char str[max]){

    int qnt = tamanho(str);

    char v[qnt];

    int tam = qnt - 1;
    
    int j = 0;

    int palindromo = 0;

    for(int i = tam; i >= 0; i--){
        
        v[j] = str[i];
        
        j++;
    }

    

    for(int k = 0; k < qnt; k++){

        if(v[k] == str[k]){
            palindromo++;
        }
    }

    if(qnt == palindromo){
        printf("\nEh Palindromo");
    }else{
        printf("\nNao eh Palindromo");
    }

}



int main(){
    printf("\nDigite uma palavra/frase: ");
    char str[max];
    scanf("%[^\n]", str);

    inverter(str);
}