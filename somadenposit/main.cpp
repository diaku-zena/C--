#include <iostream>
// Fa�a um programa que leia 100 n�meros inteiros e calcule o somat�rio dos n�meros positivos

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
