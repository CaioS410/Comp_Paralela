/*3. Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo
 (no exemplo, 9). Este número deve ser sempre ímpar.*/

#include <iostream>
using namespace std;

int main() {
  int max;
  cout<<"Número Máximo: ";
  cin>>max;

  for(int i=0; i<=(max)/2; i++){
    for (int j =1; j<max+1; j++){
      if(j<=i || j>=max-i+1){
        cout<<"  ";
    } else {
      cout<<j<<" ";
    }
  }
  cout<<"\n";
  }
}
