#include <iostream>
 
using namespace std;
 
int main() {
 
    #include <iostream>

using namespace std;

    int N;

    // Leitura do valor de N
    cin >> N;

    // Verifica��o se N est� dentro do intervalo especificado (2 < N < 1000)
    if (N <= 2 || N >= 1000) {
        return 1; // Retorna 1 em caso de valor fora do intervalo
    }

    // Impress�o da tabuada de N de 1 at� 10
    for (int i = 1; i <= 10; i++) {
        cout << i << " x " << N << " = " << i * N << endl;
    }

return 0;
}
 

