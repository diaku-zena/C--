#include <iostream>

using namespace std;

int main()
{
    int maior, menor, n;
    cout << "Digite o numero que deseja ler" << endl;
    cin >> n;
    if (n < menor ){
        menor=menor;
    }
    if (n > maior){
        maior = maior;
    }
    cout << "o maior é" << maior;
    cout << "menor é" << menor;
    return 0;
}
