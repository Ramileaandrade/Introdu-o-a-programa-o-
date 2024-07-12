#include<iostream>
using namespace std;
int main(){
	int idade;
	float peso;
	cout<<"Informe a idade:";
	cin>>idade;
	cout<<"Informe o peso";
	cin>>peso;
	if (idade >= 12){
		if(peso>=60){
			cout<<"40 gotas";
		}else{
			cout<<"30 gotas";
		}
	}else {
		cout<<(int)peso/2;
	}
	return 0;
}
