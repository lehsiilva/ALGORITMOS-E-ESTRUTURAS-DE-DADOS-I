/*Implemente uma classe base Funcionario com:
Nome
Matrícula
Salário base

Método virtual:
calcularSalario()

Depois, crie as classes derivadas:
Professor (atributo: número de aulas semanais. Cada aula vale R$50)
Tecnico (atributo: bônus por produtividade)

Crie um vetor de ponteiros para Funcionario e preencha com objetos de ambas as subclasses. Use polimorfismo para calcular o salário final de cada funcionário.*/

#include <iostream>

using namespace std;

class Funcionario{
    private:
    string nome;
    string matricula;
    float salarioBase;

    public:

    virtual void calcularSalario(){

    }

};

class Professor : public Funcionario{
    private:
    int aulasSemanais;

    public:

};

class Tecnico : public Funcionario{
    private:
        
};