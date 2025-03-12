/*Escreva um programa que calcule o nezemo termo da termo da PA 1,5,9,13 an = a1+(n-1)r */

#include <stdio.h>
#include <math.h>

int main(){
    printf("\nDigite o valor de n: ");

    int n;
    scanf("%d", &n);
    
    int pa = (1 + (n-1)*4); //R é o diferença entre os numeros

    printf("\nO numero %dº da PA é: %.2d: ", n, pa);

return 0;
}