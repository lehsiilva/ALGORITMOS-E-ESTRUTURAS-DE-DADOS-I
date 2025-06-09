/*Crie:
Uma classe Pessoa com atributo nome e um método falar(), que imprime "Olá, eu sou [nome]".
Uma classe Aluno que herda de Pessoa e tenha um método estudar() que imprime "Estou estudando".
No main(), crie um Aluno, defina o nome como "Lucas", e chame falar() e estudar().*/

#include <iostrem>

using namespace std;

class Pessoa{
    public:
        string nome;

    public:
        Pessoa(string n){
            nome = n;
        }

        void falar(){
            cout << "Olá, eu sou" << nome << endl;
        }


};

class Aluno :: public Pessoa{

};

int main(){

}