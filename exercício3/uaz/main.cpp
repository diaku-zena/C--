#include <iostream>

using namespace std;

int main(){
//Defini��o de caracteres do latim
setlocale(LC_ALL,"PORTUGUESE");
//Declara��o da variavel quantiade
int q;
//Pedindo para usuario a quantidade de ma��s
cout << "Vai comprar quantas ma��s: ";
//Recebendo o valor digitado
cin>>q;
//condi��o para verificar a quantidade
if(q<12) {
cout<<"Total a pagar "<<q*0.30<<"kz";
}else{
cout<<"Total a pagar "<<q*0.25<<"kz";
}

//retorno da fun��o
return 0;
}
