/*Fazer um método recursivo que multiplique dois números naturais através de somas su-
cessivas*/

#include <stdio.h>

int somaSucessiva(int a, int b){

    int resul;

    if(b == 0){

        resul = 0;

    }else{

        resul = a + somaSucessiva(a, b - 1);
    }

    return resul;

}

int main(){
    printf("\nDigite o valor de A: ");
    int a;
    scanf("%d", &a);

    printf("\nDigite o valor de B: ");
    int b;
    scanf("%d", &b);

    int resul = somaSucessiva(a,b);
    printf("\nA multiplicação de %d e %d é: %d", a, b, resul);

    return 0;
}
