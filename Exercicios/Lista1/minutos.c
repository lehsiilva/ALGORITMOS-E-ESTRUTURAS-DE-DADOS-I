/*Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram
desde o início do dia.*/

#include <stdio.h>

int main(){

    printf("\nDígite o horario: (Separe os minutos dando um espaço)");
    int hora, minutos;
    scanf("%d %d", &hora, &minutos);

    int minutosPassados = (hora * 60) + minutos;
    

    printf("Se passaram %.d minutos desde o inicio do dia: \n", minutosPassados);

return 0;
}