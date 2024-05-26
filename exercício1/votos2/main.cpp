#include <iostream>

using namespace std;

int main()
{
    int vtb, vtn, vtv;
    int pvb, pvn, pvv;
    cout << "digite o numero dos votos brancos:" << endl;
    cin >> vtb;
    cout << "digite o numero dos votos nulos:" << endl;
    cin >> vtn;
    cout << "digite o numero dos votos validos:" << endl;
    cin >> vtv;
    pvb=(vtb)/100;
    pvn=(vtn)/100;
    pvv=(vtv)/100;
    cout << "mostrando o percentual dos votos brancos:"<< pvb << endl;
    cout << "o percentual dos votos nulos:" << pvn <<endl;
    cout << "e para o percentual dos votos validos temos :" << pvv << endl;
    return 0;
}
