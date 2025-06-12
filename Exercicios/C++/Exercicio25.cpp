/*Crie a classe base Veiculo com:
Atributos: marca, modelo (privados)
Construtor + métodos de acesso (get/set)
Crie a classe derivada Carro que herda de Veiculo e adiciona:
Atributo ano    
Método exibirDetalhes() que imprime todos os dados*/

#include <iostream>

using namespace std;

class Veiculo{
    private:
        string marca;
        string modelo;

    public:
        Veiculo(string marca, string modelo){
            this->marca = marca;
            this->modelo = modelo;
        }

        string getMarca(){

            return marca;

        }

        string getModelo(){

            return modelo;

        }
};

class Carro : public Veiculo{

    private:
        int ano;

    public:
        Carro(string marca, string modelo, int ano) : Veiculo(marca, modelo){
            this->ano = ano;
        }

        void exibirDetalhes(){
            cout << "Marca: " << getMarca() << endl;
            cout << "Modelo: " << getModelo() << endl;
            cout << "Ano: " << ano << endl;
        }
};

int main(){

    Carro carro("Toyota", "Corolla", 2005);

    carro.exibirDetalhes();

    return 0;

}