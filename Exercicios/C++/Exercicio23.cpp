/*Crie uma classe Funcionario com:
Atributos privados: nome (string), salario (float)
Construtor que define o nome e o salário

Métodos:
getNome() e getSalario()
setSalario(float novoSalario)
exibirDados() → imprime nome e salário*/

#include <iostream>

using namespace std;

class Funcionario{
    private:
        string nome;
        float salario;

    public:
        Funcionario(string nome, float salario){
            this->nome = nome;
            this->salario = salario;
        }

        string getNome(){
            
            return nome;
        }

        float getSalario(){
            
            return salario;
        }

        void setSalario(float novoSalario){
            
            salario = novoSalario;

            cout << "Novo Salario: " << salario << endl;
        }

        void exibirDados(){

            cout << "Nome: " << getNome() << endl;
            cout << "Salario:" << getSalario() << endl;

        }

};

int main(){

    cout << "Digite o nome: ";
    string nome;
    getline(cin, nome);  

    cout << "Digite o salario: ";
    float salario;
    cin >> salario;

    Funcionario funcionario(nome,salario);

    cout << "Digite o novo salario: ";
    float novoSalario;
    cin >> novoSalario;
    funcionario.setSalario(novoSalario);

    funcionario.exibirDados();

    return 0;
}