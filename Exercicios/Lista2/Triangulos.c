/*Ler as medidas dos lados de um triângulo. Verificar e escrever se ele é EQUILÁTERO,
ISÓSCELES OU ESCALENO.*/

#include <stdio.h>

int main(){
    printf("\nDígite o valor do primeiro lado: ");
    float a;
    scanf("%f",&a);

    printf("\nDígite o valor do segundo lado: ");
    float b;
    scanf("%f",&b);

    printf("\nDígite o valor do terceiro lado: ");
    float c;
    scanf("%f",&c);

    if(a == b && a == c && b==c){
        printf("\nTriangulo Equilatero");
    } else if (a != b && a != c && b != c){
        printf("\nTriangulo Escaleno");
    }else{
        printf("\nTriangulo Isoceles");
    }


    return 0;
}