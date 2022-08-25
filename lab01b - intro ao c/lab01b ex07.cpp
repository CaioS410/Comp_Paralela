/* 7. Faça um programa que crie um vetor de pessoas. Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct. O programa deve permitir que o usuário digite o nome de 3 pessoas e a seguir imprimi os dados de todas as pessoas. A struct deve armazenar os dados de idade, peso e altura.*/

#include <iostream>

using namespace std;

struct pessoa {
  string nome;
  int idade;
  double peso;
  double altura;
};

int main(){
  pessoa pessoas[3];

  for (int i = 0; i < 3; i++)
    {
      cout<<"Pessoa "<<i+1<<endl;
      cout<<"Nome: ";
      cin>>pessoas[i].nome;
      cout<<"Idade: ";
      cin>>pessoas[i].idade;
      cout<<"Altura: ";
      cin>>pessoas[i].altura;
      cout<<"Peso: ";
      cin>>pessoas[i].peso;
      cout<<"\n\n";
    }

  for (int i = 0; i < 3; i++)
    {
      cout<<"Nome: "<<pessoas[i].nome<<endl;
      cout<<"Idade: "<<pessoas[i].idade<<endl;
      cout<<"Altura: "<<pessoas[i].altura<<endl;
      cout<<"Peso: "<<pessoas[i].peso<<"\n\n";
      
    }
}