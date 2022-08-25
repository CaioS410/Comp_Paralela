/* 11. Crie uma função capaz de somar os elementos das linhas L1 e L2 de uma matriz. O resultado deve ser colocado na linha L2. Faça o mesmo com a multiplicação.*/
#include <iostream>

using namespace std;

#define maxlinhas 20
#define maxcolunas 20

void somarLinha(int matriz[maxlinhas][maxcolunas],int linhas,int colunas)
{
  int linha1,linha2;
  cout<<"Somar linhas: \n";
  cin>>linha1>>linha2;

  for (int i = 0; i < colunas;i++)
    {
      matriz[linha2][i] = matriz[linha1][i] + matriz[linha2][i];
    }
  
  for(int i = 0; i < linhas; i++)
  {
    for(int j = 0; j < colunas; j++)
      cout<<"[ "<<matriz[i][j]<<" ] ";
    cout<<"\n";
  }
}

void multiplicarLinha(int matriz[maxlinhas][maxcolunas],int linhas,int colunas)
{
  int linha1,linha2;
  cout<<"Somar linhas: ";
  cin>>linha1>>linha2;

  for (int i = 0; i < colunas;i++)
    {
      matriz[linha2][i] = matriz[linha1][i] * matriz[linha2][i];
    }
  
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

  int matriz[maxlinhas][maxcolunas];

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

  int opcao;
  cout<<"Somar ou Multiplicar [ 0 / 1 ]: ";
  cin>>opcao;

  if (opcao == 0)
    somarLinha(matriz,linhas,colunas);
  if (opcao == 1)
    multiplicarLinha(matriz,linhas,colunas);
  
  
}