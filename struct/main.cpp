#include <iostream>

using namespace std;

struct Carro{
string nome;
string cor;
int pont;
int velMax;
};

int main()
{
    Carro car1;

    car1.nome="Toyota";
    car1.cor="preto";
    car1.pot=250;
    car1.velMaax=180;

    cout<<"cor.............."<<car1.cor<<endl;
    cout<<"nome............."<<car1.nome<<endl;
    cout<<"potencia........."<<car1.pot<<endl;
    cout<<"velocidade maxima"<<car1.velMax<<endl;

    return 0;
