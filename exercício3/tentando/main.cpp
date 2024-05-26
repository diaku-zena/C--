#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Ano ->" << endl;
    cin >> year;
    if (year%400 == 0 && year%4==0 && year%100!=0)
    cout << "E" << endl;
    else
    cout << "Nao e" << endl;
    cout << "Um ano bissexto." << endl;
    return 0;
}
