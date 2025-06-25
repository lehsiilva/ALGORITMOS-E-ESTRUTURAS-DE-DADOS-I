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

    ~Aluno(){}

    void setMatricula(int matricula){
        this->matricula = matricula;
    }

    void setNome(string nome){
        this->nome = nome;
    }

    void setCurso(string curso){
        this->curso = curso;
    }

    void setPeriodo(int periodo){
        this->periodo = periodo;
    }


    int getMatricula(){
        return matricula;
    }

    string getNome(){
        return nome;
    }

    string getCurso(){
        return curso;
    }

    int getPeriodo(){
        return periodo;
    }

    void aprovarAluno(){

        periodo++;
    }

    void imprimirDados(Aluno aluno[], int n){

        cout << "\n";

        for(int i = 0; i < n; i++){

            cout << "Nome: " << aluno[i].getNome() << endl;
            cout << "Matricula: " << aluno[i].getMatricula() << endl;
            cout << "Curso: " << aluno[i].getCurso() << endl;
            cout << "Periodo: " << aluno[i].getPeriodo() << endl;

            cout << "\n";
        }

    }
};
      
int main(){

    cout << "Digite a quantidade de alunos: ";
    int n;
    cin >> n;

    Aluno* aluno = new Aluno[n];

    for(int i = 0; i < n ; i++){
        cout << "Digite o Nome do aluno  " << i + 1;
        string nome;
        cin >> nome;
        aluno[i].setNome(nome);

        cout << "Digite o Curso do aluno  "<< i + 1;
        string curso;
        cin >> curso;
        aluno[i].setCurso(curso);

        cout << "Digite a Matricula do aluno  "<< i + 1;
        int matricula;
        cin >> matricula;
        aluno[i].setMatricula(matricula);

        cout << "Digite o Periodo do aluno  "<< i + 1;
        int periodo;
        cin >> periodo;
        aluno[i].setPeriodo(periodo);

        cout << "Aluno aprovado? (S/N)  "<< i + 1;
        string aprovado;
        cin >> aprovado;

        if(aprovado == "S" || aprovado == "s"){
            aluno[i].aprovarAluno();
        }
    }

    aluno->imprimirDados(aluno,n);

    delete[] aluno;

    return 0;

}