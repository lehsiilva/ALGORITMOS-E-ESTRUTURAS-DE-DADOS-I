/*Implemente uma classe televisão. A televisão tem um controle de volume do som e um
controle de seleção de canal. O controle de volume permite aumentar ou diminuir a po-
tência do volume de som em uma unidade de cada vez. O controle de canal também
permite aumentar e diminuir o número do canal em uma unidade, porém, também pos-
sibilita trocar para um canal indicado. Também devem existir métodos para consultar o
valor do volume de som e o canal selecionado. No programa principal, crie uma televisão
e troque de canal algumas vezes. Aumente um pouco o volume, e exiba o valor de ambos
os atributos*/

#include <iostream>

using namespace std;

class Televisao{
    private:
        int controleSom;
        int controleCanal;

    public:
        Televisao(){
            controleSom = 0;
            controleCanal = 0;
        }

        void setContoleSom(int controleSom){

            this->controleSom = controleSom;
        }

        int getControleSom(){

            return controleSom;
        }

        void setContoleCanal(int controleCanal){

            this->controleCanal = controleCanal;
        }

        int getControleCanal(){

            return controleCanal;
        }

        void aumentaVolume(){
            controleSom++;
        }

        void diminuiVolume(){
            controleSom--;
        }

        void aumentarCanal(){
            controleCanal++;
        }
        
        void diminuirCanal(){
            controleCanal--;
        }

        void selecionarCanal(int canal){
            controleCanal = canal;
        }

        void consulta(){
            cout << "Canal Atual e volume atual: " << endl;
            cout << "Canal: " << controleCanal << endl;
            cout << "Volume: " << controleSom << endl;
        }
};

int main(){
    
    Televisao televisao;

    int opcao;

    do{
        cout << "Menu: "<< endl;
        cout << "1 - Aumentar Volume" << endl;
        cout << "2 - Diminuir Volume" << endl;
        cout << "3 - Aumentar Canal" << endl;
        cout << "4 - Diminuir Canal" << endl;
        cout << "5 - Escolher Canal" << endl;
        cout << "6 - Canal e volume Atual" << endl;
        cout << "0 - Desligar TV" << endl;

        cout <<"Escolha uma opcao: ";
        cin >> opcao;

    switch(opcao){
        case 1:
            televisao.aumentaVolume();
            break;
        case 2:
            televisao.diminuiVolume();
            break;
        case 3:
            televisao.aumentarCanal();
            break;
        case 4:
            televisao.diminuirCanal();
            break;
        case 5:{
            cout << "Digite o canal desejado: ";
            int canal;
            cin >> canal;
            televisao.selecionarCanal(canal);
            break;
        }
        case 6:
            televisao.consulta();
            break;
        case 0:
            cout << "TV desligada!";
            break;

    }

    }while(opcao != 0);

    return 0;
}