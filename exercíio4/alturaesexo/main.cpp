#include <iostream>

using namespace std;

int main()
{
    int idade, sexo;
    float peso, mediaP, sg=0;
    int L[3], l=0;
    do{
        cout << "digite a sua idade"<<endl;
        cin >> idade;
        cout << "digite o seu sexo 0-mas e 1-fem:"<<endl;
        cin >> sexo;
        if(peso==1.70){
            l++;
        }
    }while(int i=0; i<l; i++);

        sg=sg+peso;
    mediaP=sg/3;
    cout <<"a media do peso da turma = " << mediaP;
    return 0;
}
