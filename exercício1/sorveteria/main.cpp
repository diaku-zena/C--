#include <iostream>

using namespace std;

int main()
{
   float tipo1,tipo2, tipo3;
    float totals, qtvtp1, qtvtp2, qtvtp3;
    cout <<"digite a quantidade do tipo 1:" << endl;
    cin >> tipo1;
    cout << "digite a quantidade do tipo 2"<<endl;
    cin >>tipo2;
    cout <<"digite a quantidade do tipo 3" << endl;
    cin >>tipo3;
        qtvtp1=tipo1*0.5;
        qtvtp2= tipo2*0.6;
        qtvtp3=tipo3*0.1;
    cout <<"a quantidade do tipo 1 e:" << qtvtp1 << endl;
     cout <<"a quantidade do tipo 2 e:" << qtvtp2 << endl;
    cout <<"a quantidade do tipo 3 e:" << qtvtp3 << endl;
    totals = qtvtp1 + qtvtp2 + qtvtp3;
    cout << "quantidade total da sorveteria e:" << totals;
    return 0;
}
