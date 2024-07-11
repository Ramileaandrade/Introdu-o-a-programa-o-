#include <iostream>
#include <clocale>
using namespace std;
int main (){
	setlocale(LC_ALL,"Portuguese");
	int mes, ano;
	cout<<"Informe o mês:";
	cin>>mes;
	
	cout<<"Informe o ano:";
	cin>>ano;
	
	if(mes == 1|| mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes ==12){
		cout<<"31 dias";
	}else{
		if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
			cout<<"30 dias"
		}else{ //mes 2
		if(ano % 4 == 0){
			cout<<"29 dias";
		}else{
		}
		}
			
		
	}
}
