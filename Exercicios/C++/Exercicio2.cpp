/*Crie uma classe Pessoa com:
Um atributo nome (público)
Um construtor que recebe o nome como parâmetro
Um método dizerOi() que imprime:
"Oi, eu sou [nome]!"
No main(), crie uma pessoa chamada "Ana" e chame o método dizerOi().*/

#include <iostream>

using namespace std;

class Pessoa{
    public:

        string nome;

    public:

        Pessoa(string n){
            nome = n;
        }

    void dizerOi(){
        cout << "Oi, eu sou "<< nome << endl;
    }

};

int main(){

    Pessoa p1("Ana");

    p1.dizerOi();

    return 0;

}

