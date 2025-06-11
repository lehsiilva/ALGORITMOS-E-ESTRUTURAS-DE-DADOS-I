/*Crie a classe Livro com:
Atributos privados: titulo (string), autor (string)
Construtor que define ambos
Métodos:
getTitulo() e getAutor()
exibirInformacoes() → imprime: "Livro: [título] | Autor: [autor]"*/


#include <iostream>

using namespace std;

class Livro{
    private:
        string titulo;
        string autor;

    public:
        Livro(string titulo, string autor){
            this->titulo = titulo;
            this->autor = autor;
        }

        string getTitulo(){

            return titulo;

        }

        string getAutor(){

            return autor;
        }

        void exibirInformacoes(){

            cout << "Livro: " << titulo << endl;
            cout << "Autor: " << autor << endl;
        }

};

int main(){

    Livro livro("Dom Casmurro", "Machado de Assis");

    livro.exibirInformacoes();

    return 0;
    
}