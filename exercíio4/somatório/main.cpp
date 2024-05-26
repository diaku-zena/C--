#include <iostream>

using namespace std;

int main()
{
    int vetor[5];
    int i, str;
    str=0;
    for(i=0; i<5; i++){
        cout << "digite o" << i <<" numero:" << endl;
        cin >> vetor [i];

            if(vetor[i]>0){
            str=str+vetor[i];
            }
    }
        cout << "o somatorio dos numeros positios e " << str << endl;



    return 0;
}
