#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
float b;
cout <<"digite o valor :"<<endl;
cin >> b;

if (b/2==0) {
cout << "o numero e par "<< endl;
}
else{
cout <<"o numero e impar"<< endl;
}
if (b>0){
cout << "o numero e positivo "<< endl;
}
else{
cout << " o valor e impar e negativo "<< endl;
}
return 0;
}
