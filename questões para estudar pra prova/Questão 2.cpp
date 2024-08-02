#include <iostream>
#include <string>
using namespace std;

int main() {
    int quantidadeDeAlunos;
    std::cout << "Digite a quantidade de alunos: ";
    std::cin >> quantidadeDeAlunos;

    std::string nome;
    int idade, somaDasIdades = 0, menorIdade = INT_MAX;
    std::string alunoMaisNovo;

    for(int i = 0; i < quantidadeDeAlunos; ++i) {
        std::cout << "Digite o nome do aluno " << i + 1 << ": ";
        std::cin >> nome;
        std::cout << "Digite a idade do aluno " << i + 1 << ": ";
        std::cin >> idade;

        somaDasIdades += idade;

        if(idade < menorIdade) {
            menorIdade = idade;
            alunoMaisNovo = nome;
        }
    }

    double mediaDasIdades = static_cast<double>(somaDasIdades) / quantidadeDeAlunos;

    std::cout << "A média das idades é: " << mediaDasIdades << std::endl;
    std::cout << "O aluno mais novo é: " << alunoMaisNovo << " com " << menorIdade << " anos" << std::endl;

    return 0;
}
