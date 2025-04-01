/*Escreva o numero invertido com recursividade. Exemplo: 1234 saida 4321*/

#include <stdio.h>

void invertido(int n){ 
    
    if(n > 0){
        int resto = n%10;
        printf("%d", resto);
        invertido(n/10);
      
        
    }


}

int main(){
    printf("\nDigite um numero: ");
    int n;
    scanf("%d", &n);

    invertido(n);

    return 0;
}