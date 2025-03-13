/*Fazer uma função int par(int n) que recebe um número inteiro n e retorna o n-ésimo
termo da sequência 2, 4, 6, 8, 10, 12, . . */

#include <stdio.h>

int par(int n) {
   int resul = 2 * n; 
   return resul; 
}

int main() {
    printf("\nDigite qual numero da sequencia voce deseja verificar: ");
    int n;
    scanf("%d", &n);

    int resul = par(n);
    printf("\nO %dº termo da sequência é: %d\n", n, resul);

    return 0;
}
