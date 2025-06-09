/*Crie uma classe Numero com:
Um método dobrar(int x) que imprime o dobro de x

No main():
Crie um objeto da classe Numero
Chame o método passando um valor, como 10*/

#include <iostream>

using namespace std;

class Numero{

    public:
        void dobrar(int x){

            cout << "Dobro: " << x*2 << endl;
        }

};

int main(){

    Numero numero;

    numero.dobrar(10);

    return 0;
}