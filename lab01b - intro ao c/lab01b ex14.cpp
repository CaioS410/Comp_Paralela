/*13. Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.*/

#include <iostream>

using namespace std;

#define len 100

void inserirChar(char string[len], char letra,int index)
{
  string[index] = letra;

  cout<< string;
}

int main(){
  char string[len];
  char letra;
  int num;
  
  cout<<"String: ";
  cin>>string;
  
  cout<<"Remover caracter: ";
  cin>>letra;

  cout<<"Posição a ser inserida: ";
  cin>>num;
  
  inserirChar(string,letra,num);
}