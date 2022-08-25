/*2. Escreva um programa que leia 3 notas de um aluno e a média das notas
 dos exercícios realizados por ele. Calcular a média de aproveitamento, 
usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, 
informar o conceito de acordo com a tabela:*/

#include <iostream> 

using namespace std;

int main() {
  double n1,n2,n3,me;
  double media;
  char nota;
  
  cout<<"Nota 1: ";
  cin >> n1;
  cout<<"Nota 2: ";
  cin >> n2;
  cout<<"Nota 3: ";
  cin >> n3;
  cout<<"Média Exercicios: ";
  cin >> me;

  media = (n1 + n2*2 + n3*3 + me)/7;

  if(media<4)
    nota = 'D';
  if(media >= 4 && media < 6)
    nota = 'E';
  if(media >= 6 && media < 7.5)
    nota = 'C';
  if(media >= 7.5 && media < 9)
    nota = 'B';
  if(media >= 9 )
    nota = 'A';
  cout<<"Média: "<< media <<"\n";
  cout<<"Nota: "<< nota;
}