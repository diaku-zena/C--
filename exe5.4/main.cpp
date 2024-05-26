#include <iostream>
//Escrever um programa que gera e escreve os números ímpares entre 100 e 200.
using namespace std;

int main()
{
    int n;
     n=100;
    while(n<200){
        n++;
        if(n%2!=0)
        cout<<n<<endl;

}
    return 0;
}
