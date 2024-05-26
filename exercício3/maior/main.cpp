#include <iostream>

using namespace std;

int main{

    int A, B, C, D, E;
    cout << "digite o primeiro numero:";
    cin >> A;
    cout << "digite o segundo numero:";
    cin >> B;
    cout << "digite o terceiro numero:";
    cin >> C;
    cout << "digite o quarto numero:";
    cin >> D;

    if(A>B) && (B<C) {
            cout <<A<< "e maior que" << B << endl;
    }
    if (B>C) && (C<D){
        cout << B <<"e maior que " << C << endl;
    }
    return 0;
}
