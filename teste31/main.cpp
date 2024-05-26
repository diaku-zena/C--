#include <iostream>
#include <list>
using namespace std;

int main()
{}
void lista;
    list<int> aula;
    int tam;
    tam=10;
    for(int i=0; i<tam; i++){
        aula.insert(4);
      }
       cout << "Hello world!"<<aula.size() << endl;
       tam=aula.size();
    for(int i=0; i<tam; i++){
        cout << "Hello world!"<<aula.size() << endl;
        aula.remove(i);
      }


    return 0;
}
