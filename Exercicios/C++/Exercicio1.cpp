/*Classe Ponto*/


class Ponto{

    int x;
    int y;

    public:
    Ponto(int a, int b){
        x = a;
        y = b;
    }

    int getx(){
        return x;
    }

    int setx(int a){

        x = a;

    }

};

int main(){

    Ponto p1;
    p1.Ponto(5,5);

    p1.setx(10);

    int x_P1 = p1.getx();

    return 0;
}
