/*Implemente a classe Empregado com os seguintes atributos: String nome, int codigoSetor,double salarioBase(vencimentobase) e double imposto(porcentagem do salário retida para impostos). Implemente os construtores e os métodos para manipular os atributos (get e set).
* Implemente a classe Vendedor como subclasse da classe Empregado. Um determinado vendedor tem, além dos atributos da classe Empregado, os seguintes atributos adicionais:
• double valorVendas (correspondente ao valor monetário dos artigos vendidos) 
• double comissao (porcentagem do valorVendas que será adicionada ao vencimento base do vendedor)
* Na classe Vendedor implemente um método calcularSalario que retorne o salário líquido do vendedor, incluindo a comissão no cálculo do salário e deduzindo os impostos.
* Escreva um programa de teste adequado para a classe Vendedor. O programa deve criar duas instâncias de Vendedor, definir os atributos necessários para cada uma delas, e exibir os salários calculados para as duas instâncias de vendedor*/

#include <iostream>

using namespace std;

class Empregado{
    private:
    string nome;
    int codigoSetor;
    double salarioBase;
    double imposto;

    public:
    Empregado(string nome, int codigoSetor, double salarioBase, double imposto){
        this->nome = nome;
        this->codigoSetor = codigoSetor;
        this->salarioBase = salarioBase;
        this->imposto = imposto;
    }

    void setNome(string nome){
        this->nome = nome;
    }

    void setCodigoSetor(int codigoSetor){
        this->codigoSetor = codigoSetor;
    }

    void setSalarioBase(double salarioBase){
        this->salarioBase = salarioBase;
    }

    void setImposto(double imposto){
        this->imposto = imposto;
    }

    string getNome(){
        return nome;
    }

    int getCodigoSetor(){
        return codigoSetor;
    }

    double getSalarioBase(){
        return salarioBase;
    }

    double getImposto(){
        return imposto;
    }
        
};

class Vendedor : public Empregado{
    private:
    double valorVendas;
    double comissao;

    public:
    Vendedor(string nome, int codigoSetor, double salarioBase, double imposto, double valorVendas, double comissao) : Empregado(nome, codigoSetor,salarioBase, imposto){

        this->valorVendas = valorVendas;
        this->comissao = comissao;
    }

    double getValorVenda(){
        return valorVendas;
    }

    double getComissao(){
        return comissao;
    }

    double calcularSalario(){

        double salarioLiquido;

        salarioLiquido = (getSalarioBase() + comissao * valorVendas) * (1 - getImposto());
;

        return salarioLiquido;
    }

};

int main(){
    Vendedor vendedor1("Mariano", 1,  1000.00, 0.14, 80000.00, 0.05);
    Vendedor vendedor2("Joana", 2 , 1500.00, 0.12, 120000.00, 0.06);

    cout << "Vendedor 1 : " << vendedor1.getNome() << endl;
    cout << "Salario Liquido: R$" << vendedor1.calcularSalario() << endl;
    cout << "Vendedor 2 : " << vendedor2.getNome() << endl;
    cout << "Salario Liquido: R$" << vendedor2.calcularSalario() << endl;

    return 0;
}