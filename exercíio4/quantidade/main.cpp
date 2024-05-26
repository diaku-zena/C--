#include <iostream>
using namespace std;

int main()
{
    int n, qtp, qti, sp, sg;
    float mpar, mtovl;
    qtp=0; qti=0;
    sp=0; sg=0; mtovl=0;
    for(int i=0; i<4; i++){
      cout << "digite o iº valor: ";
      cin >> n;
            if(n%2==0){
                qtp++;
                sp=sp+n;
            }

            else
              qti++;
              sg=sg+n;
    }


    mpar=sp/qtp;
    mtovl=sgq/4;
    cout << "quantidade dos pares:"<< qtp << endl;
    cout << "quantidade dos impares:"<<qti<< endl;
    cout << "media dos pares:"<< mpar << endl;
    cout << "media geral:" << mtovl << endl;
    return 0;
}
