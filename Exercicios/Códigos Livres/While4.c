/*Faça um programa que leia um número inteiro N indicando o valor de
uma prova P. Em seguida, leia a nota de 20 alunos (entre 0 e N) e
mostre na tela:
a. A média da turma
b. O número de alunos cuja nota foi menor que a média da
Universidade (suponha 60%)
c. A quantidade de alunos com conceito A (mais de 90%)*/

#include <stdio.h>

int main(){

    int n; // Nota máxima da prova
    printf("\nDigite o valor da prova: ");
    scanf("%d", &n);

    int totalAlunos = 20;
    float media = 0;
    int alunos = 0;
    int destaque =0;
    int i =1;

    while(i <= totalAlunos){
        printf("\nDigite a nota do %d aluno: ", i);
        float nota;
        scanf("%f", &nota);
        
        media = media + nota; //ou media += nota

        if(nota < ((n*60)/100)){
            alunos ++;
        }
        
        if(nota > ((n*90)/100)){
            destaque++;
        }

        i++;
    }

    printf("\nA media da turma é = %.2f", media/totalAlunos);
    printf("\nAlunos com media abaixo da Universidade = %d", alunos);
    printf("\nAlunos com conceito A = %d", destaque);

    return 0;
}