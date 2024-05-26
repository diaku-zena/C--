#include <iostream>

using namespace std;

int main()
{
    float alt, media, malm, mealt;
    char sexo;
    int i, maiorh=0, menorh=0, somatorio=0;
    for(i=0; i<4; i++){
        cout << "ddigite a sua altura:" << endl;
        cin >> alt;
    }
    for(i=0; i<4; i++){
        if (alt < menorh)
            menorh = alt;

            if (alt > maiorh)
                maiorh = alt;
    }
    cout << "maior altura = " << maiorh << endl;
    cout << "menor altura =" << menorh;


    return 0;
}
