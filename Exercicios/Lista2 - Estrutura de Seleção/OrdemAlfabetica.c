/*Ler dois caracteres e escrevê-los em ordem alfabética.*/

#include <stdio.h>

int main(){
    printf("\nDígite a primeira letra: ");
    char a;
    scanf(" %c", &a);

    printf("\nDígite a segunda letra: ");
    char b;
    scanf(" %c", &b);


    if(a < b){
        printf("\nA ordem é: %c %c", a,b);
    } else {
        printf("\nA ordem é: %c %c", b, a);
    }
    

    return 0;
}