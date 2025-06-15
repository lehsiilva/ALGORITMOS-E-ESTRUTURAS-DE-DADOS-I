/*Implemente um carro. O tanque de combustível do carro armazena no máximo 50 litros
de gasolina. O carro consome 15 km/litro. Deve ser possível:
• Abastecer o carro com uma certa quantidade de gasolina;
• Mover o carro em uma determinada distância (medida em km);
• Retornar a quantidade de combustível e a distância total percorrida.
No programa principal, crie 2 carros. Abasteça 20 litros no primeiro e 30 litros no segundo.
Desloque o primeiro em 200 km e o segundo em 400 km. Exiba na tela a distância
percorrida e o total de combustível restante para cada um.*/

#include <iostream>

using namespace std;

class Carro{
    private:
        float tanque;
        float distancia;

        const float maxTanque = 50.00;
        const float consumo = 15.00;

    public:
        Carro(){
            tanque = 0;
            distancia = 0;
        }

        void abastecer(float litros){

            if(litros > 0){

                tanque += litros;

            }else if(tanque > maxTanque){

                tanque = maxTanque;
            }
        }

        void mover(float km) {

            float combustivelNecessario = km / consumo;

            if (combustivelNecessario <= tanque) {
                distancia += km;
                tanque -= combustivelNecessario;
            } else {
                float kmPossivel = tanque * consumo;
                distancia += kmPossivel;
                tanque = 0;
                cout << "Aviso: combustível insuficiente, o carro percorreu apenas " << kmPossivel << " km." << endl;
            }
        }

        float getTanque(){
            return tanque;
        }


        float getDistancia(){
            return distancia;
        }

};

int main(){

    Carro carro1;

    carro1.abastecer(20);
    carro1.mover(200);

    cout << "Distancia percorrida: " << carro1.getDistancia() << " " << "Total de combustivel restante: " << carro1.getTanque() << endl;

    
    Carro carro2;

    carro2.abastecer(30);
    carro2.mover(400);

    cout << "Distancia percorrida: " << carro2.getDistancia() << " " << "Total de combustivel restante: " << carro2.getTanque() << endl;

    return 0;
}