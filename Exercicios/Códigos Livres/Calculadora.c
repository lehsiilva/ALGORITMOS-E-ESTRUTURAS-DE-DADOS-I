#include <stdio.h>

int main(){
    printf("\nDigite o primeiro valor: ");
    int num1;
    scanf("%d", &num1);

    printf("\nDigite o primeiro valor: ");
    int num2;
    scanf("%d", &num2);

    printf("\nDigite + ou - ou / ou * ");
    char operacao;
    scanf(" %c", &operacao);


    switch (operacao) {
    case '+':
        printf("\nSoma %d", num1+num2);
        break;
    case '-':
        printf("\nSubtração %d", num1-num2);
        break;
    case '/':
        printf("\nDivisão %d", num1/num2);
        break;
    
    default:
        printf("\nDivisão %d", num1*num2);
      
    }

    return 0;
}