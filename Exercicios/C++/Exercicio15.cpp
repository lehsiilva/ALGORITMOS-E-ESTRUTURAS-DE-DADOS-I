/*Crie uma classe Animal com:
Um atributo tipo (string)
Um construtor que define o tipo
Um método fazerSom() que imprime:
"O cachorro faz au au" se o tipo for "cachorro"
"O gato faz miau" se for "gato"
"Som desconhecido" se for outro*/

#include <iostream>

using namespace std;

class Animal{
    public:
    string tipo;

    Animal(string tipo){

        this->tipo = tipo;
    }

    void fazerSom(){

        if(tipo == "cachorro"){

            cout << "O cachorro faz au au";

        }else if(tipo == "gato"){

            cout << "O gato faz miau";

        }else{

            cout << "Som desconhecido";
        }
    }

};

int main(){

    cout << "Digite o animal: ";
    string tipo;
    cin >> tipo;

    Animal animal(tipo);

    animal.fazerSom();

}