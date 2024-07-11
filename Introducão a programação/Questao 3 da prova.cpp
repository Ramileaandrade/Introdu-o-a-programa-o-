#include <iostream>
#include <clocale>

using namespace std;

 int main() {
 int inicio, fim, soma;

  cout<<"Informe o valor inicial:";
  cin>>inicio;
  cout<<"Informe o valor final:";
  cin>>fim;
   //se inicio for impar, comeca do proximo numero
  if (inicio % 2 == 1) {
  inicio++;
}
  soma = 0;
  for (int i = inicio; i <= fim; i = i + 2) {
  soma = soma + i;
}
  cout<<"A soma dos pares entre numeros informados e:"<<soma;
 return 0;
}

