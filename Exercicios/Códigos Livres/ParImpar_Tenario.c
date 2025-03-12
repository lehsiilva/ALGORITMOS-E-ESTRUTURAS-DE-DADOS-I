#include <stdio.h>

int main(){
    printf("\nDigite um valor: ");
    int num;
    scanf("%d", &num);

    (num %2 == 0)? printf("\nE Par") : printf("\nE Impar");
    

    return 0;
}