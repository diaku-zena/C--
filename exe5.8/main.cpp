#include <iostream>
 /*Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (1-mas/2-fem) e salário.
 Faça um algoritmo que informe: a) a média de salário do grupo; b) a maior e a menor idade do grupo; c) a quantidade de mulheres com salário até R$ 200.*/
using namespace std;

int main()
{
    int idade, sexo, qtm=0;
    float slr=0, msg;
    float maiorI=0, menorI=0;
    for(int i=0; i<5; i++){
    cout << "Digite a sua idade " << endl;
    cin >> idade;
    cout << "Digite o seu sexo 1/H e 2/M" <<endl;
    cin >> sexo;
    cout<< "digite o seu salario" <<endl;
    cin >>slr;
    if(slr>=200){
        slr++;
    }
    else{
        slr--;
    }
    if(idade>maiorI){
            maiorI=idade;
    }
    if(idade<menorI){
        menorI=idade;
    }
    if(sexo==2 && slr==200){
        qtm++;
    }
    }
    msg=slr/5;
    cout<< "media slr grupo"<< msg <<endl;
    cout<< "maior idade" << maiorI <<endl;
    cout<< "menor idade"<< menorI <<endl;
     cout<< "quantidade de mulheres com salario ate 200?"<< qtm <<endl;
    return 0;
}
