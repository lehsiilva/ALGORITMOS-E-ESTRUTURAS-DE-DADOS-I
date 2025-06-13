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

        Empregado() {
            nome = "Desconhecido";
            codigoSetor = 0;
            salarioBase = 0.0;
            imposto = 0.0;
        }
        Empregado(string nome, int codigoSetor, double salarioBase, double imposto){

            this->nome = nome;
            this->codigoSetor = codigoSetor;
            this->salarioBase = salarioBase;
            this->imposto = imposto;

        }

        void setNome(string nome){
            this->nome = nome;
        }

        string getNome(){
            return nome;
        }

        void setCodigoSetor(int codigoSetor){
            this->codigoSetor = codigoSetor;
        }

        int getCodigoSetor(){
            return codigoSetor;
        }

        void setSalariobase(double salarioBase){
            this->salarioBase = salarioBase;
        }

        double getSalariobase(){
            return salarioBase;
        }

        void setImposto(double imposto){
            this->imposto = imposto;
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
        Vendedor() : Empregado() {
        valorVendas = 0.0;
        comissao = 0.0;
        }

        Vendedor(string nome, int codigoSetor, double salarioBase, double imposto, double valorVendas, double comissao) : Empregado(nome, codigoSetor, salarioBase, imposto){
            this->valorVendas = valorVendas; 
            this->comissao = comissao;
        }

        void setValorVendas(double valorVendas){
            this->valorVendas = valorVendas;
        }

        void setComissao(double comissao){
            this->comissao = comissao;
        }

        
        float calcularSalario(){

            double valorComissao = (valorVendas * comissao) / 100.0;
            double salarioBruto = getSalariobase() + valorComissao;
            double valorImposto = (salarioBruto * getImposto()) / 100.0;
            
            return salarioBruto - valorImposto;
        }

    
};

void ler(Vendedor &vendedor){

    cout << "Digite o nome: ";
    string nome;
    getline(cin,nome);
    vendedor.setNome(nome);

    cout << "Digite o Codigo do setor: ";
    int codigo;
    cin >> codigo;
    vendedor.setCodigoSetor(codigo);

    cout << "Digite o Salario Base: ";
    double salario_base;
    cin >> salario_base;
    vendedor.setSalariobase(salario_base);

    cout << "Digite a porcentagem do imposto: ";
    int imposto;
    cin >> imposto;
    vendedor.setImposto(imposto);

    cout << "Digite o valor de vendas: ";
    int valor_vendas;
    cin >> valor_vendas;
    vendedor.setValorVendas(valor_vendas);

    cout << "Digite de quanto eh a comissao: ";
    int comissao;
    cin >> comissao;
    vendedor.setComissao(comissao);

}


void exibir(Vendedor &vendedor){

   float salario = vendedor.calcularSalario();

   cout << "Salario Calculado: " << salario << endl;
}


int main(){

    Vendedor vendedor1;
    Vendedor vendedor2;

    ler(vendedor1);
    ler(vendedor2);

    exibir(vendedor1);
    exibir(vendedor2);

    return 0;
}
