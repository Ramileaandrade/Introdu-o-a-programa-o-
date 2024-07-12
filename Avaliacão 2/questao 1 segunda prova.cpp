#include <iostream>
#include <iomanip> // Para usar fixed e setprecision

int main() {
    float velocidadeA, velocidadeB, distancia;
    float tempo;

    std::cout << "Digite a velocidade do primeiro ve�culo (em km/h): ";
    std::cin >> velocidadeA;

    std::cout << "Digite a velocidade do segundo ve�culo (em km/h): ";
    std::cin >> velocidadeB;

    std::cout << "Digite a dist�ncia entre os ve�culos (em km): ";
    std::cin >> distancia;

    // Calcular o tempo necess�rio para os ve�culos se encontrarem
    // SoA + VA * T = SoB + VB * T
    // Se SoA � 0 e SoB � a dist�ncia inicial, temos:
    // distancia = (velocidadeA + velocidadeB) * tempo
    // tempo = distancia / (velocidadeA + velocidadeB)
    tempo = distancia / (velocidadeA + velocidadeB);

    // Definir a precis�o das sa�das em 2 casas decimais
    std::cout << std::fixed << std::setprecision(2);

    // Exibir o resultado
    std::cout << "O tempo necess�rio para os ve�culos se encontrarem �: " << tempo << " horas." << std::endl;

    return 0;
}
