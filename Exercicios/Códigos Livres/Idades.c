/*Faça um programa que leia 10 idades e mostre a % maior que 18 anos*/

#include <stdio.h>

int main(){

    int maiorIdade = 0;

    for(int i = 1; i <=10; i++){
        
        printf("\nDigite a idade da %d pessoa: ", i);
        int idade;
        scanf("%d", &idade);

        if(idade > 18){
            maiorIdade++;
        }
    }

    printf("\nO porcentual de pessoas maiores de idade é de %.2f %%", (float)(maiorIdade*10)/100);
}