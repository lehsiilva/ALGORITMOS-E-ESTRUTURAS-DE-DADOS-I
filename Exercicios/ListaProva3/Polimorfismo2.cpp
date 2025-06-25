#include <iostream>

using namespace std;

class Publicacao{
    private:
    string titulo;
    string autor;
    int anoPublicacao;

    public:

    Publicacao(){
        titulo = "Desconhecido";
        autor = "Desconhecido";
        anoPublicacao = 0;
    }

    ~Publicacao(){}

    void setTitulo(string titulo){
        this->titulo = titulo;
    }

    void setAutor(string autor){
        this->autor = autor;
    }

    void setAno(int anoPublicacao){
        this->anoPublicacao = anoPublicacao;
    }


    string getTitulo(){
        return titulo;
    }

    string getAutor(){
        return autor;
    }

    int getAno(){
        return anoPublicacao;
    }

    virtual void exibirInformacoes(){
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Ano de Publicacao: " << anoPublicacao << endl;

    }
};

class Livro : public Publicacao{

    private: 
    int numPaginas;

    public:

    Livro(){
        numPaginas = 0;
    }

    ~Livro(){}

    void setLivro(int numPaginas){
        this->numPaginas = numPaginas;
    }
    int getLivro(){
        return numPaginas;
    }

    void exibirInformacoes() override{
        cout << "Numero de Paginas: " << numPaginas << endl;
    }
};

class Revista : public Publicacao{
    private:
    int edicao;

    public:
    Revista(){
        edicao = 0;
    }

    ~Revista(){}

    void setRevista(int edicao){
        this->edicao = edicao;
    }
    int getRevista(){
        return edicao;
    }

    void exibirInformacoes() override{
        cout << "Edicao: " << edicao << endl;
    }
};

class Biblioteca{
    private:
    Publicacao* publicacao = new Publicacao[100];

    public:
    Revista revista;
    Livro livro;

    int total = 0;

    void adicionarPublicacao(Publicacao*){
        Publicacao nova;

        cout << "Digite o Titulo: ";
        string titulo;
        cin >> titulo;

        cout << "Digite o Autor: ";
        string autor;
        cin >> autor;

        cout << "Digite o Ano: ";
        int ano;
        cin >> ano;

        nova.setTitulo(titulo);
        nova.setAutor(autor);
        nova.setAno(ano);

        cout << "Digite R para revista ou L pata livro: ";
        string verifica;
        cin >> verifica;

        if(verifica == "R" || verifica == "r"){

            cout << "Digite o numero de paginas: ";
            int numPaginas;
            cin >> numPaginas;
            nova.setRevista(numPaginas);

        }else if(verifica == "L" || verifica == "l"){

            cout << "Digite a edicao: ";
            int edicao;
            cin >> edicao;
            nova.setLivro(edicao);
        }

        Publicacao[total] = nova;
        total++;
    }

    void listarPublicacoes(){
        cout << "\n";

        for(int i = 0; i < total; i++){

            publicacao[i].exibirInformacoes();
            

            cout << "\n";
        }
    }

};

