#include <iostream>
using namespace std;
int main(){
	
	int a[] = {-1,0,5,34,-23,31,-17};
	int b[] = {67,23,12,53};
	int c[11];
	
	for(int i = 0; i < 7; i++){
		c[i] = a[i];
		
    }
    
    for(int i = 7; i < 11; i++){
		c[i] = b[i-7];
		
    }
    
    for(int i = 0; i < 11; i++){
		cout<<c[i]<<endl;
		
	}
    return 0;
}
