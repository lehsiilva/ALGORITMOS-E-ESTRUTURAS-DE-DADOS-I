/*Crie uma classe Calculadora com:
Um método somar() que recebe dois números e imprime a soma deles
No main():
Crie um objeto da classe Calculadora
Chame o método somar() passando dois números, ex: 3 e 5*/

#include <iostream>

using namespace std;

class Calculadora{
    public:
        void somar(int a, int b){

            int soma = a + b;

            cout << "Soma: " << soma << endl;
        }

};

int main(){

    Calculadora p1;

    p1.somar(5,5);

    return 0;
}
