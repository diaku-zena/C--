#include <iostream>

using namespace std;

int main()
{
    int valorsm, precobclt, bcltvdas, qtfun;
    int salfun;
    int total=0;
    int lucro=0;
    cout << "Digite o valor do salario minimo" << endl;
    cin >> valorsm;
    cout << "Digite o preço da bicicleta\n";
    cin >> precobclt;
    cout << "Digite o numero de bicicletas vendidas\n";
    cin >> bcltvdas;
    cout << "Digite o numero de funcionarios\n";
    cin >> qtfun;
    total=bcltvdas *(precobclt+precobclt*0.5);
    salfun=qtfun*(valorsm*2);
    lucro=total-salfun;
    cout << "O lucro da loja e:" << lucro <<endl;
    return 0;
}
