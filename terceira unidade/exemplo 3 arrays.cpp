#include <iostream>
using namespace std;
int main() {
	int dados[10];
	for (int i=0; i<10; i++){
		dados[i] = 9-i;
	} 
	
	for (int i=0; i<10; i++){
		cout<<dados[i]<<endl;
	}
	return 0;
}
