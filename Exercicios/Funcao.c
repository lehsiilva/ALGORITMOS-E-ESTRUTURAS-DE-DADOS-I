/*Implemente e teste as funções abaixo*/

#include <stdio.h>
#include <math.h>

double log(double num, doube base){
    
    int resp;
    resp = log(num)/log(base);

    return resp;

}


int arredonda(float valor){

    if((int) valor > 0){
        return (valor + 0.5);
    }



}

int main(){
    double num;
    double base;
    float valor;

    log(num,base); //Passagem por argumento
    arredonda(valor); //Passagem por argumento

    return 0;
}