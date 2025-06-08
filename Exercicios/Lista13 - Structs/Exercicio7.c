/*Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data
de Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até
30 caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na
estrutura e exibidos na tela.*/

#include <stdio.h>

typedef struct{

    int dia;
    int mes;
    int ano;

}Data;

typedef struct {

    char nome[100];
    int idade;
    char sexo;
    char cpf[100];
    int setor;
    char cargo[30];
    float salario;

    Data data;
    
}Funcionario;


void ler_funcionarios(Funcionario *funcionario){

    printf("\nDigite o nome do funcionario: ");
    fgets(funcionario->nome, sizeof(funcionario->nome), stdin);
    

    printf("\nDigite a idade: ");
    scanf("%d", &funcionario->idade);
    getchar(); 

    printf("\nDigite o sexo (F/M): ");
    scanf("%c",&funcionario->sexo);
    getchar(); 
    

    printf("\nDigite o CPF: ");
    fgets(funcionario->cpf, sizeof (funcionario->cpf), stdin);
    

    printf("\nDigite o setor(0 - 99): ");
    scanf("%d", &funcionario->setor);
    getchar(); 

    printf("\nDigite o cargo: ");
    fgets(funcionario->cargo, sizeof (funcionario->cargo), stdin);

    printf("\nDigite o salario: ");
    scanf("%f", &funcionario->salario);


}

void ler_data(Funcionario *funcionario){

    printf("\nDigite sua data de nascimento: ");

    printf("\nDigite o dia: ");
    scanf("%d", &funcionario->data.dia);

    printf("\nDigite o mes: ");
    scanf("%d", &funcionario->data.mes);

    printf("\nDigite o ano: ");
    scanf("%d", &funcionario->data.ano);

}

void exibir(Funcionario *funcionario){

    printf("\nDados do Funcionario:\n ");

    printf("\nNome do funcionario: %s", funcionario->nome);
    printf("\nIdade: %d",funcionario->idade);
    printf("\nSexo: %c",funcionario->sexo);
    printf("\nCPF: %s",funcionario->cpf);
    printf("\nData de Nascimento: %d/%d/%d",funcionario->data.dia,funcionario->data.mes,funcionario->data.ano);
    printf("\nSetor: %d",funcionario->setor);
    printf("\nCargo: %s",funcionario->cargo);
    printf("\nSalario: %f",funcionario->salario);

}

int main(){

    Funcionario funcionario;

    ler_funcionarios(&funcionario);
    ler_data(&funcionario);
    exibir(&funcionario);

    return 0;
}
