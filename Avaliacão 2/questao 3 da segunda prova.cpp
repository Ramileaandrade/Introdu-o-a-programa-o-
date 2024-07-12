#include <iostream>
#include <iomanip> // Para usar setprecision

int main() {
    const int totalNumeros = 20;
    int numeros[totalNumeros];
    int positivos = 0, negativos = 0;
    float soma = 0.0;

    // Lendo os números
    std::cout << "Digite " << totalNumeros << " números:" << std::endl;
    for (int i = 0; i < totalNumeros; ++i) {
        std::cin >> numeros[i];
        soma += numeros[i];

        if (numeros[i] > 0) {
            positivos++;
        } else if (numeros[i] < 0) {
            negativos++;
        }
    }

    // Calculando a média aritmética
    float media = soma / totalNumeros;

    // Calculando o percentual de positivos e negativos
    float percentualPositivos = (static_cast<float>(positivos) / totalNumeros) * 100;
    float percentualNegativos = (static_cast<float>(negativos) / totalNumeros) * 100;

    // Exibindo os resultados
    std::cout << "\nMédia aritmética dos valores lidos: " << std::fixed << std::setprecision(2) << media << std::endl;
    std::cout << "Quantidade de valores positivos: " << positivos << std::endl;
    std::cout << "Quantidade de valores negativos: " << negativos << std::endl;
    std::cout << "Percentual de valores positivos: " << std::fixed << std::setprecision(2) << percentualPositivos << "%" << std::endl;
    std::cout << "Percentual de valores negativos: " << std::fixed << std::setprecision(2) << percentualNegativos << "%" << std::endl;

    return 0;
}
