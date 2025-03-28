/*Faça uma função recursivo que receba dois números inteiros e retorne a
multiplicação do primeiro pelo segundo fazendo somas
5 x 13 = 5 + 5 + ... + 5*/
#include <stdio.h>

int rec(int a, int b){
    int resul;
    if(b == 0){
        resul = 0;
    }else{
        resul = a + rec(a,b-1);
    }
    return resul;

}

int main(){
    int a = 5;
    int b =13;
    int resul = rec(a,b);
    printf("%d", resul);
}

