#include <iostream>
#include <clocale>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float valor;
	cout<<"Informe um valor para investimento";
	cin>>valor;
	if(valor > 1000){
		cout<<"Investimento Alto";
		
	}else{
	
	    cout<<"Investimento Baixo"
	}

		
		
	
	return 0;
}
