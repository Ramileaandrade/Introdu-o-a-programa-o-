#include <iostream>
#include <clocale>
using namespace std;

int main(){
	int ano, resto;
	setlocale(LC_ALL, "Portuguese");
	cout<<"Informe um ano:";
	cin>>ano;
	resto = ano % 4;
	if (resto ==0){
		cout<<"Ano Bissexto";
	}else{
		cout<<"Não é um ano bissexto";
	}
	
	return 0;
}
