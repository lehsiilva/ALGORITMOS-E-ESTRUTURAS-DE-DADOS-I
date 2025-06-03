/*Crie um programa que permita armazenar o nome, a altura e da data de nascimento
de até 10 pessoas. Cada pessoa deve ser representada por uma struct dentro de um
vetor. A data de nascimento também deve ser uma struct. O nome e a altura de cada
pessoa devem ser informados pelo teclado. A geração da data de nascimento deve ser
feita aleatoriamente através de uma função.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


typedef struct{

    char nome[100];
    float altura;

}Pessoa;

typedef struct{

    int dia;
    int mes;
    int ano;

}Data;

int main(){

    Pessoa pessoa[10];
    Data data[10];

    srand(time(NULL));

    for(int i = 0; i < 10; i++){

        printf("\nDigite o nome da pessoa %d: ", i+1);
        getchar();
        scanf("%[^\n]", pessoa[i].nome);
        

        printf("\nDigite a altura da pessoa %d: ", i+1);
        scanf("%f", &pessoa[i].altura);


        data[i].dia = 1 + rand() % 28;
        data[i].mes = 1 + rand() % 12;
        data[i].ano = 1950 + rand() % 51;
    }

    for(int j = 0; j < 10; j++){

        printf("\nNome: %s", pessoa[j].nome);
        printf("\nAltura: %.2f", pessoa[j].altura);
        printf("\nData de Nascimento: %d/%d/%d", data[j].dia, data[j].mes, data[j].ano);
        printf("\n");
        
    }

    return 0;

}   