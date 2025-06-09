/*Crie uma classe Pessoa com:
Um atributo nome privado
Um método setNome(string n) para definir o nome
Um método getNome() que retorna o nome
No main(), crie uma Pessoa, defina o nome como "Carlos" e imprima o nome com getNome().*/

#include <iostream>

using namespace std;

class Pessoa{

    private:
        string nome;

    public:
        void setNome(string n){
            nome = n;
        }

        string getNome(){
            return nome;
        }

};

int main(){
    Pessoa p1;

    p1.setNome("Carlos");

    cout << p1.getNome() << endl;

    return 0;

}