#include <iostream>
 
using namespace std;
 
int main() {
    int valores[5];
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    // Leitura dos 5 valores inteiros
    for (int i = 0; i < 5; i++) {
        cin >> valores[i];
        
        // Verifica se o número é par ou ímpar
        if (valores[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        // Verifica se o número é positivo ou negativo
        if (valores[i] > 0) {
            positivos++;
        } else if (valores[i] < 0) {
            negativos++;
        }
    }

    // Impressão dos resultados
    cout << pares << " valor(es) par(es)" << endl;
    cout << impares << " valor(es) impar(es)" << endl;
    cout << positivos << " valor(es) positivo(s)" << endl;
    cout << negativos << " valor(es) negativo(s)" << endl;

return 0;
}
