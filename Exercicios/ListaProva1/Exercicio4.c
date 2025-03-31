/* Escreva uma função que receba um número inteiro positivo e retorne a quantidade de
algarismos pares que o constitui. Exemplo: 19282 possui dois algarismo pares 2 e 2.
*/
#include <stdio.h>

int par(int num){
	int soma,resto,par;
	par = 0;
		while(num>0){
			resto = num%10;
			soma = num;
			num/=10;
				if(resto%2==0){
					par++;
				}

		}
	return par;
}

int main(){
	printf("/nDigite um numero");
	int num;
	scanf("%d",&num);

	int resul = par(num);
	printf("\nO numero %d possui %d numeros par",num,resul);




}