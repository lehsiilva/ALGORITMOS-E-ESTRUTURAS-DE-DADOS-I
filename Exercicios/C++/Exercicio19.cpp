/*Crie uma classe Aluno com:
Atributos privados: nome (string), nota (float)
Construtor para definir nome e nota
Métodos:
getNota(): retorna a nota
setNota(float novaNota): altera a nota
verificarAprovacao(): imprime “Aprovado” se nota >= 7, senão “Reprovado”*/

#include <iostream>

using namespace std;

class Aluno{
    private:
        string nome;
        float nota;

    public:
        Aluno(string nome, float nota){
            this->nome = nome;
            this->nota = nota;
        }

        float getNota(){
            return nota;
        }

        void setNota(float novaNota){
            nota = novaNota;
        }

        void verificarAprovacao(){
            if(nota >= 7){
                cout << "Aprovado" << endl;
            }else{
                cout << "Reprovado" << endl;
            }
        }
};

int main(){

    Aluno aluno("Pedro", 8.0);

    float nota = aluno.getNota();
    cout << "Nota Antiga: " << nota << endl;

    float novaNota;
    cout << "Digite a nova nota: ";
    cin >> novaNota;

    aluno.setNota(novaNota);

    aluno.verificarAprovacao();

    return 0;
}