/*4. Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo
 (no exemplo, 9). Este número deve ser sempre ímpar.*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


int main(){
  char nome1[20],nome2[20];

  cout<<"Digite o primeiro nome: ";
  cin>>nome1;
  cout<<"Digite o segundo nome: ";
  cin>>nome2;

  if(strcmp(nome1,nome2) < 0)
  {
    cout<<nome1<<" "<<nome2;
  } else{
    cout<<nome2<<" "<<nome1;
  }
}