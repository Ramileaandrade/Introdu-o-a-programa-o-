#include <iostream>

int main() {
    int inicio, fim;
    int soma = 0;

    std::cout << "Digite o numero inicial: ";
    std::cin >> inicio;
    std::cout << "Digite o numero final: ";
    std::cin >> fim;

    if (inicio > fim) {
        std::cout << "O n�mero inicial deve ser menor ou igual ao n�mero final." << std::endl;
        return 1;
    }

    // Se o n�mero inicial for �mpar, increment�-lo para torn�-lo par
    if (inicio % 2 != 0) {
        inicio++;
    }

    // Se o n�mero final for �mpar, decrement�-lo para torn�-lo par
    if (fim % 2 != 0) {
        fim--;
    }

    // Somar todos os n�meros pares no intervalo
    for (int i = inicio; i <= fim; i += 2) {
        soma += i;
    }

    std::cout << "A soma dos n�meros pares no intervalo �: " << soma << std::endl;

    return 0;
}
