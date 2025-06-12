/*Crie a classe ContaBancaria com:
Atributos: titular, saldo (privados)
Construtor e métodos:
depositar(), sacar(), exibirSaldo()
Crie a classe ContaPoupanca que herda de ContaBancaria e adiciona:
Método renderJuros() que aumenta o saldo em 2%*/

#include <iostream>

using namespace std;

class ContaBancaria{
    private:
        string titular;
        float saldo;

    public: 
        ContaBancaria(string titular, float saldo){
            this->titular = titular;
            this->saldo = saldo;
        }

        string getTitular(){

            return titular;

        }

        float getSaldo(){

            return saldo;

        }

        void depositar(float deposito){

            saldo += deposito;

            cout << "Saldo apos deposito: " << saldo << endl;

        }

        void sacar(float retirada){

            if(retirada < saldo){

                saldo-=retirada;

                cout << "Saldo apos saque: " << saldo << endl;

            }else{
                cout << "Saldo Insuficiente para saque" << endl;
            }

            
        }

        void exibirSaldo(){

            cout << "Saldo Disponivel: " << getSaldo() << endl;

        }

    protected:
        void rendimentos_saldo(float rendimentos){
            saldo+= rendimentos;

            cout << "Saldo com rendimentos: " << saldo << endl;
        }

};

class ContaPoupanca : public ContaBancaria{
   
    public:

        ContaPoupanca(string titular, float saldo): ContaBancaria(titular,saldo){}

        void renderJuros(){

            float rendimentos = (getSaldo() * 0.02);

            rendimentos_saldo(rendimentos);
            
        }

};

int main(){

    ContaPoupanca contaPoupanca("Jose", 100.00);

    cout << "Titular: " << contaPoupanca.getTitular() << endl;
    cout << "Saldo: " << contaPoupanca.getSaldo() << endl;

    contaPoupanca.depositar(50.00);
    contaPoupanca.sacar(20.00);
    contaPoupanca.exibirSaldo();
    contaPoupanca.renderJuros();

    return 0;
}