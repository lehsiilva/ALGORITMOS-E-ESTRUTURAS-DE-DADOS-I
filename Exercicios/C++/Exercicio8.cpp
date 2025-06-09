/*Crie uma classe Pessoa com:
Um atributo público idade
Um método verificarIdade() que imprime:
"Maior de idade" se idade >= 18
"Menor de idade" se idade < 18

No main():
Crie um objeto da classe Pessoa
Atribua um valor à idade
Chame o método verificarIdade()*/

#include <iostream>

using namespace std;

class Pessoa{
    public:
        int idade;

        void verificarIdade(){

            if( idade >= 18){

                cout << "Maior de idade" << endl;

            }else if(idade < 18){

                cout << "Menor de idade" << endl;
            }

        }

};

int main(){

    Pessoa pessoa;

    pessoa.idade = 15;

    pessoa.verificarIdade();

    return 0;
}