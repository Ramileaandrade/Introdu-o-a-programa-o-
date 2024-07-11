#include <iostream>
 
using namespace std;
 
int main() {
 
    #include <iostream>

using namespace std;

    int N;

    // Leitura do valor de N
    cin >> N;

    // Verificação se N está dentro do intervalo especificado (2 < N < 1000)
    if (N <= 2 || N >= 1000) {
        return 1; // Retorna 1 em caso de valor fora do intervalo
    }

    // Impressão da tabuada de N de 1 até 10
    for (int i = 1; i <= 10; i++) {
        cout << i << " x " << N << " = " << i * N << endl;
    }

return 0;
}
 

