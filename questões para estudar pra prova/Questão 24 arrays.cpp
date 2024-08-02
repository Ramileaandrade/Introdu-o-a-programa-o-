#include <iostream>
using namespace std;
int main(){
	int dados[10]= {3,1,2,5,21,5,2,2,1,5};
	int posicao, valor;
	
	cout<<"Qual o novo valor?";
	cin>>valor;
	cout<<"Informe uma posicao: [1-10]";
	cin>>posicao;
	dados[posicao-1]= valor;
	
	for(int i = 0; i <10; i++){
		cout<<i+1<<"posicao ="<<dados[i]<<endl;
	}
	
	return 0;
}
