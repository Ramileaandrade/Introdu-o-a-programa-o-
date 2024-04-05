#include <iostream>
#include <locale>
using namespace std;
int main() {
setlocale(LC_ALL, "Portuguese");

    float valor1, valor2, media;
    cout<<"Informe o primeiro valor:";
    cin>>valor1;
    cout<<"Informe o segundo valor:";
    cin>>valor2;
    media = (valor1 * 0.4 + valor2 * 0.6);
    cout<<"A média ponderada é:" <<media;   
    return 0;
}

        
