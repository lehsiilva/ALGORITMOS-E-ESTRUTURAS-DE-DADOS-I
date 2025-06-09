/*Crie uma classe chamada Carro com três atributos públicos:
marca (string)
modelo (string)
ano (inteiro)
Depois, no main():
Crie dois objetos dessa classe (carro1 e carro2);
Atribua valores diferentes aos atributos desses dois carros;
Crie um método chamado imprimir_dados() que mostre na tela os valores de cada carro;
Chame esse método para exibir as informações dos dois carros.*/

#include <iostream>

using namespace std;

class Carro{

    public:

        string marca;
        string modelo;
        int ano;

    void imprimir_dados(){

        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;

    }

};

int main(){

    Carro carro1;
    Carro carro2;

    carro1.marca = "pejot";
    carro1.modelo = "Fusca";
    carro1.ano = 2000;

    carro2.marca = "fiat";
    carro2.modelo = "Uno";
    carro2.ano = 1900;

    carro1.imprimir_dados();
    carro2.imprimir_dados();

    return 0;

}