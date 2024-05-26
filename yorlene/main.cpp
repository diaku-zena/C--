#include <iostream>

using namespace std;

int main()
{
    int senha;
    cout << "digite a sua senha" << endl;
    cin>> senha;
    if (senha==12345) {
        cout << "ACESSO PERMITO" <<endl;
    }
    if   (senha!= 12345) {
        cout << "ACESSO NEGADO" << endl;
    }

    return 0;
}
