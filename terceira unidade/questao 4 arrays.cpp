#include <iostream>
using namespace std;
int main() {
	int maior, menor;
	maior = -1000000;
	menor = 1000000;
	int dados[10]= {23,12,8,1,5,-4,-22,11,-14};
	for (int i=0; i<10; i++){
		if (dados[i] < menor){
			menor = dados[i];
		}
		if(dados[i]> maior){
			maior = dados[i];
		}
		
	} 
	cout<<"O maior é:"<<maior<<endl;
	cout<<"O menor é:"<<menor<<endl;
	
	
	return 0;
}
