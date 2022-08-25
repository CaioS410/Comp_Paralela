/*13. Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.*/

#include <iostream>

using namespace std;

#define len 100

void removerChar(char string[len], char letra)
{
  for (int i = 0; i < len; i++)
    {
      if (string[i] == letra)
      {
        for(int j = i; j < len; j++)
          string[j] = string[j+1];
      }
    }
  cout<<string;
}

int main(){
  char string[len];
  char letra;
  
  cout<<"String: ";
  cin>>string;
  
  cout<<"Remover caracter: ";
  cin>>letra;
  
  removerChar(string,letra);
}