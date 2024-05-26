#include <iostream>

using namespace std;

int main()
{
    int somatorio=0;
    float n;
    int i;
      for(i=0; i<5; i++){
            cout<< "Escreva os numero!"<<endl;
            cin >> n;
        if(n<0){
            somatorio++;
        }
    }
    cout<<"negativos sao:"<< somatorio <<endl;
    return 0;
}
