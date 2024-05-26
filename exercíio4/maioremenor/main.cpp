#include <iostream>

using namespace std;

int main()
{
       int i, L[5];
        float A, a;

    for(i=0; i<5; i++){
        cout << "Digite o" << i << "º numero\n";
        cin >> L[i];
    }
   a=L[0];
    A=L[0];
    for(int l=1; l<5; l++){
        if(L[l] < a){
        a=L[l];
        }
      if(L[l] > A)
        A=L[l];
    }
    cout << " maior e:" << A <<endl;
    cout << "menor e:" << a <<endl;

    return 0;
}
