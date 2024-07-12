#include <iostream>
#include <iomanip> // Para usar fixed e setprecision

int main() {
    std::string nome;
    float peso;
    float agua, carboidratos, proteinas;

    std::cout << "Digite o nome da pessoa: ";
    std::getline(std::cin, nome);

    std::cout << "Digite o peso da pessoa em kg: ";
    std::cin >> peso;

    // Calcular a quantidade de ingestão diária recomendada
    agua = peso * 0.05; // 50 ml por kg corporal, convertido para litros (50 ml = 0.05 litros)
    carboidratos = peso * 0.006; // 6 g por kg corporal, convertido para kg (6 g = 0.006 kg)
    proteinas = peso * 0.0025; // 2.5 g por kg corporal, convertido para kg (2.5 g = 0.0025 kg)

    // Definir a precisão das saídas em 3 casas decimais
    std::cout << std::fixed << std::setprecision(3);

    // Exibir os resultados
    std::cout << "\nNome: " << nome << std::endl;
    std::cout << "Quantidade de água recomendada (em litros): " << agua << " L" << std::endl;
    std::cout << "Quantidade de carboidratos recomendada (em kg): " << carboidratos << " kg" << std::endl;
    std::cout << "Quantidade de proteínas recomendada (em kg): " << proteinas << " kg" << std::endl;

    return 0;
}

