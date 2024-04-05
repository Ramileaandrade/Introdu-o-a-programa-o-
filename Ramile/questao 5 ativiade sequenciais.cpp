#include <iostream>
#include <locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Portuguese");
	float a,b, temp;
	cout<<"Digite o valor de a";
	cin>>a;
	cout<<"Digite o valor de b";
	cin>>b;
	cout<<a<<" "<<b<<endl;
	temp = a;
	a=b;
	b=temp;
	cout<<a<<" "<<b;
	return 0;
	
	
}
