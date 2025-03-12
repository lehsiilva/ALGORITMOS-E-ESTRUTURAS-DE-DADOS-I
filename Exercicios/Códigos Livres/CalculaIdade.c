#include <stdio.h>

int main(){
	int idade, anoNascimento;

	printf("Digite o ano de nascimento:" );
	scanf("%d",&anoNascimento);

	idade= 2025 -anoNascimento;
	
	printf("Esse ano você vai fazer %d ano!", idade);
	
	
	
	return 0;
}