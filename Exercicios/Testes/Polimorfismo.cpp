#include <iostream>

using namespace std;

class Animal{
    private:
    string nome;

    protected:
    string classe;

    public:

    Animal(){
        nome = "Desconhecido";
        classe = "Desconhecido";
    }

    void imprime(){ 
        cout << "Nome: " << nome << endl;
        cout << "Classe: " << classe << endl;
    }

    void setNome(string nome){
        this->nome = nome;
    }

    string getNome(){
        return nome;
    }


    virtual void falar(){
        cout << "Som Irreconhecivel " << endl;
    }
};

class Ave : public Animal{
    public:
    void Voar(){
        cout << "Esta Voando" << endl;
    }

    void falar() override{
         cout << getNome() <<"Faz um som de Ave " << endl;
    }
};

class Mamifero : public Animal{
    private:
    int velocidade;

    public:
    void Correr(){
        cout << "Esta Correndo" << endl;
    }
    
};

class BenTeVi : public Ave{


    public:
    void falar() override{
        cout << getNome() <<"Faz um som de BenTeVi" << endl;
    }
};

class Papagaio : public Ave{
    private:
    string vocabulario;

    public:

    void setVocabulario(string vocab){
        vocabulario = vocab;
    }

    void falar() override{
        cout << getNome() <<"Diz  " << vocabulario << endl;
    }
};

class Vaca : public Mamifero{
    private:
    bool permiteOrdenha = true;

    public:

    void Ordenhar(){
        if(permiteOrdenha){
            cout << "Esta Ordernhando" << endl;
        }else{
            cout << "Nao esta Ordenhando" << endl;
        }
    }
    void falar() override{
        cout << getNome() <<"Faz MUUUU " << endl;
    }
};

class Cachorro : public Mamifero{
    private:
    bool tipoLatido = true;

    public:
    void setLateAlto(){
        tipoLatido = true;
    }

    void setLateBaixo(){
        tipoLatido = false;
    }

    void falar() override{

        if(tipoLatido){
            cout << getNome() <<" diz AU AU " << endl;
        }else{
            cout <<  getNome() <<" diz au au " << endl;
        }
    }
};

int main() {
    Papagaio p;
    p.setNome("Louro");
    p.setVocabulario("Olá! Tudo bem?");
    p.falar();

    BenTeVi b;
    b.setNome("Bento");
    b.falar();

    Vaca v;
    v.setNome("Mimosa");
    v.falar();
    v.Ordenhar();

    Cachorro c;
    c.setNome("Rex");
    c.setLateBaixo();
    c.falar();
    c.setLateAlto();
    c.falar();

    return 0;
}