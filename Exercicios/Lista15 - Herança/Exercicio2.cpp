/*Desenvolva um programa em C++ para gerenciar os dados de um grupo de carros. Cada
carro é representado por uma estrutura que contém as seguintes informações:
• Modelo do carro
• Marca do carro
• Ano de fabricação do carro
• Preço do carro
• Data da venda do carro (outra estrutura contendo dia, mês e ano)
a) Crie uma estrutura chamada Data contendo três campos: dia, mês e ano.
b) Crie uma estrutura chamada Carro para representar um carro, que deve conter os
campos mencionados acima: modelo, marca, ano de fabricação, preço e data da
venda.
c) Suponha que as estruturas criadas anteriormente tenham escopo global e possam ser
usadas no programa principal e nas demais funções do código. Escreva uma função
chamada carroMaisCaro que receba como parâmetro uma lista contendo os dados
de n carros (structs do tipo Carro) e mostre na tela o preço e a data da venda do
carro mais caro da lista. A função deve obedecer à seguinte definição:
void carroMaisCaro ( Carro l i s t a [ ] , int n )*/

#include <iostream>
#include <string>

using namespace std;

class dataVenda {
public:
    int dia;
    int mes;
    int ano;

    dataVenda() {
        dia = 0;
        mes = 0;
        ano = 0;
    }

    void setDia(int dia) {
        this->dia = dia;
    }

    void setMes(int mes) {
        this->mes = mes;
    }

    void setAno(int ano) {
        this->ano = ano;
    }

    int getDia() {
        return dia;
    }

    int getMes() {
        return mes;
    }

    int getAno() {
        return ano;
    }
};

class Carro {
public:
    string modelo;
    string marca;
    int anoFabricacao;
    float preco;
    dataVenda dataVenda;

    Carro() {
        modelo = "Desconhecido";
        marca = "Desconhecido";
        anoFabricacao = 0;
        preco = 0;
    }

    void setModelo(string modelo) {
        this->modelo = modelo;
    }

    void setMarca(string marca) {
        this->marca = marca;
    }

    void setAnoFabricacao(int anoFabricacao) {
        this->anoFabricacao = anoFabricacao;
    }

    void setPreco(float preco) {
        this->preco = preco;
    }

    string getModelo() {
        return modelo;
    }

    string getMarca() {
        return marca;
    }

    int getAnoFabricacao() {
        return anoFabricacao;
    }

    float getPreco() {
        return preco;
    }

    void setdataVenda(int dia, int mes, int ano) {
        dataVenda.setDia(dia);
        dataVenda.setMes(mes);
        dataVenda.setAno(ano);
    }

    int getdataVendaDia() {
        return dataVenda.dia;
    }

    int getdataVendaMes() {
        return dataVenda.mes;
    }

    int getdataVendaAno() {
        return dataVenda.ano;
    }
};

// Função para encontrar e exibir o carro mais caro
void carroMaisCaro(Carro lista[], int n) {
    if (n == 0) {
        cout << "Nenhum carro cadastrado." << endl;
        return;
    }

    int indiceMaisCaro = 0;
    for (int i = 1; i < n; i++) {
        if (lista[i].preco > lista[indiceMaisCaro].preco) {
            indiceMaisCaro = i;
        }
    }

    cout << "\n--- Carro Mais Caro ---" << endl;
    cout << "Modelo: " << lista[indiceMaisCaro].modelo << endl;
    cout << "Marca: " << lista[indiceMaisCaro].marca << endl;
    cout << "Ano de Fabricacao: " << lista[indiceMaisCaro].anoFabricacao << endl;
    cout << "Preco: R$ " << lista[indiceMaisCaro].preco << endl;
    cout << "Data da Venda: "
         << lista[indiceMaisCaro].dataVenda.dia << "/"
         << lista[indiceMaisCaro].dataVenda.mes << "/"
         << lista[indiceMaisCaro].dataVenda.ano << endl;
}

int main() {
    cout << "Digite o numero de carros: ";
    int n;
    cin >> n;

    Carro* lista = new Carro[n];

    for (int i = 0; i < n; i++) {
        cout << "Digite dados do carro" << i + 1 << " : " << endl;

        cout << " Modelo : ";
        cin >> ws; // Limpa o buffer
        getline(cin, lista[i].modelo);

        cout << "Marca : ";
        getline(cin, lista[i].marca);

        cout << "Ano de fabricacao: ";
        cin >> lista[i].anoFabricacao;

        cout << " Preco : ";
        cin >> lista[i].preco;

        cout << "Data da venda (dia mes ano): ";
        cin >> lista[i].dataVenda.dia >> lista[i].dataVenda.mes >> lista[i].dataVenda.ano;
    }

    carroMaisCaro(lista, n);

    delete[] lista;
    return 0;
}
