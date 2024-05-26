#include <iostream>

using namespace std;

int main()
{
    float n1,n2;
     float res;

    cout << "digite a primeira nota" << endl;
    cin >> n1;
     cout << "digite a segunda nota" << endl;
     cin >> n2;
    res =(n1+n2)/2;
    cout << "resuçtado da media:" << res << endl;
    if (res >= 14){
     cout <<"aluno dispensado" << endl;
    }
    else{
    cout << "aluno nao dispensado" << endl;
    }
    return 0;
}
