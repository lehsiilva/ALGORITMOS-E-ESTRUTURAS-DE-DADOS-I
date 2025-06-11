/*Crie a classe Produto com:
Atributos privados: nome (string), preco (float)
Construtor para definir nome e preço
Métodos:
getPreco() e getNome()
setPreco(float novoPreco)
aplicarDesconto(float porcentagem): diminui o preço de acordo com a % e imprime novo valor*/

#include <iostream>

using namespace std;

class Produto{
    private:
        string nome;
        float preco;

    public:
        Produto(){
            nome = "Desconhecido";
            preco = 0;
        }

        Produto(string nome, float preco){
            this->nome = nome;
            this->preco = preco;
        }

        float getPreco(){
            return preco;
        }

        string getNome(){
            return nome;
        }

        void setPreco(float novoPreco){
            preco = novoPreco;

            cout << "Novo preco: " << preco << endl;
        }

        void aplicarDesconto(float porcentagem){

            preco = preco - ((preco * porcentagem)/100);

            cout << "Valor com desconto: " << preco;
        }

};

int main(){
    Produto produto("Marcela", 20.00);

    float preco = produto.getPreco();
    cout << "Preco Atual: " << preco <<endl;

    string nome = produto.getNome();
    cout << "Nome: " << nome << endl;

    produto.setPreco(40.00);
    produto.aplicarDesconto(5);

    return 0;
}