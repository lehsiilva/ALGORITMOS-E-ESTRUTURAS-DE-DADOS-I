/*Faça um programa para ler do teclado um número inteiro com três dígitos 
(no formato CDU - centena, dezena, unidade) e mostrar o número invertido (no formato UDC)  */

#include <stdio.h>

int main(){
    printf("\nDígite um número inteiro de três digitos: ");
    int num;
    scanf("%d", &num);
    int centena = (num/100);
    int dezena = (num%100)/10;
    int unidade = num%10;
    printf("\nO número invertido é : %d%d%d", unidade, dezena, centena);

return 0;
}