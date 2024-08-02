#include <iostream>
#include <cmath>

// Constante para converter metros c�bicos para litros
const double METROS_CUBICOS_PARA_LITROS = 1000.0;

// Fun��o para calcular o volume de uma caixa d'�gua cil�ndrica
double volumeCaixaDagua(double raio, double altura) {
    double volumeEmMetrosCubicos = M_PI * raio * raio * altura;
    return volumeEmMetrosCubicos * METROS_CUBICOS_PARA_LITROS;
}

int main() {
    double raio, altura;

    // Solicita o raio da base e a altura da caixa d'�gua
    std::cout << "Digite o raio da base da caixa d'�gua (em metros): ";
    std::cin >> raio;
    
    std::cout << "Digite a altura da caixa d'�gua (em metros): ";
    std::cin >> altura;

    // Calcula o volume da caixa d'�gua usando a fun��o volumeCaixaDagua
    double volume = volumeCaixaDagua(raio, altura);

    // Exibe o volume calculado em litros
    std::cout << "O volume da caixa d'�gua �: " << volume << " litros" << std::endl;

    return 0;
}
