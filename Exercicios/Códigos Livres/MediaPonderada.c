/*Leia 3 notas (P1, P2, P3) e seus pesos (2, 3, 5). Calcule a média ponderada e decida:
Aprovado (≥ 7), Reprovado (< 5), Recuperação (caso contrário).*/

#include <stdio.h>

int main(){

    printf("\nDigite a nota da 1 prova: ");
    float notas1;
    scanf("%f", &notas1);

    printf("\nDigite a nota da 2 prova: ");
    float notas2;
    scanf("%f", &notas2);

    printf("\nDigite a nota da 3 prova: ");
    float notas3;
    scanf("%f", &notas3);

    float somaPeso = 2+3+5;

    float mediapv1 = 2 * notas1;

    float mediapv2 = 3 * notas2;

    float mediapv3 = 5 * notas3;

    float soma = mediapv1 + mediapv2 + mediapv3;

    float media = soma/somaPeso;

    if(media >= 7){
        printf("\nAprovado");
    }else if(media < 5){
        printf("\nReprovado");
    }else{
        printf("\nRecuperacao");
    }
    
    return 0;
}