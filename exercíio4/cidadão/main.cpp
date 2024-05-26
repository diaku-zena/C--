#include <iostream>

using namespace std;

int main()
{
    int idade;
   ///idade= 18 || 50;
    //idade=16 || 18;
    //idade=16;
    cout << "didite a sua idade:" << endl;
    cin >> idade;
    cout << "[1]-18 a 50, [2]-16 a 18, [3]-16\n";
     switch (idade):
     case 1:
     cout << "voto obrigatorio\n\n";
     break;
     case 2:
        cout << "oto opcional\n";
        break;
     case 3:
        cout << "nao pode votar\n";
        break;
        default;
    return 0;
}
