#include <iostream>
/* Fa�a um algoritmo que leia uma quantidade n�o determinada de n�meros positivos.
Calcule a quantidade de n�meros pares e �mpares, a m�dia de valores pares e a m�dia geral dos n�meros lidos. */

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
