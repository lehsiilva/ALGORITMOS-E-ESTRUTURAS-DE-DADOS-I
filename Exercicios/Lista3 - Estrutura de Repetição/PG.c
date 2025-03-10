/*Faça um programa que calcule o n-ésimo elemento de uma progressão geométrica (PG) e
o imprima na tela. O usuário deve entrar com os valores da razão e do 1o termo da PG.
Lembre-se que uma PG é dada pela seguinte fórmula: an = a1 ∗ q^n−1, onde an é o n-ésimo
elemento da PG, a1 é o 1o elemento da PG e q é a razão.
• Mostre o algoritmo pedido.
• Mostre o algoritmo pedido sem utilizar a operação de exponenciação.
• Mostre o algoritmo pedido sem utilizar as operações de exponenciação e multiplicação.*/

#include <stdio.h>
#include <math.h>

int main(){

    printf("\nQuantos termos você deseja encontrar? ");
    int termos;
    scanf("%d", &termos);

    printf("\nDigite o 1° termo da PG: ");
    int termo1;
    scanf("%d", &termo1);

    printf("\nDigite a razão da PG: ");
    int razao;
    scanf("%d", &razao);

    int i = termo1;

        while(i <= termos){
        
        int sub = i - 1;

        int resul = termo1 * pow(razao,sub);

        printf("%d ", resul);

        i++;
        }




}