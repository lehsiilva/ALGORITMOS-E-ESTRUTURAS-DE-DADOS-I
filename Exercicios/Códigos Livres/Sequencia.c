/*Retorne o i-esimo termo da sequencia abaixo: 1/3*5, 2/3*5^3, 4/3*5^9, 8/3*5^27 */

#include <stdio.h>
#include <math.h>

double sequencia(int termo){

    double seq;

    for(int i = 0; i < termo; i++){

        seq = pow(2,i) / (3 * (pow(5,pow(3,i))));
    }

    return seq;
}

double seqAnterior(int termo){

    double anterior;
    
    for(int i =0; i < termo; i++){

        anterior += sequencia(i);

    }

    return anterior;
}


int main(){
    printf("\nDigite o termo da sequencia que voce deseja saber: ");
    int termo;
    scanf("%d", &termo);

    double resul = sequencia(termo);
    printf("\nResultado: %.2lf", resul);

    double resul = sequencia(termo);
    printf("\nResultado: %.2lf", resul);
}
