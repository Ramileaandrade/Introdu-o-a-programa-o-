#include <iostream>
 
using namespace std;
 
#include <climits> // Para usar INT_MIN (valor mínimo de um int)

using namespace std;

int main() {
    const int N = 100; // Número de valores a serem lidos
    int valores[N];
    int maior = INT_MIN; // Inicializa com o menor valor possível de um int
    int posicao = -1;

    // Leitura dos 100 valores inteiros
    for (int i = 0; i < N; i++) {
        cin >> valores[i];

        // Verifica se o valor atual é maior que o maior encontrado até agora
        if (valores[i] > maior) {
            maior = valores[i];
            posicao = i + 1; // Guarda a posição (considerando 1-based index)
        }
    }

    // Impressão do maior valor e sua posição
    cout << maior << endl;
    cout << posicao << endl;

return 0;
}
