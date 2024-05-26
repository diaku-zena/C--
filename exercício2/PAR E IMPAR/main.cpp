#include <iostream>

using namespace std;

int main()
{
  int A;
    cout << "DIGITE UM NUMERO" << endl;
    cin >> A;
    if (A%2==0){
    cout <<"o numero e par" << endl;
    }
    else {
        cout << "o numero e impar" << endl;
    }
    if (A>0) {
    cout << "e numero e positivo" << endl;
    }
    if (A<0) {
        cout << "e numero e negativo" << endl;
    }
    return 0;
}
