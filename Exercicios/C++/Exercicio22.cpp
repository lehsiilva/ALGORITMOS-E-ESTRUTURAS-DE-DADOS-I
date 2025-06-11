/*Crie a classe Temperatura com:
Atributo privado: graus (float)
Construtor para definir o valor inicial
Métodos:
getTemperatura()
setTemperatura(float novaTemperatura)
verificarEstado():
imprime “Quente” se for > 30
“Frio” se for < 15
“Agradável” entre 15 e 30*/

#include <iostream>

using namespace std;

class Temperatura{
    private:
        float graus;

    public:

        Temperatura(float graus){

            this->graus = graus;

        }

        float getTemperatura(){

            return graus;

        }

        void setTemperatura(float novaTemperatura){

            graus = novaTemperatura;

            cout << "Nova temperatura: " << graus << endl;
        }

        void verificarEstado(){

            if(graus > 30){

                cout << "Clima Quente" << endl;

            }else if(graus < 15){

                cout << "Clima Frio" << endl;

            }else{

                cout << "Clima Agradavel" << endl;

            }
        }

};

int main(){

    cout << "Digite a temperatura: ";
    float n;
    cin >> n;

    Temperatura temperatura(n);
    
    temperatura.getTemperatura();

    cout << "Digite a nova temperatura: ";
    float nova;
    cin >> nova;

    cout << "Temperatura atual: " << n << endl;

    temperatura.setTemperatura(nova);

    temperatura.verificarEstado();

    return 0;

}