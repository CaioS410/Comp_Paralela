/* 5 Crie um programa capaz de multiplicar uma linha de uma matriz de inteiros
por um dado número. Faca o mesmo para uma coluna. A matriz deve ser lida de
teclado.*/

#include <iostream>

using namespace std;

#define maxLinhas 20
#define maxColunas 20

int multiplicarLinha(int matriz[maxLinhas][maxColunas],int linhas, int colunas)
{
  int num,multlinha;
  cout<<"Multiplicador: ";
  cin>>num;
  cout<<"Multiplicar linha: ";
  cin>>multlinha;

  for (int i=0; i < colunas; i++)
    matriz[multlinha][i] = matriz[multlinha][i]*num;

  for(int i = 0; i < linhas; i++)
  {
    for(int j = 0; j < colunas; j++)
      cout<<"[ "<<matriz[i][j]<<" ] ";
    cout<<"\n";
  }
}

int main(){
  int linhas,colunas;
  cout<<"Número de linhas: ";
  cin>>linhas;
  cout<<"Número de colunas: ";
  cin>>colunas;

  int matriz[maxLinhas][maxColunas];

  for(int i = 0; i < linhas; i++)
    for(int j = 0; j < colunas; j++)
      {
        cout<<"matriz ["<<i<<"]["<<j<<"]: ";
        cin>>matriz[i][j];
      }
  
  for(int i = 0; i < linhas; i++)
  {
    for(int j = 0; j < colunas; j++)
      cout<<"[ "<<matriz[i][j]<<" ] ";
    cout<<"\n";
  }
  cout<<"\n\n";
  multiplicarLinha(matriz,linhas,colunas);
}