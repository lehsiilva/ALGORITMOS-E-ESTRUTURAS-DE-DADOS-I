/*Leia a idade de uma pessoa e classifique em:
Criança (0-12), Adolescente (13-17), Adulto (18-59), Idoso (60+).*/

#include <stdio.h>

int main(){
    printf("\nDigite a idade: ");
    int idade;
    scanf("%d", &idade);

    if((idade > 0 && idade <= 12)){
        printf("\nCrianca");
    }else if (( idade >= 13 && idade <= 17)){
        printf("\nAdolescente");
    }else if ( (idade >= 18 && idade <= 59)){
        printf("\nAdulto");
    }else{
        printf("\nIdoso");
    }

    return 0;

}