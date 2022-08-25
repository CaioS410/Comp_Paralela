/* 6. Crie um programa capaz de criar a transposta de uma matriz. A matriz deve ser lida de teclado.*/

#include <iostream>

using namespace std;

int main(){
  int linhas,colunas;
  cout<<"Número de linhas: ";
  cin>>linhas;
  cout<<"Número de colunas: ";
  cin>>colunas;

  int matriz[linhas][colunas],novaMatriz[colunas][linhas];

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
  
  for (int i = 0; i < colunas; i++)
  {
    for (int j = 0; j < linhas; j++)
      {
        novaMatriz[i][j] = matriz[j][i];
        cout<<"[ "<<novaMatriz[i][j]<<" ] ";
      }
    cout<<"\n";
  }
}