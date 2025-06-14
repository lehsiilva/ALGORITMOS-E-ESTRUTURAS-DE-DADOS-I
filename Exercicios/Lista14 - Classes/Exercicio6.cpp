/*Implemente um condicionador de ar. O condicionador possui 10 potências diferentes.
Cada unidade da potência do condicionador diminui a temperatura do ambiente em 1.8ºC.
A variação que o condicionador consegue causar está no intervalo [0ºC - 18ºC], ou seja,
zero graus de variação quando desligado e dezoito graus de variação quando ligado na
potência máxima.
Através de um sensor, o condicionador é informado da temperatura externa. Dada essa
temperatura e a potência selecionada, o condicionador calcula e retorna a temperatura
do ambiente.
No programa principal, crie dois condicionadores. Informe duas temperaturas externas
diferentes para cada um (ex: 25ºC e 31ºC), ajuste o segundo em potência máxima (10) e
o primeiro em potência média (5). Finalmente, exiba a temperatura resultante de cada
ambiente*/

#include <iostream>

using namespace std;

class Condicionador{
    private:
    int potencia;
    int temperatura;

    public:
    Condicionador(){
        potencia = 0;
        temperatura = 0;
    }


    void setPotencia(int potencia){
        this->potencia= potencia;
    }

    int getPotencia(){
        return potencia;
    }

    void setTemperatura(int temp){
        temperatura = temp;
    }

    int getTemperatura(){
        return temperatura;
    }


    float TempAtual(){

        float temp = temperatura - (potencia * 1.8);

        return temp;
    }

};

int main(){

    Condicionador p1;
    Condicionador p2;

    int potencia1;
    int potencia2;

    do{
        cout << "Digite a potencia do condicionador de ar 1 ( 0 - 10 ): ";
        cin >> potencia1;

        
        if(potencia1 < 0 || potencia1 > 10){
            cout << "Potencia Invalida. Digite novamente: "<< endl;
        }

    }while(potencia1 < 0 || potencia1 > 10);

    cout << "Digite a temperatura do ambiente 1: ";
    int temperatura1;
    cin >> temperatura1;

    p1.setPotencia(potencia1);
    p1.setTemperatura(temperatura1);

    float resul1 = p1.TempAtual();

    cout << "Potencia selecionada: " << p1.getPotencia() << " " << "Temperatura do Ar: " << resul1 << endl;

    do{

        cout << "Digite a potencia do condicionador de ar 2 ( 0 - 10 ): ";
        cin >> potencia2;

        if(potencia2 < 0 || potencia2 > 10){
            cout << "Potencia Invalida. Digite novamente: "<< endl;
        }

    }while(potencia1 < 0 || potencia1 > 10);

    cout << "Digite a temperatura do ambiente 2: ";
    int temperatura2;
    cin >> temperatura2;

    p2.setPotencia(potencia2);
    p2.setTemperatura(temperatura2);

    float resul2 = p2.TempAtual();

    cout << "Potencia selecionada: " << p2.getPotencia() << " " << "Temperatura do Ar: " << resul2 << endl;


    return 0;

}