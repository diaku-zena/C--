/* Algoritmo Maior2. Para um vetor A de n números reais, determina o maior elemento de A bem como seu índice.
*/
#include <iostream>
using namespace std;
int main()
{ int i,n;
float maior, A[101];
cout << "Digite o numero de elementos: ";
cin >> n;
for(i=1; i<=n; i++) // Ler elementos do vetor
{ cout << "Digite o numero [" << i << "]=";
cin >> A[i];
}

// Procurar maior do 2 elemento em diante
for(i=2; i<=n; i++)
if(A[i] > A[n])
maior = i;
maior = A[n];
cout << "Maior numero e = "<< maior << endl;
return 0;
}
