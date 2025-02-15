/*Fazer um programa que divide um intervalo [a,b] em n partes iguais e forneça os limites dos subintervalos*/

#include <stdio.h>

void dividirIntervalo(float a, float b, int n) {
    if (n <= 0) {
        printf("\nO numero de partes deve ser maior que zero.\n");
        return;
    }
    
    float tamanhoSubintervalo = (b - a) / n;
    
    printf("Subintervalos:\n");
    for (int i = 0; i < n; i++) {
        float inicio = a + i * tamanhoSubintervalo;
        float fim = inicio + tamanhoSubintervalo;
        printf("Subintervalo %d: [%.2f, %.2f]\n", i + 1, inicio, fim);
    }
}

int main() {
    printf("\nDígite o valor incial do intervalo: ");
    float a;
    scanf("%f", &a);
    printf("\nDígite o valor final do intervalo: ");
    float b;
    scanf("%f", &b);
    printf("\nDígite o valor n a ser execultado: ");
    int n;
    scanf("%d", &n);
    dividirIntervalo(a, b, n);
    return 0;
}
