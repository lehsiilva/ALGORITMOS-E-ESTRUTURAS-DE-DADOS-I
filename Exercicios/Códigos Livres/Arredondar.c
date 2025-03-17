/*Faça uma Função que arredonde um valor n*/

#include <stdio.h>

float arredondar (float num){
    
    int resul;
    
    int partInt = (int)num;

    float decimal = num - partInt;

    if(decimal > 0.5){
        resul = partInt + 1.0;
    }else if (decimal < 0.5) {
        resul = num - decimal;
    }

    return resul;
}

int main(){
    printf("\nDigite um valor real: ");
    float num;
    scanf("%f", &num);

    int resul = arredondar(num);

    printf("\nResultado: %d", resul);
}