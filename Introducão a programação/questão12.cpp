#include <iostream>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	int num1, num2, num3;
	cout<<"Informe o primeiro n�mero:";
	cin>>num1;
	cout<<"Informe o segundo n�mero:";
	cin>>num2;
	cout<<"Informe o terceiro n�mero:";
	cin>>num3;

	if (num1 <= num2 && num2 <= num3){
		cout<<"Est�o em ordem crescente"; 
		
	elseif (num1 >= num2 && num2 >= num3){
}
		cout<<"Est�o em ordem decrescente";
    }else{
    	cout<<"Est�o fora de ordem";
}
	return 0;
}
