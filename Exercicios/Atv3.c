/*Faça um programa que lê 3 notas de prova, sendo a nota da P3 com peso 2, e 2 listas de exercicios e mostre a media obtida pelo estudante*/

#include <stdio.h>
#include <math.h>

int main(){
printf("\nDigite a nota da prova 1 ");
float prova1;
scanf("%f", &prova1);
printf("\nDigite a nota da prova 2: ");
float prova2;
scanf("%f", &prova2);
printf("\nDigite a nota da prova 3: ");
float prova3;
scanf("%f", &prova3);
printf("\nDigite a nota do trabalho 1: ");
float trab1;
scanf("%f", &trab1);
printf("\nDigite a nota do trabalho 2: ");
float trab2;
scanf("%f", &trab2);
float media = (prova1 + prova2 + (2*prova3) + trab1 + trab2)/6;
printf("\nA nota do aluno é igual a: %.2f", media);


return 0;
}