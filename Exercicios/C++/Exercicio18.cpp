/*Crie uma classe Conta com:
Atributos privados: titular (string), saldo (float)
Um construtor que recebe o nome do titular e o saldo inicial
Métodos públicos:
depositar(float valor) → adiciona ao saldo
sacar(float valor) → subtrai do saldo (se houver saldo suficiente)
exibirSaldo() → imprime nome e saldo atual

No main():
Crie um objeto Conta
Realize depósitos, saques e mostre o saldo.*/

#include <iostream>

using namespace std;

class Conta {
private:
    string titular;
    float saldo;

public:
    // Construtor
    Conta(string nome, float saldoInicial) {
        titular = nome;
        saldo = saldoInicial;
    }

    void depositar(float valor) {
        saldo += valor;
        cout << "Deposito de R$" << valor << " realizado com sucesso." << endl;
    }

    void sacar(float valor) {
        if (valor <= saldo) {
            saldo -= valor;
            cout << "Saque de R$" << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Saldo insuficiente para saque." << endl;
        }
    }

    void exibirSaldo() {
        cout << "Titular: " << titular << endl;
        cout << "Saldo atual: R$" << saldo << endl;
    }
};

int main() {
    string nome;
    float saldoInicial;

    cout << "Digite o nome do titular: ";
    getline(cin, nome); // permite ler nomes com espaço

    cout << "Digite o saldo inicial: ";
    cin >> saldoInicial;

    Conta conta(nome, saldoInicial);

    conta.depositar(150.0);
    conta.sacar(50.0);
    conta.exibirSaldo();

    return 0;
}
