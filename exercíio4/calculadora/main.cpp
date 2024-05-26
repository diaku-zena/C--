#include <iostream>

using namespace std;

int main()
{
    float N1, N2;
   float resultado;
   char op;
    cout << "Digite o primeiro numero:" << endl;
    cin >> N1;
    cout << "Digite o segundo numero:\n";
    cin >> N2;
    cout << "****OPERACOES****\n";
    cout<<"+: Soma\n";
    cout<<"-: Subtraca\n";
    cout<<"*: Multiplicacao\n";
    cout<<"/: Divisao\n";
    cout<<"Escolha uma Operacao: ";
    cin>>op;
    switch (op){
        case '+':
            resultado=(N1+N2);
            break;
        case '-':
            resultado=(N1-N2);
            break;
        case '*':
            resultado= N1*N2;
            break;
        case '/':
            resultado= N1/N2;
            break;
    cout<<"Resultado: "<<resultado<<endl;
            default:
    cout<<"Operacao invalida, escolha apenas as operacoes citadas.\n\n";
    }
    return 0;
}
