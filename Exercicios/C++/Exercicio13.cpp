/*Crie uma classe Pessoa com:
Dois atributos públicos: nome (string) e idade (int)
Um construtor que recebe nome e idade e atribui aos atributos
Um método exibirDados() que imprime o nome e a idade
No main(), crie um objeto da classe e chame o método exibirDados()*/

#include <iostream>
using namespace std;

class Pessoa {
    public:
        string nome;
        int idade;

        
        Pessoa(string nome, int idade) {
            this->nome = nome;
            this->idade = idade;
        }

        void exibirDados() {
            cout << "Nome: " << nome << endl;
            cout << "Idade: " << idade << endl;
        }
};

int main() {
    string nome;
    int idade;

    cout << "Digite seu nome: ";
    getline(cin, nome); // Permite ler nome com espaços

    cout << "Digite sua idade: ";
    cin >> idade;

    Pessoa pessoa(nome, idade);
    pessoa.exibirDados();

    return 0;
}