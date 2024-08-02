#include <iostream>
using namespace std;
int main(){
	int dados[10];
	
	for(int i = 0; i< 10; i++){
		cout<<"Informe um valor:";
		cin>>dados[i];
	}
	
	for(int i = 0; i <10; i++){
		cout<<i+1<<"posicao ="<<dados[i]<<endl;
	}
	
	return 0;
}
