#include <iostream>
using namespace std;

int main() {
    int X[10];

    // Leitura dos valores do vetor X
    for (int i = 0; i < 10; i++) {
        cin >> X[i];
    }

    // Substituição dos valores nulos e negativos por 1
    for (int i = 0; i < 10; i++) {
        if (X[i] <= 0) {
            X[i] = 1;
        }
    }

    // Impressão do vetor X modificado
    for (int i = 0; i < 10; i++) {
        cout << "X[" << i << "] = " << X[i] << endl;
    }

return 0;
}
