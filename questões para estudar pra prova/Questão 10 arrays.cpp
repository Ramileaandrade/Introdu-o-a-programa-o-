#include <iostream>
using namespace std;
int main(){
	int dados[] = {-1,0,5,34,-23,31,-27};
	for(int i = 0; i < 7; i++)
		cout<<dados[i]<<endl;
    cout<<endl;
		
	for(int i = 0; i < 7; i++){
		if(dados[i] < 0)
		   dados[i] = 0;
	}
	
	for(int i = 0; i < 7; i++)
	   cout<<dados[i]<<endl;
	cout<<endl;
	return 0;   
		

}
