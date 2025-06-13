/*Usando C++, crie uma classe Aluno (Inteiro matrícula, String nome, String curso, Inteiro período). A classe deve conter dois construtores: um sem parâmetros, com inicialização padrão; o outro com parâmetros para todos os atributos.
* Na classe Aluno, crie os métodos para manipular os atributos (get e set).
* Ainda na classe Aluno, crie um método público aprovarAluno que incremente o período do aluno e que deve ser acionado sempre que o aluno for aprovado ao final do semestre.
* Ainda na classe Aluno, crie um método imprimirDados que mostre na tela todos os atributos da classe.
* O programa principal deve ler do teclado a quantidade n de alunos a serem cadastrados e criar um vetor para armazenar os dados dos n alunos. Os dados dos alunos devem ser lidos do teclado e salvos no vetor.*/

#include <iostream>

using namespace std;

class Aluno{
    private:
        int matricula;
        string nome;
        string curso;
        int periodo;

    public:
        Aluno(){
            matricula = 0;
            nome = "Desconhecido";
            curso = "Desconhecido";
            periodo = 0;
        }

        Aluno(int matricula, string nome, string curso, int periodo){
            this->matricula = matricula;
            this->nome = nome;
            this->curso = curso;
            this->periodo = periodo;
        }

        
        void setMatricula(int matricula){

            this->matricula = matricula;

        }

        int getMatricula(){

            return matricula;
        }

        void setNome(string nome){

            this->nome = nome;
        }

        string getNome(){

            return nome;
        }

        void setCurso(string curso){

            this->curso = curso;

        }

        string getCurso(){

            return curso;
        }

        void setPeriodo(int periodo){
            
            this->periodo = periodo;
        }
        
        int getPeriodo(){

            return periodo;
        }

        void aprovarAluno(){

        periodo++;
            
        }

        void imprimirDados(){
            cout << "Matricula: " << matricula << endl;
            cout << "Nome: " << nome << endl;
            cout << "Curso: " << curso << endl;
            cout << "Periodo: " << periodo << endl;
        }
};

void ler(Aluno *aluno, int n){

    for(int i = 0; i < n; i++){

        cout << "Digite a Matricula do " << i+1 << " aluno: ";
        int matricula;
        cin >> matricula;
        aluno[i].setMatricula(matricula);

        cout << "Digite a Nome " << i+1 << " aluno: ";
        string nome;
        cin >> nome;
        aluno[i].setNome(nome);

        cout << "Digite a Curso " << i+1 << " aluno: ";
        string curso;
        cin >> curso;
        aluno[i].setCurso(curso);

        cout << "Digite a Periodo " << i+1 << " aluno: ";
        int periodo;
        cin >> periodo;
        aluno[i].setPeriodo(periodo);

        cout << "Aluno "<< i+ 1 << " aprovado? (s/n): ";
        string aprovado;
        cin >> aprovado;

        if (aprovado == "s" || aprovado == "S") {
            aluno[i].aprovarAluno();
        }
       
    }

}

void imprimir(Aluno *aluno, int n){

    cout << "\n";

    for(int i = 0; i < n; i++){

        aluno[i].imprimirDados();

        cout << "\n";
    }

}

int main(){

    cout << "Digite o numero de alunos: ";
    int n;
    cin >> n;

    Aluno aluno[n];

    ler(aluno,n);
    imprimir(aluno,n);

    return 0;
}

    