#include <iostream>
/* Algoritmo Médias. Dada uma classe de 10 alunos e 3 provas por aluno, calcular e imprimir a média de cada aluno */ #include <iostream>
using namespace std;
int main()
{ const int ALUNOS=4, PROVAS=3;
int i,j;
float notas[ALUNOS+1][PROVAS+1], media[ALUNOS+1];
// Leitura da matriz de 10 alunos x 3 provas
for(i=1; i<=ALUNOS; i++)
for(j=1; j<=PROVAS; j++)
{ cout << "Aluno " << i << " Prova " << j<< endl;
cin >> notas[i][j];
}
// Cálculo da média
for(i=1; i<=ALUNOS; i++) // para cada aluno
{ media[i] = 0.0;
for(j=1; j<=PROVAS; j++) // para cada nota
media[i] = media[i] + notas[i][j];
media[i] = media[i] / PROVAS;
}
for(i=1; i<=ALUNOS; i++) // Impressão de resultados
cout << "Aluno " << i << " Media = " << media[i] << endl;
    return 0;
}
