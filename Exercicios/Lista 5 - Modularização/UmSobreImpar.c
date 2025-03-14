/*Fazer uma função double umSobreImpar(int n) que recebe um número inteiro n e retorna
o n-ésimo termo da sequência 1/3, 1/5, 1/7, 1/9, 1/11, 1/13.....*/


#include <stdio.h>


double umSobreImpar(int n) {

    int resul = 1.0 / (2 * n + 1); 
    return resul;
}

int main() {
    printf("\nDigite qual numero da sequencia voce deseja verificar: ");
    int n;
    scanf("%d", &n);

    double resultado = umSobreImpar(n);
    printf("\nO %dº termo da sequência é: %.2lf\n", n, resultado);

    return 0;
}