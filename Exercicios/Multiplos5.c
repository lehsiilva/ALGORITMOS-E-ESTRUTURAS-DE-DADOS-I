/*imprimir os 10 primeiros multiplos de 5*/

#include <stdio.h>

int main(){

    int n = 10;

    printf("\nMultiplos de 5 sao: ");

    for(int i = 1; i <= n; i++){
        printf("%d ", 5*i);
    }

    return 0;
}