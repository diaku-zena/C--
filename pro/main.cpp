#include <iostream>

using namespace std;

int main()
{
    float salario;
    int horas;
    char categoria;
    cout << "Digite a sua categoria" << endl;
    cin >> categoria;
    cout <<"Digite as horas trabalhadas"<<endl;
    cin >> horas;
    switch (categoria){
    case 'A':
    salario = 5000*horas;
    break;
    case 'B':
    salario = 4000*horas;
    break;
    case 'C':
    salario = 3000*horas;
    break;
    }
    cout << "slario =" << salario <<endl;
    return 0;
}
