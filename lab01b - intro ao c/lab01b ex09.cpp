/* 9. Crie uma função capaz de substituir todos os números negativos de uma matriz por seu módulo.*/
#include <iostream>

#define maxLinhas 20
#define maxColunas 20

using namespace std;

int transposta(int matriz[20][20],int linhas,int colunas)
{
  int novaMatriz[colunas][linhas];
  
  for (int i = 0; i < colunas; i++)
  {
    for (int j = 0; j < linhas; j++)
      {
        novaMatriz[i][j] = matriz[j][i];
        cout<<"[ "<<novaMatriz[j][i]<<" ] ";
      }
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
  
  transposta(matriz,linhas,colunas);
}
