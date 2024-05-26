#include <iostream>

using namespace std;

int main()
{
   int a,b,c;
   int med;
    cout << "digete os num" << endl;
    cin >> a;
    cin>> b;
    cin>> c;
    med=(a+b+c)/3;
    if (med>14)
        cout << "a media e" <<med << endl;

    return 0;
}
