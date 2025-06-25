/*Implemente uma classe ContaBancaria com:
Número da conta
Saldo
Métodos para depositar, sacar e consultar saldo

Depois, crie a classe Cliente, com:
Nome
CPF
Objeto ContaBancaria como atributo (composição)

No programa principal, crie três clientes, realize operações nas contas e mostre os saldos.*/

#include <iostream>

using namespace std;

class ContaBancaria{
    private:
    string numConta;
    float saldo;

    public:
    ContaBancaria(){
        numConta = "Desconhecido";
        saldo = 0;
    }

    void setNumConta(string numConta){
        this->numConta = numConta;
    }

    void setSaldo(float saldo){
        this->saldo = saldo;
    }

    string getNumConta(){
        return numConta;
    }

    float getSaldo(){
        return saldo;
    }

    void Depositar(){
        cout << "Valor a ser depositado: ";
        float valor;
        cin >> valor;

        saldo+= valor;
    }

    void Sacar(){
        cout << "Valor a ser sacado: ";
        float valor;
        cin >> valor;

        if(valor > saldo){
            cout << "Saldo insuficiente para saque" << endl;
        }else{
            saldo -= valor;
        }
    }

    void Consultar(){

        cout << "Valor disponivel: " << getSaldo() << endl;

    }

};

class Cliente{
    private:
    string nome;
    string cpf;
    ContaBancaria conta;

    public:

    void setNome(string nome){
        this->nome = nome;
    }

    void setCpf(string cpf){
        this->cpf = cpf;
    }

    string getNome(){
        return nome;
    }

    string getCpf(){
        return cpf;
    }

    void setContaBancaria(string numConta, float saldo){
        conta.setNumConta(numConta);
        conta.setSaldo(saldo);
    }

    void Sacar() {
        conta.Sacar();
    }

    void Depositar() {
        conta.Depositar();
    }

    void Consultar(){
        conta.Consultar();
    }

};

void exibirDados(Cliente cliente[], int tam){

    cout << "\n";

    for(int i = 0; i < tam; i++){

        cout << "Nome: " << cliente[i].getNome() << endl;
        cout << "CPF: " << cliente[i].getCpf() << endl;
        cliente[i].Consultar();

        cout << "\n";
    }
}

int main(){
    Cliente* cliente = new Cliente[3];

    for(int i = 0; i < 3; i++){
        cout << "Nome do cliente: ";
        string nome;
        cin >> nome;
        cliente[i].setNome(nome);

        cout << "CPF do cliente: ";
        string cpf;
        cin >> cpf;
        cliente[i].setCpf(cpf);

        cout << "Numero da Conta do cliente: ";
        string numConta;
        cin >> numConta;

        cout << "Saldo do cliente: ";
        float saldo;
        cin >> saldo;
        
        cliente[i].setContaBancaria(numConta, saldo);

        cliente[i].Depositar(); 
        cliente[i].Sacar();

    }

    exibirDados(cliente,3);

    delete[] cliente;
    
    return 0;
}