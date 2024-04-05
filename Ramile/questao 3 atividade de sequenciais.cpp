#include <iostream>
#include <locale>
using namespace std;
int main() {
setlocale(LC_ALL, "Portuguese");

    float valor1, valor2, valor3, media;
    cout<<"Informe o primeiro valor:";
    cin>>valor1;
    cout<<"Informe o segundo valor:";
    cin>>valor2;
    cout<<"informe o terceiro valor";
    cin>>valor3;
    media = (valor1*4 + valor2*7 + valor3*3)/14;
    cout<<"A média ponderada é:" <<media;   
    return 0;
}

        
