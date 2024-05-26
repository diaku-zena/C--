#include <iostream>

using namespace std;

int main(){
//Definição de caracteres do latim
setlocale(LC_ALL,"PORTUGUESE");
//Declaração da variavel quantiade
int q;
//Pedindo para usuario a quantidade de maçãs
cout << "Vai comprar quantas maçãs: ";
//Recebendo o valor digitado
cin>>q;
//condição para verificar a quantidade
if(q<12) {
cout<<"Total a pagar "<<q*0.30<<"kz";
}else{
cout<<"Total a pagar "<<q*0.25<<"kz";
}

//retorno da função
return 0;
}
