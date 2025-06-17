/*Agenda Telefônica com Contatos
Crie uma classe Contato com os seguintes atributos:
Nome
Número de telefone
E-mail
Inclua métodos set, get, e um método imprimirDados.
Em seguida, crie uma classe Agenda que contenha um vetor de até 100 contatos e métodos para:
Adicionar novo contato
Remover um contato pelo nome
Buscar um contato pelo nome
Imprimir todos os contatos*/

#include <iostream>

using namespace std;

class Contato{
    private:
        string nome;
        string telefone;
        string email;

    public:
        Contato(){
            nome = "Desconhecido";
            telefone = "Desconhecido";
            email = "Desconhecido";
        }

        void setNome(string nome){
            this->nome = nome;
        }

        void setTelefone(string telefone){
            this->telefone = telefone;
        }

        void setEmail(string email){
            this->email = email;
        }

        string getNome(){
            return nome;
        }

        string getTelefone(){
            return telefone;
        }

        string getEmail(){
            return email;
        }

        void imprimirDados(){

            cout << "Nome: " << nome <<endl;
            cout << "Telefone: " << telefone << endl;
            cout << "Email: " << email << endl;
        }

};

class Agenda{
    private:
        Contato contatos[100];
    public:
        int total = 0;
        
        void AdicionarContato(){
            if(total >= 100){
                cout << "Agenda Cheia";
            }

            Contato novo;
            string nome, telefone, email;

            cout << "Digite o nome: ";
            cin >> nome;
            novo.setNome(nome);

            cout << "Digite o telefone: " ;
            cin >> telefone;
            novo.setTelefone(telefone);

            cout << "Digite o Email: " ;
            cin >> email;
            novo.setEmail(email);

            contatos[total] = novo;

            total++;

            cout << "Contato Adicionado!"<< endl;
            
        }

        void RemoverContato(){

            cout << "Digite o nome do contato a ser deletado: "<< endl;
            string nome;
            cin >> nome;

            for(int i = 0; i < total; i++){
                if(contatos[i].getNome() == nome){
                    for(int j = i; j < total - 1; j++){
                        contatos[j] = contatos[j+1];
                        
                    }

                    total--;
                    cout << "Deletado com Sucesso! " << endl;
                    return;
                }

            }  

        }

        void BuscarContato(){
            cout << "Digite o nome do contato a ser procurado: "<< endl;
            string nome;
            cin >> nome;

            for(int i = 0; i < total; i++){
                if(contatos[i].getNome() == nome){

                    contatos[i].imprimirDados();
                }
            }
        }

        void ImprimirTodos(){
            
            for(int i = 0; i < total; i++){

                contatos[i].imprimirDados();
            }
        }
};

int main(){
    Agenda agenda;

    int opcao;

    do{

        cout << "Menu:" << endl;
        cout << "Digite 1 para adicionar um contato: " << endl;
        cout << "Digite 2 para deletar um contato: " << endl;
        cout << "Digite 3 para procurar um contato: " << endl;
        cout << "Digite 4 para imprimir todos os contatos: " << endl;
        cout << "Digite 0 para sair da agenda: " << endl;

        cout << "Escolha 1 opcao: ";
        cin >> opcao;

        switch(opcao){
            case 1:
                agenda.AdicionarContato();
                break;
            case 2:
                agenda.RemoverContato();
                break;
            case 3:
                agenda.BuscarContato();
                break;
            case 4:
                agenda.ImprimirTodos();
                break;
            case 0:
                cout << "Agenda fechada!" << endl;
                break;
        }

    }while(opcao != 0);


    return 0;
}