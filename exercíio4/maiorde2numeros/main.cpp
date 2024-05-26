#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Digite o primeiro numero: " << endl;
    cin >> n1;
    cout << "Digite o segundo numero: " << endl;
    cin >> n2;
    if(n1 > n2){
        cout << "o maior numero e: " << n1 << endl;
    }
    if(n2 > n1){
        cout << "o maior e: " << n2 << endl;
    }
    else{
    cout << "nao existe maior entre eles" << endl;
    }
    return 0;
}
