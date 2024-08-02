#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    int quantidadeDeAlunos;
    cout << "Digite a quantidade de alunos: ";
    cin >> quantidadeDeAlunos;

    string nome;
    int idade, somaDasIdades = 0;
    int menorIdade = std::numeric_limits<int>::max();
    string alunoMaisNovo;

    for(int i = 0; i < quantidadeDeAlunos; ++i) {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> nome;
        cout << "Digite a idade do aluno " << i + 1 << ": ";
        cin >> idade;

        somaDasIdades += idade;

        if(idade < menorIdade) {
            menorIdade = idade;
            alunoMaisNovo = nome;
        }
    }

    double mediaDasIdades = static_cast<double>(somaDasIdades) / quantidadeDeAlunos;

    cout << "A média das idades é: " << mediaDasIdades << std::endl;
    cout << "O aluno mais novo é: " << alunoMaisNovo << " com " << menorIdade << " anos" << std::endl;

    return 0;
}
