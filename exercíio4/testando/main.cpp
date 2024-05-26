#include <iostream>
using namespace std;
int main(){
int cor, nu, ops;
nu=20;
cout<<"digite o num a sua escolha:";
cin>>nu;
if(nu>20 && nu<30){
    cout << "aceite"<< endl;}
    else {
        cout << "nao aceite";}
        cout <<"deseja continuar? [1] nao e [2] sim\n";
        cin>>ops;
        cout << "escolha a sua cor\n";
        cout <<"(1 2)-azul, (3 4)-preto\n";
        cin >>cor;
switch (cor){
case 1:
case 2:
cout <<"cor seleccionada azul\n";
break;
case 3:
case 4:
cout <<"cor seleccionada preto\n";
break;
default:
cout <<"operação invalida\n";
}
cout <<"fim do ciclo";
    return 0;
}
