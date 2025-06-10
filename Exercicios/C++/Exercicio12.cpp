/*Crie uma classe Numero com:
Um método ehPar() que recebe um número e imprime:
"É par" se for par;
"É ímpar" se for ímpar.*/

#include <iostream>

using namespace std;

class Numero{

    public:
        void ehPar(int a){
            if(a % 2 == 0){
                cout << "Eh Par" << endl;
            }else{
                cout << "Eh Impar" << endl;
            }
        }
};

int main(){
    Numero numero;

    numero.ehPar(11);

    return 0;
}