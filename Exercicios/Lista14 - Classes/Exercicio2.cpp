/*Crie uma classe denominada Elevador para armazenar as informações de um elevador
dentro de um prédio. A classe deve armazenar o andar atual (0=térreo), total de andares
no prédio, excluindo o térreo, capacidade do elevador, e quantas pessoas estão presentes
nele.
A classe deve também disponibilizar os seguintes métodos:
• inicializa: que deve receber como parâmetros: a capacidade do elevador e o total
de andares no prédio (os elevadores sempre começam no térreo e vazios);
• entra: para acrescentar uma pessoa no elevador (só deve acrescentar se ainda houver
espaço);
• sai: para remover uma pessoa do elevador (só deve remover se houver alguém dentro
dele);
• sobe: para subir um andar (não deve subir se já estiver no último andar);
• desce: para descer um andar (não deve descer se já estiver no térreo);
• get....: métodos para obter cada um dos dados armazenados.*/


#include <iostream>

using namespace std;

class Elevador {
    private:
        int andar_atual;
        int total_andares;
        int capacidade;
        int pessoas_presente;

    public:
        Elevador() {
            andar_atual = 0;
            pessoas_presente = 0;
            total_andares = 0;
            capacidade = 0;
        }

        void inicializa(int capacidade, int total_andares) {
            this->capacidade = capacidade;
            this->total_andares = total_andares;
            this->andar_atual = 0;
            this->pessoas_presente = 0;
        }

        void entra() {
            if (pessoas_presente < capacidade) {
                pessoas_presente++;
            } else {
                cout << "Elevador cheio!" << endl;
            }
        }

        void sai() {
            if (pessoas_presente > 0) {
                pessoas_presente--;
            } else {
                cout << "Elevador vazio!" << endl;
            }
        }

        void sobe() {
            if (andar_atual < total_andares) {
                andar_atual++;
            } else {
                cout << "Ja esta no ultimo andar!" << endl;
            }
        }

        void desce() {
            if (andar_atual > 0) {
                andar_atual--;
            } else {
                cout << "Ja esta no terreo!" << endl;
            }
        }

        int getAndarAtual() {
            return andar_atual;
        }

        int getTotalAndares() {
            return total_andares;
        }

        int getCapacidade() {
            return capacidade;
        }

        int getPessoasPresente() {
            return pessoas_presente;
        }

        void status() {
            cout << "\n--- Status Atual do Elevador ---" << endl;
            cout << "Andar atual: " << andar_atual << endl;
            cout << "Pessoas presentes: " << pessoas_presente << "/" << capacidade << endl;
        }

};

int main(){

    Elevador elevador;
    int capacidade, total_andares;
    int opcao;

    cout << "Capacidade do elevador: ";
    cin >> capacidade;
    cout << "Total de andares (sem contar o terreo): ";
    cin >> total_andares;

    elevador.inicializa(capacidade, total_andares);

    do {
        cout << "\n=== Menu do Elevador ===" << endl;
        cout << "1. Entrar pessoa" << endl;
        cout << "2. Sair pessoa" << endl;
        cout << "3. Subir andar" << endl;
        cout << "4. Descer andar" << endl;
        cout << "5. Mostrar status" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                elevador.entra();
                break;
            case 2:
                elevador.sai();
                break;
            case 3:
                elevador.sobe();
                break;
            case 4:
                elevador.desce();
                break;
            case 5:
                elevador.status();
                break;
            case 0:
                cout << "Encerrando o programa." << endl;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }

    } while (opcao != 0);

    return 0;
}
