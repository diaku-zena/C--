#include <iostream>

using namespace std;

int main()
{
    char sexo;
    int idade, i, salario, qts=0, s=0, st=0;
    float mediasl, maiorI=0, menorI=INT_MAX;
    for(i=0; i<4; i++){
        cout << "digite a sua idade:" << endl;
        cin >> idade;
        cout << "digite o seu sexo 1-[f] e 2-[m]\n";
        cin >> sexo;
        cout << "digite o seu salario\n";
        cin >> salario;
        if(idade > maiorI){
            maiorI=idade;
        }
        if(idade < menorI){
            menorI=idade;
        }
        if(sexo=='f'&& salario==200){
            st++;
            qts=qts+st;
        }
        s=s+salario;
        mediasl=s/4;
    }
    cout << "media do salario:" << mediasl << endl;
     cout << "maior idade:" << maiorI <<endl <<"menor idade:" << menorI << endl;
      cout << "quantidade de mulheres com salario de 200kz:" <<qts<< endl;


    return 0;
}
