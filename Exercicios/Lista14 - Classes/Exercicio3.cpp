/*Crie uma classe em C++ chamada Relogio para armazenar um horário, composto por
hora, minuto e segundo. A classe deve representar esses componentes de horário e deve
apresentar os métodos descritos a seguir:
• um método chamado setHora, que deve receber o horário desejado por parâmetro
(hora, minuto e segundo);
• um método chamado getHora para retornar o horário atual, através de 3 variáveis
passadas por referência;
• um método para avançar o horário para o próximo segundo (lembre-se de atualizar
o minuto e a hora, quando for o caso).*/

#include <iostream>

using namespace std;

class Relogio{
    private:
    int hora;
    int minuto;
    int segundo;

    public:
    Relogio(){
        hora = 0;
        minuto = 0;
        segundo = 0;
    }

    void setHora(int hora, int minuto, int segundo){
        this->hora = hora;
        this->minuto = minuto;
        this->segundo = segundo;
    }

    void getHora(int &hora, int &minuto, int &segundo){
        hora = this->hora;
        minuto = this->minuto;
        segundo = this->segundo;
    }

    void avancar_horario(){

        segundo++;

        if(segundo == 60){
            segundo = 0;
            minuto++;
        }

        if(minuto == 60){
            minuto = 0;
            hora++;
        }

        if(hora == 24){
            hora = 0;
        }
    }

};

int main(){
    Relogio relogio;

    int h, m, s;

    relogio.setHora(1,59,59);

    cout << "Hora Atual: " << endl; 

    relogio.getHora(h, m, s);

    cout << h << ":" << m << ":" << s << endl;

    relogio.avancar_horario();

    cout << "Hora Mudada: " << endl; 

    relogio.getHora(h, m, s);

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}
