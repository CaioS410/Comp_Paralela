/*1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. Ao final da leitura 
o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.*/

#include <iostream>

using namespace std;

int main() {
  int menor;
  int matriz[3][3] = {{10,2,3},{4,5,6},{7,8,9}};
  for(int i=0;i<3;i++){
   for(int j=0;j<3;j++){
     cout<<matriz[i][j]<<" ";
     if(j==0 && i==0)
       menor = matriz[i][j];
     else{
       if(matriz[i][j]<menor)
         menor = matriz[i][j];
     }
   }
  cout<<"\n";
  }
  cout<<"Menor valor: "<<menor;
}

