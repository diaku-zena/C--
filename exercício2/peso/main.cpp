#include <iostream>

using namespace std;

int main()
{
 int sexo;
 float ALTURA;
 int PESO;

    cout << " Digite o seu sexo 1/F e 2/M" << endl;
    cin >> sexo;
    cout << "Digite a sua altura"<< endl;
    cin >>ALTURA;
    if (sexo==1){
        PESO=(62.1*ALTURA)-44.7;
    }
    if (sexo==2){
        PESO=(72.7*ALTURA)-58;
    }
    cout <<"o seu peso e :"<<PESO;
    return 0;

