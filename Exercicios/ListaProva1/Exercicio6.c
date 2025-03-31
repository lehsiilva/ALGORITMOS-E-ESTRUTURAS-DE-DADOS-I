/*Os números de Catalan são definidos pela seguinte recursão
T (1) = 1
T (2) = 2
T (n) = log√n + 2 ∗ T (n − 1) + T (n − 2)*/

#include <stdio.h>
#include <math.h>

double catalan(int n){
    double resul;

    if(n == 1){
        resul = 1;
    }else{
        if(n == 2){
            resul = 2;
        }else{
            resul = log(sqrt(n)) + 2 * catalan(n-1) + catalan(n-2);
        }
    }

    return resul;
}

int main(){
    printf("\nDigite um numero: ");
    int n;
    scanf("%d", &n);

    double resul = catalan(n);
    printf("\nOs numeros de Catalan sao: %.2lf", resul);

    return 0;
}