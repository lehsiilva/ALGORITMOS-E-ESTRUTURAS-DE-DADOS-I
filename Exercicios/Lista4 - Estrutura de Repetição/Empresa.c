/*Uma empresa deseja reestruturar sua política de preços. Para atendê-la, construa um
programa que leia o preço de um conjunto de n mercadorias, sendo n também um valor
lido. O programa deverá calcular e escrever o maior preço dentre as mercadorias abaixo
de dois mil reais e o maior preço dentre aquelas a partir de dois mil reais. Rejeitar a
leitura de valores inválidos*/
#include <stdio.h>

int main() {
    
    int n = 1;

    do{

    printf("\nDigite a quantidade de mercadorias: ");
    scanf("%d", &n);
    
        if(n <= 0){
            printf("\nInvalido");
        }

    }while(n <= 0);

    int valor = 1;

    int maiorabaixo = 0;
    int maioracima = 0;

    int i = 1;

    while (i <= n) {

        do {
        printf("\nDigite o valor da %d mercadoria: ", i);
        scanf("%d", &valor);

            if(valor <= 0){
                printf("\nInvalido");

            }else {
                if(valor < 2000 && valor > maiorabaixo) {
                maiorabaixo = valor;

                } if(valor > 2000 && valor > maioracima) {
                maioracima = valor;
                }
            }

        }while(valor <= 0);

        i++;
    }

    printf("\nO produto com o maior preco ABAIXO de 2000R$ e %d",maiorabaixo);
    printf("\nO produto com o maior preco ACIMA de 2000R$ e %d",maioracima);

    return 0;
}


