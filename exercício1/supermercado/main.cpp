#include <iostream>

using namespace std;

int main()
{
int N, L, B;
float Q,P,T, TOTALP, TOTALS;

    cout << "Digite o numero de latas de Nescau:" << endl;
    cin >> N;
    cout << "digite o seu custo:" << endl;
    cin >> Q;
    cout << "digite  o numero de Latas de Leite:" << endl;
    cin >> L;
    cout << "digite o seu custo:" << endl;
    cin >> P;
    cout <<"digite o numero de quilos de bananas:" << endl;
    cin >> B;
    cout << "digite o seu custo:" << endl;
    cin >> T;
    TOTALP = N*Q;
    cout << "o total gasto com as latas de Nescau e:"<< TOTALP << endl;
    TOTALP = L*P;
    cout << "o total gasto com as latas de Leite e:"<< TOTALP << endl;
    TOTALP = B*T;
    cout <6< "o total gasto com os quilos de bananas e:"<< TOTALP << endl;
    TOTALS = N*Q+L*P+B*T;

    cout << "o total gasto pelo mercado e:"<< TOTALS << endl;

    return 0;
}
