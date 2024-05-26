#include <iostream>

using namespace std;

int main()
{
    char categoria;
    int horas;
    float salario;
    cout << "Digite o numero de horas trabalhadas!" << endl;
    cin >> horas;
    cout << "Digite a sua categoria" << endl;
    cin >> categoria;
    if (categoria = 'A'){
        salario = 5000;
    }
    if(categoria= 'B') {
            salario=4000;

    }
    cout<<"salario =:" << salario <<endl;
    return 0;
}
