#include <iostream>

using namespace std;

int main()
{
    float raio, volume;
    cout << "Digite o raio" << endl;
    cin >> raio;
    volume= (4*3.14*raio*raio*raio)/3;
    cout << "o valor do volume e:" << volume <<endl;
    return 0;
}
