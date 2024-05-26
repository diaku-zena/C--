#include <iostream>

using namespace std;

int main()
{
   float val, i, cont;
   cont=0;
   for(i=0; i<5; i++){
        cout << "digite o" <<" valor "<< endl;
        cin >> val;
            if(val < 0){
                    cont++;
            }
   }
    cout << "os numeros negativos sao :"<< cont<< endl;
    return 0;
}
