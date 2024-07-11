#include <iostream>
#include <clocale>
using namespace std;
int main () {
	setlocale(LC_ALL,"Portuguese");
	float investimento;
	cout<<"Informe um valor para investimento:";
	cin>>investimento;
	
	if (investimento > 10000){
	
		cout<<"Investimento Alto:";	
	}
	else{
	}
		cout<<"Investimento Baixo:";			
		
	return 0;
}
