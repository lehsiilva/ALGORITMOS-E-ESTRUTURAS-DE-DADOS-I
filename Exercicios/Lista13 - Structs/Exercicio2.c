/*Crie uma struct para controlar ações de uma bolsa de valores com as seguintes informa-
ções:
• Nome da companhia
• Área de atuação da companhia
• Valor atual da ação (em reais)
• Valor anterior
• Variação da ação em porcentagem (double), ou seja, quanto a ação cresceu ou caiu
desde a abertura da bolsa no dia.*/

#include <stdio.h>

typedef struct{

    char nome[100];
    char area[100];
    double valor_atual;
    double valor_anterior;
    double variacao;

}Bolsa_valores;


int main(){
    Bolsa_valores bolsa_valores;

    printf("\nDigite o nome da companhia: ");
    getchar();
    fgets(bolsa_valores.nome, sizeof(bolsa_valores.nome), stdin);

    printf("\nDigite a area de atuacao: ");
    getchar();
    fgets(bolsa_valores.area, sizeof(bolsa_valores.area), stdin);

    printf("\nDigite o valor atual (em reais): ");
    scanf("%lf", &bolsa_valores.valor_atual);

    printf("\nDigite o valor anterior (em reais): ");
    scanf("%lf", &bolsa_valores.valor_anterior);

    float resul = ((bolsa_valores.valor_atual - bolsa_valores.valor_anterior) / bolsa_valores.valo) * 100;

    printf("\nVariacao de %.2lf%%", resul);

    return 0;
}