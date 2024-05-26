#include <iostream>

using namespace std;

int main()
{
  int idade;
    cout << "digite a sua idade" << endl;
    cin >> idade;
   switch (idade){
   case 1:
    cout << "InfantilA\n";
    break;
   case 2:
    cout << "InfantilB\b";
    break;
   case 3:
    cout << "JuvenilA\n";
    break;
   case 4:
    cout << "JuvebilB\n";
    default:
    cout << "operacao invalida";
   }

    return 0;
}
