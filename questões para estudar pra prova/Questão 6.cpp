#include <iostream>
#include <cmath>

// Constante para converter metros cúbicos para litros
const double METROS_CUBICOS_PARA_LITROS = 1000.0;

// Função para calcular o volume de uma caixa d'água cilíndrica
double volumeCaixaDagua(double raio, double altura) {
    double volumeEmMetrosCubicos = M_PI * raio * raio * altura;
    return volumeEmMetrosCubicos * METROS_CUBICOS_PARA_LITROS;
}

int main() {
    double raio, altura;

    // Solicita o raio da base e a altura da caixa d'água
    std::cout << "Digite o raio da base da caixa d'água (em metros): ";
    std::cin >> raio;
    
    std::cout << "Digite a altura da caixa d'água (em metros): ";
    std::cin >> altura;

    // Calcula o volume da caixa d'água usando a função volumeCaixaDagua
    double volume = volumeCaixaDagua(raio, altura);

    // Exibe o volume calculado em litros
    std::cout << "O volume da caixa d'água é: " << volume << " litros" << std::endl;

    return 0;
}
