/*Faça um programa que leia números inteiros e positivos do usuário, um número por vez,
e mostre o maior e o menor número. Não sabemos, a priori, quantos números o usuário
deseja digitar. O programa deve parar de ler números quando o usuário digitar algum
número negativo*/


#include <stdio.h>

int main(){
    int n,maior,menor;
    maior = 0;
    menor = 100;
        do{
            printf("\nDigite um numero: ");
            scanf("%d", &n);

                if(n > maior){
                    maior = n;
                }
                    if((n < menor) && (n > 0)){
                        menor = n;
                    }
        }while(n >= 0);

    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);

}