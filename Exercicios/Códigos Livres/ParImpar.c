#include <stdio.h>

int main(){
    printf("\nDigite um valor: ");
    int num;
    scanf("%d", &num);

    if(num%2 == 0){
        printf("\nO numero é par");
    }else {
        printf("\nO numero é Impar");
    }

    return 0;
}