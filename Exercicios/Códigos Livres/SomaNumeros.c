#include <stdio.h>

int main(){
    printf("Programa para somar 2 números inteiros");

    printf("\nDígite o primeiro número: ");
    int a;
    scanf("%d", &a);

    printf("\nDígite o segundo número: ");
    int b;
    scanf("%d", &b);

    int soma = a + b;
    
    printf("\nA soma dos números é igual a: %d ", soma);

return 0;
}