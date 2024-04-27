#include <iostream>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	int valor, resto;
	cout<<"Informe o valor";
	cin>>valor;
	resto = valor % 2;
	if (resto == 0){
		cout<<"Par";
	}else{
		cout<<"Impar";
	}
	return 0;
	
	
}
