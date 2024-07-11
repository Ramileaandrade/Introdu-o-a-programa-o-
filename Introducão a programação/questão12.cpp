#include <iostream>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	int num1, num2, num3;
	cout<<"Informe o primeiro número:";
	cin>>num1;
	cout<<"Informe o segundo número:";
	cin>>num2;
	cout<<"Informe o terceiro número:";
	cin>>num3;

	if (num1 <= num2 && num2 <= num3){
		cout<<"Estão em ordem crescente"; 
		
	elseif (num1 >= num2 && num2 >= num3){
}
		cout<<"Estão em ordem decrescente";
    }else{
    	cout<<"Estão fora de ordem";
}
	return 0;
}
