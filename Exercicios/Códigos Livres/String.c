/*Um programa em C que confere se uma pessoa digitou a senha corretamente*/

//strcmp

#include <stdio.h>
#include <string.h>

#define strPadrao "12345"

int main(){
    
    printf("\nDigite sua senha: ");
    char str[5];
    scanf("%[^\n]", str);
    

    if(strcmp(str, strPadrao) == 0){
        printf("\nSenha Correta");
    }else{
        printf("\nSenha Incorreta");
    }
}