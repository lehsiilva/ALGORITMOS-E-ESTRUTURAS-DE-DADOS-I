/*Sabendo que 100 kilowatt de energia custa um setímo do salario mínimo, faça um programa para ler o valor do salário mínimo e a quantidade de kilowatt gasta em uma residência, calcular e mostrar: 
1- o valor em reais de cada kilowatt
2- o valor em reais a ser pago
3- e o novo valor a ser pago por essa resid~encia com um desconto de 10%*/

#include <stdio.h>

int main(){
    printf("\nDígite o valor do sálario: ");
    float salarioMin;
    scanf("%f", &salarioMin);

    printf("\nDígite a quantidade de Kilowatts gastos: ");
    int kilowatts;
    scanf("%d", &kilowatts);

    float valor_killowatts = salarioMin/700;
    float valor_pago = valor_killowatts*kilowatts;
    float desconto = (valor_pago*10)/100;
    float descontoAplicado = valor_pago - desconto;
    
    printf("\nO valor em reais de cada killowatt será de: %.2f", valor_killowatts); 
    printf("\nO valor em reais a ser pago sera de: %.2f ", valor_pago);
    printf("\nO valor com desconto de 10%% será de: %.2f", descontoAplicado);

return 0;  
}