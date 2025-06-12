/*Crie uma classe para representar uma pessoa, com os atributos privados de nome, idade e
altura. Crie os métodos públicos necessários para sets e gets e também um método para
imprimir os dados de uma pessoa.*/

#include <iostream>

using namespace std;

class Pessoa{
    private:
        string nome;
        int idade;
        float altura;

    public:
        Pessoa(string nome, int idade, float altura){

            this->nome = nome;
            this->idade = idade;
            this->altura = altura;

        }

        void setNome(string nome){

            this->nome = nome;
        }

        string getNome(){

            return nome;
        }

        void setIdade(int idade){

            this->idade = idade;

        }

        int getIdade(){

            return idade;
        }

        void setAltura(float altura){

            this->altura = altura;

        }

        float getAltura(){
            
            return altura;
        }


        void exibirDados(){

            cout << "Nome: " << getNome() << endl;
            cout << "Idade: " << getIdade() << endl;
            cout << "Altura: " << getAltura() << endl;
        }

};

int main(){

    cout << "Digite o nome: ";
    string nome;
    getline(cin, nome);

    cout << "Digite a idade: ";
    int idade;
    cin >> idade;

    cout << "Digite a altura: ";
    float altura;
    cin >> altura;

    Pessoa pessoa(nome,idade,altura);

    pessoa.exibirDados();

    return 0;
}