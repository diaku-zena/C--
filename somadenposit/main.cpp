#include <iostream>
// Faça um programa que leia 100 números inteiros e calcule o somatório dos números positivos

using namespace std;

int main()
{
    int n, i, somatorio=0;
    for(i=0; i<10; i++){
        cout << "digite os numeros positivos"<<endl;
        cin>>n;
        if(n>0){
            somatorio++;
        }
    }
    cout << "o somatorio e " <<somatorio << endl;
    return 0;
}
