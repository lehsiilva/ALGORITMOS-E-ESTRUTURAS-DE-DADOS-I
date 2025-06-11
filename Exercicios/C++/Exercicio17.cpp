/*Crie uma classe Calculadora com os seguintes métodos:
somar(int a, int b)
subtrair(int a, int b)
multiplicar(int a, int b)
dividir(int a, int b) (verifique se b é diferente de 0)
No main(), crie um objeto e chame os métodos com números à sua escolha.*/

#include <iostream>

using namespace std;

class Calculadora{
    public:
        void somar(int a, int b){
            cout << "Soma: " << a + b << endl;
        }

        void subtrair(int a, int b){
            cout << "Subtracao: " << a - b << endl;

        }

        void multiplicar(int a, int b){
            cout << "Multiplicacao: " << a * b << endl;

        }
        
        void dividir(int a, int b){

            if (b != 0) {
            cout << "Divisao: " << a / b << endl;
            } else {
            cout << "Erro: divisão por zero!" << endl;
            }
            
        }
};

int main(){

    cout << "Digite o primeiro numero: ";
    int a;
    cin >> a;

    cout << "Digite o segundo numero: ";
    int b;
    cin >> b;

    Calculadora calculadora;

    calculadora.somar(a,b);
    calculadora.subtrair(a,b);
    calculadora.multiplicar(a,b);
    calculadora.dividir(a,b);

    return 0;
}