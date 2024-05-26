#include <iostream>
/*Escrever um algoritmo que leia um conjunto de 50 informações contendo, cada uma delas, a altura e o sexo(1- mas/2- fem), calcule e mostre o seguinte:
a) a maior e a menor altura da turma; b) a média da altura das mulheres; c) a média da altura da turma*/
using namespace std;
int main(){
    int sexo, i, hm=0, acuh=0;
    float maiorh=0, menorh=300, s, h;
    float mhf=0, mht;
     for (i=1; i<=4; i++){
    cout << "Diginte a sua"<<" "<< i<<" "<< "altura:" << endl;
    cin >> h;
    cout << "Digite o"<< " "<< i <<" "<<"sexo 1- H/2- M:" << endl;
    cin>> sexo;
    acuh+=h;
    if(h<menorh){
        menorh=h;
        }
        if(h>maiorh){
            maiorh=h;
            }
            if(sexo==2){
                s+=h;

            }
   }
   mhf=s/hm;
   mht=acuh/4;
   cout <<" maior ="<< maiorh <<endl;
   cout <<" menor ="<< menorh <<endl;
   cout <<" media da altura F =" << mhf <<endl;
   cout <<" media turma ="<< mht <<endl;
    return 0;
}
