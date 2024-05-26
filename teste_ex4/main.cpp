#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x1, x2, y1, y2, distancia;
    cout << "Digite os valores do primeiro ponto" << endl;
    cin >> x1 >> y1;
    cout << "digite os valores do segundo ponto" << endl;
    cin >> x2 >> y2;
    distancia = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    cout <<"o valor da distância eh :"<< distancia << endl;
    return 0;
}
