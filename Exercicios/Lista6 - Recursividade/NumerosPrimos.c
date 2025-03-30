/*Fazer um método recursivo que determine se um número é ou não primo.*/

#include <stdio.h>

void primos(int num, int i) {  
    if (num < 2) {
        printf("%d Nao Eh Primo", num);
    }

    if (i == num) { 
        printf("%d Eh Primo", num);
        
    }

    if (num % i == 0) {  
        printf("%d Nao Eh Primo", num);
        
    }

    primos(num, i + 1);  
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    primos(num, 2);  

    return 0;
}
