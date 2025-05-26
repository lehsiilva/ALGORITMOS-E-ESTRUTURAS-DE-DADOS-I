#include <stdio.h>

int main(){

    printf("\nDigite um valor: ");
    float x;
    scanf("%f", &x);

    if(x >= 0 && x <= 25){

        printf("\nIntervalo [0,25]\n");

    }else if(x > 25 && x <= 50){

        printf("\nIntervalo (25,50]\n");

    }else if(x > 50 && x <= 75){

        printf("\nIntervalo (50,75]\n");

    }else if(x > 75 && x <= 100){

        printf("\nIntervalo (75,100]\n");

    }else{
        
        printf("\nFora de intervalo\n");
    }

    return 0;
}