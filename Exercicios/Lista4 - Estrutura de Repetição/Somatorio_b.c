/*Somatório é um operador matemático que nos permite representar facilmente somas de
um grande número de parcelas. É representado pela letra maiúscula do alfabeto grego P
. Por exemplo, podemos representar a soma dos números inteiros de 1 até 5 como:
i = 1 + 2 + 3 + 4 + 5 = 15
Crie um programa que calcula o valor da expressão a seguir. Considere que os valores de
n e m serão fornecidos pelo usuário*/

#include <stdio.h>

int main() {

    printf("\nDigite o valor de N: ");
    int n;
    scanf("%d", &n);

    printf("\nDigite o valor de M: ");
    int m;
    scanf("%d", &m);

    int somaI = 0;
    int somaJ;

    for(int i = 1; i <= n; i++){
        
        somaJ = 0;
        for(int j = 1; j <= m; j++){
            somaJ+=j;
        } 
        somaI+=i;
    }  

    printf("\nResultado: %d", (somaI + somaJ));


}