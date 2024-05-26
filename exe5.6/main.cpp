#include <iostream>
//Escreva um programa que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado
using namespace std;

int main()
{
    int vetor[5], i, j;
    float maior=0, menor=0;
    for(i=0; i<5; i++){
    cout << "digite os numeros que deseja" << endl;
    cin >> vetor[i];
    }
    for(j=0; j<5; j++){
            if(vetor[j]<menor){
                menor=vetor[j];
            }
            if(vetor[j]>maior){
                maior=vetor[j];
            }
    }
    cout<< "maior =" << maior <<endl;
    cout<< "menor =" << menor <<endl;
    return 0;
}
