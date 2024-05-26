#include <iostream>
/* Faça um algoritmo que leia uma quantidade não determinada de números positivos.
Calcule a quantidade de números pares e ímpares, a média de valores pares e a média geral dos números lidos. */

using namespace std;

int main()
{
    int np, qtp, qti;
    float mvp, mgnl;
    qtp=0,qti=0, mvp=0, mgnl=0;
     cout<< "digite os seus numeros positivos\n";
    cin >> np;
    for(int i=0; i<np; i++){

    if(np%2==0){
        qtp++;
    }
    else{
        qti++;
    }

    }
    cout << "par" << qtp<< endl;
    cout << "impar" << qti <<endl;
    return 0;
}
