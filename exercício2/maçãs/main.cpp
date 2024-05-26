#include <iostream>

using namespace std;

int main()
{
 float numdec;
 float valt;

    cout << "digite o numero de macas compradas ";
    cin >> numdec;
    (numdec <12) ? valt=(numdec*0.30) : valt=(numdec*0.25);

      cout << "o valor total da compras e:" <<valt;

    return 0;
}
