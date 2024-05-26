#include <iostream>

using namespace std;

int main()
{
    int matricula;
    float media, n1, n2;
    for(int i=0; i<3; i++){
        cout << "Digite sua matricula do" <<"  "<< i <<" º " << "aluno" << endl;
        cin >> matricula;
        cout << "Digite a primeira nota:" << endl;
        cin >> n1;
        cout << "Digite a segunda nota:" <<endl;
        cin >> n2;
    }
        media = (n1+ n2)/2;

        if(media < 4.9){
            cout << "conceito D" <<endl;
        }
        if(media > 5.0 && media < 6.9){
           cout << "conceito C" <<endl;
        }
        if(media > 7.0 && media < 8.9){
          cout << "conceito B" <<endl;
        }
        if(media > 9.0 && media < 10){
            cout << "conceito A" <<endl;
        }
    return 0;
}
