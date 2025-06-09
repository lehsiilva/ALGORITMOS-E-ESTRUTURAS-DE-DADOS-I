/*Crie uma classe Pessoa com:
Dois atributos públicos: nome e sobrenome
Um método mostrarNomeCompleto() que imprime o nome completo juntos

No main():
Crie um objeto da classe Pessoa
Atribua valores ao nome e sobrenome
Chame o método mostrarNomeCompleto()*/

#include <iostream>

using namespace std;

class Pessoa{

    public: 
        string nome;
        string sobrenome;

    void mostrarNomeCompleto(){

        cout << "Nome Completo: " << nome << " " << sobrenome << endl;

    }

};

int main(){

    Pessoa pessoa;

    pessoa.nome = "Clara";
    pessoa.sobrenome = "Maria";

    pessoa.mostrarNomeCompleto();

    return 0;
}