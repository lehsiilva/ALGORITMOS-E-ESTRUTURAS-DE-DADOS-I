/*Crie uma classe chamada Livro com:
Um atributo público chamado titulo (string)
Um método público chamado mostrarTitulo() que imprime o título do livro
No main():
Crie um objeto da classe Livro chamado livro1;
Atribua um valor ao título (ex: "Dom Casmurro");
Chame o método mostrarTitulo() para exibir o nome do livro.*/

#include <iostream>

using namespace std;

class Livro{

    public:
        string titulo;

    void mostrarTitulo(){
        cout << "Titulo: " << titulo << endl;
    }

};

int main(){

    Livro livro1;

    livro1.titulo = "Dom Casmurro";

    livro1.mostrarTitulo();

    return 0;
}