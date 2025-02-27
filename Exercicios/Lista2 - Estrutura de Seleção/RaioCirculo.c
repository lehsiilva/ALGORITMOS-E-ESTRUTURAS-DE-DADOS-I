/*Ler um caractere e a medida do raio de um círculo.
• Se o caractere lido for T, calcular e escrever a área do triângulo inscrito.
• Se for Q, calcular e escrever a área do quadrado inscrito.
• Se for H, calcular e escrever a área do hexágono inscrito.
• Se for outro caractere que não estes, escrever uma mensagem apropriada.
1*/

#include <stdio.h>
#include <math.h>

int main(){
    printf("\nDígite uma letra: (permitidas: T,Q,H)");
    char letra;
    scanf(" %c", &letra);

    printf("\nDígite o raio do circulo: ");
    float raio;
    scanf("%f", &raio);

    if((letra == 't')||(letra == 'T')){ //triangulo dentro do circulo 3/2 * r^2
        float areaT = (3.0/2.0) * pow(raio,2);
        printf("\nA area do triangulo escrito é: %.2f",areaT);
    } else if ((letra == 'q')||(letra == 'Q')){//quadrado dentro do circulo 2*r^2
        float areaQ = 2*(pow(raio,2));
        printf("\nA area do quadrado escrito é: %.2f",areaQ);
    } else if((letra == 'h')||(letra == 'H')){//hexagono dentro do circulo 3 raiz de 3 * r^2
        float areaH = (3*sqrt(3)) * pow(raio,2);
        printf("\nA area do hexágono escrito é: %.2f",areaH);
    }else{
        printf("\nA area não pode ser calculada pois letra escolhida está incorreta!");
    }



    return 0;
}