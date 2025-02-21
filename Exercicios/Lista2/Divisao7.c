/*Ler um número inteiro, verificar e escrever se ele é divisível ou não por 7*/

#include <stdio.h>

int main(){
    printf("\nDígite um número: ");
    int num;
    scanf("%d",&num);

    if(num%7 == 0){
        printf("\nEsse número é divisivel por 7");
    } else {
        printf("\nEsse não é um número divisivel por 7");
    }

    return 0;
}