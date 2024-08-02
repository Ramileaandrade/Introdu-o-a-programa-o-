#include <iostream>
using namespace std;
int main(){
	
	int dados[] = {-1,0,5,34,-23,31,-17};
	int soma = 0;
	for(int i = 0; i < 7; i++)
	   soma = soma + dados[i];
	
	cout<<"A media e:"<<soma/7.0<<endl;
	return 0;  
}

	
