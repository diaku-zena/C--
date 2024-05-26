#include <iostream>

using namespace std;

int main()
{
 int numdac, saldo, tipora, valorop;
 int saldonovo;
    cout << "digite o numero da conta" << endl;
    cin >> numdac;
    cout << "digite o seu saldo actual" << endl;
    cin >> saldo;
    cout << "digite o tipoda operacao 1/deposito e 2/retirada" << endl;
    cin >> tipora;
    cout << "digite o valor da operacao" << endl;
    cin >> valorop;
    if (tipora ==1){
      saldonovo = saldo + valorop ;
    cout << "o seu saldo agora e :" << saldonovo << endl;
         }
            if(tipora==2){
            saldonovo = valorop - saldo;
         cout << "o seu saldo actual e  :" << -saldonovo << endl;
         }
    return 0;
}
