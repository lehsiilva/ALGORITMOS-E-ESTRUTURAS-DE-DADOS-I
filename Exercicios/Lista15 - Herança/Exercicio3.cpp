/*a) Implemente a classe Vendedor como subclasse da classe Empregado. Um determinado
vendedor tem, além dos atributos da classe Empregado, os seguintes atributos adicionais:
• double valorVendas (correspondente ao valor monetário dos artigos vendidos)
• double comissao (porcentagem do valorVendas que será adicionada ao salário base
do vendedor)
Implemente os construtores e os métodos para manipular os atributos (get e set) da
classe Vendedor.
b) Na classe Vendedor, implemente um método calcularSalario que retorne o salário
líquido do vendedor, incluindo a comissão no cálculo do salário e deduzindo os impostos.
O cálculo do salário líquido pode ser representado pela fórmula:
salarioLiquido = (salarioBase + (comissao × valorVendas)) × (1 − imposto)*/

#include <iostream>

using namespace std;

class Empregado {
    private :
        string nome;
        double salarioBase ;
        double imposto ;
    // C o n s t r u t o r e s padrao e com parametros
    public :
        Empregado(){
            nome = "Desconhecido";
            salarioBase = 0.0;
            imposto = 0.0;
        }

        Empregado(string nome, double salarioBase, double imposto) {
            this->nome = nome ;
            this->salarioBase = salarioBase ;
            this->imposto = imposto ;
        }
        // Metodos g e t t e r s e s e t t e r s
        string getNome(){
            return nome;
        }

        void setNome (string nome){
            this->nome = nome ;
        }

        double getSalarioBase() {
            return salarioBase;
        }

        void setSalarioBase(double salarioBase) {
            this->salarioBase = salarioBase ;
        }

        double getImposto(){
            return imposto;
        }

        void setImposto(double imposto){
            this->imposto = imposto ;
        }

};

class Vendedor : public Empregado{
    private:
        double valorVendas;
        double comissao;

    public:
        Vendedor( string nome, double salarioBase, double imposto, double valorVendas, double comissao) : Empregado(nome, salarioBase, imposto){
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
            double salarioLiquido = (getSalarioBase() + (comissao * valorVendas)) * (1 - getImposto());
            return salarioLiquido;
        }

};

int main(){

    // Vendedor 1 : Mariano
    Vendedor vendedor1("Mariano", 1000.00, 0.14, 80000.00, 0.05);
    // Vendedor 2 : Joana
    Vendedor vendedor2("Joana", 1500.00, 0.12, 120000.00, 0.06);

    cout << "Vendedor 1 : " << vendedor1.getNome() << endl;
    cout << "Salario Liquido: R$" << vendedor1.calcularSalario() << endl;
    cout << "Vendedor 2 : " << vendedor2.getNome() << endl;
    cout << "Salario Liquido: R$" << vendedor2.calcularSalario() << endl;

    return 0;
}

