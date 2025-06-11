/*Crie uma classe Retangulo com:
Atributos públicos largura e altura (int)
Um construtor que recebe os dois valores
Um método calcularArea() que imprime a área (largura × altura)*/

#include <iostream>

using namespace std;

class Retangulo{
    public:
        int altura;
        int largura;

    Retangulo(int a, int l){
        altura = a;
        largura = l;
    }

    ~Retangulo(){}

    void calcularArea(){
        int area = altura * largura;
        cout << "Area: " << area << endl;
    }

};

int main(){

    cout << "Digite a altura: ";
    int altura;
    cin >> altura;

    cout << "Digite a largura: ";
    int largura;
    cin >> largura;

    Retangulo retangulo(altura,largura);

    retangulo.calcularArea();

    return 0;
}