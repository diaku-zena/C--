#include <iostream>

using namespace std;

int main()
{
    int n, valor, cont;
     cout <<"ler?\n" <<endl;
        cin >>n;
        int vetor[n];
        for (cont=0; cont<n; cont++)
        {
            cout << "digite o " <<(cont +1)<<"º"<< valor;
           cin>> vetor[cont];
        }
     for(int i=0; i<n; i++)
        cout<<"   " << vetor[i] << "    " << (vetor[i]*vetor[i]) << endl;



    return 0;
}

