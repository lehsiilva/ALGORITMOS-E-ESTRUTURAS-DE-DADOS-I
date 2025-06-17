/*Exercício - Ponto
(a) Definir uma classe que represente um Ponto.
(b) Criar construtores para instanciar um ponto, com e sem parâmetros.
(c) Criar métodos públicos para:
• Definir a posição do ponto;
• Obter a posição do ponto;
• Calcular a distância entre dois pontos, dado outro objeto da classe ponto;
• Calcular a distância entre dois pontos, dadas as coordenadas de outro ponto,
como um par de números.
(d) Criar a classe Circulo derivada da classe Ponto.
(e) Criar construtores para instanciar um círculo, com e sem parâmetros.
(f) Criar a classe Esfera derivada da classe Circulo. Esta classe deve representar uma
esfera e conter um método adicional para calcular o volume da esfera. Use a fórmula:
Volume = 4/3 * πr^3
(g) Criar um programa principal para testar as classes criadas.*/

#include <iostream>

using namespace std;
class Ponto{
    private:
    int x;
    int y;

    public:
    Ponto(){
        x = 0;
        y = 0;
    }

    Ponto(int x, int y){
        this->x = x;
        this->y = y;
    }

    void setX(int x){
        this->x = x;
    }

    void setY(int y){
        this->y = y;
    }

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }



};
