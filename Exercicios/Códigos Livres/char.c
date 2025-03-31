/*Conte quantas letras 'a' existem em um nome*/

#include <stdio.h>

int main(){
    char nome;

    printf("\nDigite quantas letras tem o seu nome: ");
    int qntd;
    scanf("%d", &qntd);

    int letras = 0;

    for(int i = 1; i <= qntd; i ++){
        printf("\nSoletre o seu nome, letra por letra");
        printf("\nDigite a %d letra: ", i);
        scanf(" %c", &nome);

        if(nome == 'a'){
            letras++;
        }

    }
    printf("\nO nome possui %d letras A", letras);

    return 0;
}