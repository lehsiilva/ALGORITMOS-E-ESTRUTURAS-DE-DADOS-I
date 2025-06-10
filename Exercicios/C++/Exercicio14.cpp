/*Crie uma classe Produto com:
Um atributo público preco (float)
Um construtor que recebe o preço
Um método mostrarPrecoComDesconto() que imprime o preço com 10% de desconto*/

#include <iostream>

using namespace std;

class Produto{
    public:
        float preco;

        Produto(float p){

            preco = p;
        }

        void mostrarPrecoComDesconto(){

            float desconto = (preco * 10)/ 100;

            cout << "Preço com 10% de desconto: " << preco - desconto << endl;


        }
};

int main(){

    cout << "Digite o preço: ";
    float p;
    cin >> p;

    Produto produto(p);

    produto.mostrarPrecoComDesconto();

    return 0;

    
}