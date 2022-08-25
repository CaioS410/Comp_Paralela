/* 12. Faça uma função que retorne a posição de um dado caracter dentro de uma string.*/

#include <iostream>

using namespace std;

#define len 100

void buscarChar(char string[len], char letra)
{
  cout<< "O caracter "<<letra<<" se econtra em\n";
  for (int i = 0; i < len; i++)
    {
      if (string[i] == letra)
        cout << i << endl;
    }
}

int main(){
  char string[len];
  char letra;
  
  cout<<"String: ";
  cin>>string;
  
  cout<<"Encontrar caracter: ";
  cin>>letra;
  
  buscarChar(string,letra);
}