#include <iostream>

using namespace std;

int main() {
    int A, B;

    // Leitura dos valores de A e B
    cin >> A >> B;

    // Verificação se são múltiplos
    if (A % B == 0 || B % A == 0) {
        cout << "Sao Multiplos" << endl;
    } else {
        cout << "Nao sao Multiplos" << endl;
    }

    return 0;
}

