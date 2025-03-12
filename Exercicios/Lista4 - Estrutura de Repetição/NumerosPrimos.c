/*Ler um número natural e verificar se é ele primo ou não. Um número natural é primo
se é ele divisível apenas por um e por si próprio. Lembre-se que o conjunto dos números
naturais é composto pelos valores inteiros e positivos. Rejeitar a leitura de número inválido
(não pertencente ao conjunto de números naturais). Ao finalizar, permitir verificar um
novo número, até que um número igual a zero (flag) seja fornecido. Informar ao usuário
ser o valor zero aquele que encerrará o programa.*/

#include <stdio.h>

int main() {
    int num = 1; 
    int primo;

    int i = 0;

    printf("Digite um número natural para verificar se é primo (0 para sair):\n");

    while (num != 0) { 
        primo = 1; // Marca como primo

        printf("\nDigite um número: ");
        scanf("%d", &num);

        if (num == 0) {
            printf("Programa encerrado.\n");

        }else if (num < 2) {
            printf("Número inválido! Digite um número natural maior que 1.\n");

        } else if(num == 2) {
            printf("2 é primo.\n");

        } else {

            for (i = 2; i < num; i++) {
                if (num % i == 0) {
                    primo = 0; // Marca como não primo
                }
            }

                if (primo == 1) {
                    printf("%d é primo.\n", num);
                } else {
                    printf("%d não é primo.\n", num);
                }
        }
    }

    return 0;
}
