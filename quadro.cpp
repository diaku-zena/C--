#include <iostream>

using namespace std;

int main()
{
    int  n, reserva, vetor[n], cont;
    cout << "Quantos numeros deseja ler?" << endl;
    cin >> n;

    for (cont=0; cont<n; cont++){
        cout << "digite os valores que deseja ler";
           cin>> vetor[cont];
    }
    for (int i=0; i<n; i++)
        cout << ""<< vetor[i] << "" << (vetor[i]*vetor[i]) <<endl;

    return 0;
}
