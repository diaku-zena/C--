#include <iostream>

using namespace std;

int main()
{
    int matricula;
    float n1, n2, n3;
    float media;
    cout << "Digite o seu numero de matricula:" << endl;
    cin >> matricula;
    cout << "digite as suas tres notas:\n";
    cin >> n1;
    cin >> n2;
    cin >> n3;
    media = (n1+n2+n3)/3;
    cout << "a sua media e:\n";
    cout << media << endl;
    if (media >= 9.0){
    cout << "APROVADO\n";}
    if (media >= 7.5 && media < 9.0){
        cout << "APROVADO\n";}
    if (media >= 6.0 && media < 7.5){
            cout << "APROVADO\n";}
    if (media >= 4.0 && media <6.0){
            cout << "REPROVADO\n";}
    if(media <4.0){
    cout <<"REPROVADO"  << endl;
    }
    return 0;
}
