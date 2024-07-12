#include <iostream>

int main() {
    int inicio, fim;
    int soma = 0;

    std::cout << "Digite o numero inicial: ";
    std::cin >> inicio;
    std::cout << "Digite o numero final: ";
    std::cin >> fim;

    if (inicio > fim) {
        std::cout << "O número inicial deve ser menor ou igual ao número final." << std::endl;
        return 1;
    }

    // Se o número inicial for ímpar, incrementá-lo para torná-lo par
    if (inicio % 2 != 0) {
        inicio++;
    }

    // Se o número final for ímpar, decrementá-lo para torná-lo par
    if (fim % 2 != 0) {
        fim--;
    }

    // Somar todos os números pares no intervalo
    for (int i = inicio; i <= fim; i += 2) {
        soma += i;
    }

    std::cout << "A soma dos números pares no intervalo é: " << soma << std::endl;

    return 0;
}
