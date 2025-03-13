/*Faça um programa para ler uma mensagem do teclado e criptografá-la utilizando o ci-
framento de César. Nesse caso, cada caractere da mensagem deve ser substituído pelo
caractere cujo código ASCII é igual ao seu mais uma constante K (lida do teclado).*/

#include <stdio.h>

int main() {

    printf("\nDigite a constante: ");
    int deslocamento;
    scanf("%d", &deslocamento);
    getchar();

    printf("\nDigite a palavra: ");
    char c;

    while ((c = getchar()) != '\n') { // Lê caractere por caractere até ENTER
        c += deslocamento; // Aplica o deslocamento
        printf("%c", c); // Imprime o caractere deslocado
    }

    return 0;
}
