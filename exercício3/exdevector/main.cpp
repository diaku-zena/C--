/* Algoritmo NotasClasse. Dada uma classe de N >= 1 alunos, este algoritmo l� suas notas, calcula a m�dia da classe e imprime quais os alunos possuem nota
acima da m�dia
*/
#include <iostream>
using namespace std;
int main()
{ float soma, media, nota[101];
int i, N;
cout << "Numero de alunos? ";
cin >> N;
for(i=1; i<=N; i++) // Ler notas dos alunos
{ cout << "Nota do aluno "  << i << "? ";
cin >> nota[i];
}
soma = 0.0; // Calcular a m�dia da classe
for(i=1; i<=N; i++)
soma = soma + nota[i];
media = soma / N;
cout << "Media = " << media << endl;
for(i=1; i<=N; i++) // Alunos com nota > media
if(nota[i] > media)
cout << "Aluno " << i << " Nota = " << nota[i] << endl;
return 0;
}
