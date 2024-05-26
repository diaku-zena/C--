#include <iostream>

using namespace std;

int main()
{
    int  n, cont;
    cout << "Quantos numeros deseja ler?" << endl;
    cin >> n;
    int vetor[n];
    for (cont=0; cont<n; cont++){
        cout << "digite o " <<cont <<"º"<< "valor\n";
           cin>> vetor[cont];
    }
    for (int i=0; i<n; i++){
        cout <<" numero ="<< "  "<< vetor[i] << "  " <<"quadrado ="<< "  " << vetor[i]*vetor[i] <<endl;
}
    return 0;
}
