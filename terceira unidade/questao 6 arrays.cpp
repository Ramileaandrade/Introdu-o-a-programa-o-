#include <iostream>
using namespace std;
int main() {
	int soma;
	soma = 0;
	int dados[10]= {23,12,8,1,5,-4,-22,11,-14};
	for (int i=0; i<10; i++){
			soma = soma + dados[i];
		}
		cout<<"A soma e:"<<soma<<endl;
		
		
	return 0;
}
