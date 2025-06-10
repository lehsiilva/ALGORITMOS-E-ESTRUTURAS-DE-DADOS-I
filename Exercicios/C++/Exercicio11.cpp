/*Crie uma classe Matematica com:
Um método multiplicar() que recebe dois números e imprime o resultado da multiplicação.

No main():
Crie um objeto da classe Matematica.
Chame o método passando dois números, por exemplo: 4 e 6.*/

#include <iostream>

using namespace std;

class Matematica{

    public:
    void multiplicar(int a, int b){

        cout << "Resultado: " << a*b << endl;
    }
};

int main(){

    Matematica matematica;

    matematica.multiplicar(5,5);

    return 0;
}