#include <iostream>
 
using namespace std;
 
#include <climits> // Para usar INT_MIN (valor m�nimo de um int)

using namespace std;

int main() {
    const int N = 100; // N�mero de valores a serem lidos
    int valores[N];
    int maior = INT_MIN; // Inicializa com o menor valor poss�vel de um int
    int posicao = -1;

    // Leitura dos 100 valores inteiros
    for (int i = 0; i < N; i++) {
        cin >> valores[i];

        // Verifica se o valor atual � maior que o maior encontrado at� agora
        if (valores[i] > maior) {
            maior = valores[i];
            posicao = i + 1; // Guarda a posi��o (considerando 1-based index)
        }
    }

    // Impress�o do maior valor e sua posi��o
    cout << maior << endl;
    cout << posicao << endl;

return 0;
}
