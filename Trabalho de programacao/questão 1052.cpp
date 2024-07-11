#include <iostream>
 
using namespace std;
 
#include <string>

int main() {
    // Array com os nomes dos meses em inglês
    string months[] = {"January", "February", "March", "April", "May", "June", 
                       "July", "August", "September", "October", "November", "December"};
    
    int number;
    cin >> number;  // Lê o número do mês

    // Verifica se o número está dentro do intervalo válido (1 a 12)
    if (number < 1 || number > 12) {
        cout << "Número inválido! Deve ser entre 1 e 12." << endl;
        return 0;  // Encerra o programa
    }

    // O número do mês é usado como índice para acessar o array de meses
    string monthName = months[number - 1];  // -1 porque o array em C++ é baseado em zero

    // Imprime o nome do mês com a primeira letra maiúscula
    cout << monthName << endl;

return 0;
}
