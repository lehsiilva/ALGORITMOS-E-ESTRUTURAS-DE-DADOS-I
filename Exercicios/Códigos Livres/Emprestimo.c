/*O banco do Zé abriu uma linha de crédito para os seus clientes.
O valor máximo da prestação não poderá ultrapassar 40% do salário bruto. Faça um algoritmo que permita entrar com o salário bruto e o valor da prestação e informar se o empréstimo será concedido.*/

#include <stdio.h>

int main(){

    printf("\nDigite o salário bruto: ");
    float salario;
    scanf("%f", &salario);

    printf("\nDigite o valor da prestação: ");
    float ValorPrestacao;
    scanf("%f", &ValorPrestacao);

    if(ValorPrestacao > ((salario*40)/100)){
        printf("\nO emprestimo não pode ser concedido");
    }else{
        printf("\nEmprestimo concedido");
    }

    
return 0;
}