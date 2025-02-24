/*Verifique a validade de uma senha. A senha é 1234. Se ok imprima "Acesso liberado" se nao "erro"*/

#include <stdio.h>


int main(){
    printf("\nDígite sua senha: ");
    float senha;
    scanf("%f", &senha);

    if(senha == 1234){
        printf("\nAcesso liberado");
    }else {
        printf("\nErro");
    }


}