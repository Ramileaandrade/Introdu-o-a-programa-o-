#include <iostream>
#include <iomanip> // Para usar fixed e setprecision

int main() {
    float velocidadeA, velocidadeB, distancia;
    float tempo;

    std::cout << "Digite a velocidade do primeiro veículo (em km/h): ";
    std::cin >> velocidadeA;

    std::cout << "Digite a velocidade do segundo veículo (em km/h): ";
    std::cin >> velocidadeB;

    std::cout << "Digite a distância entre os veículos (em km): ";
    std::cin >> distancia;

    // Calcular o tempo necessário para os veículos se encontrarem
    // SoA + VA * T = SoB + VB * T
    // Se SoA é 0 e SoB é a distância inicial, temos:
    // distancia = (velocidadeA + velocidadeB) * tempo
    // tempo = distancia / (velocidadeA + velocidadeB)
    tempo = distancia / (velocidadeA + velocidadeB);

    // Definir a precisão das saídas em 2 casas decimais
    std::cout << std::fixed << std::setprecision(2);

    // Exibir o resultado
    std::cout << "O tempo necessário para os veículos se encontrarem é: " << tempo << " horas." << std::endl;

    return 0;
}
