#include <iostream>
#include <cmath>

double calcularIMC(double peso, double altura) {
    return peso / (altura * altura);
}

int main() {
    double peso, altura;
    
    std::cout << "Digite o peso (kg): ";
    std::cin >> peso;
    
    std::cout << "Digite a altura (m): ";
    std::cin >> altura;
    
    double imc = calcularIMC(peso, altura);
    
    std::cout << "O IMC é: " << imc << std::endl;

    return 0;
}
