#include <iostream>
#include <locale>
using namespace std;
int main() {
setlocale(LC_ALL, "Portuguese");
	float valor1, valor2, media;
	cout<<"Digite um valor:";
	cin>>valor1;
	cout<<"Digite outro valor:";
	cin>>valor2;
	media = (valor1 + valor2)/2;
	cout<<"A média é:"<< media;
	return 0;
}

 
