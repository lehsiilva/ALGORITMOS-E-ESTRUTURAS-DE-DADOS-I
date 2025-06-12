/*Crie uma classe base Pessoa com:
Atributos: nome e idade (privados)
Construtor e métodos getNome(), getIdade()

Crie uma classe Estudante que herda de Pessoa e possui:
Atributo curso (privado)
Construtor para nome, idade e curso
Método exibirDados() que imprime todos os dados*/

#include <iostream>

using namespace std;

class Pessoa{

    private:
        string nome;
        int idade;

    public:
        Pessoa(string nome, int idade){
            this->nome = nome;
            this->idade = idade;
        }

        string getNome(){

            return nome;
        }

        int getIdade(){

            return idade;
        }

};

class Estudante : public Pessoa{

    private: 
        string curso;
    public:
        Estudante(string nome, int idade, string curso) : Pessoa(nome, idade){
            this->curso = curso;
        }

        void exibirDados(){

            cout << "Nome: " << getNome() << endl;
            cout << "Idade: " << getIdade() << endl;
            cout << "Curso: " << curso << endl;
        }

};

int main(){

    Estudante estudante("Clara", 19,"Jornalismo");

    estudante.exibirDados();

    return 0;

}