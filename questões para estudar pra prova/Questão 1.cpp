#include <iostream>
#include <string>
using namespace std;

int main() {
    int quantidadedeAlunos;
    cout << "Digite a quantidade de alunos: ";
    cin >> quantidadedeAlunos;

    string nome;
    double nota, somaDasNotas = 0.0, maiorNota = 0.0;
    string alunoComMaiorNota;

    for(int i = 0; i < quantidadedeAlunos; ++i) {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> nome;
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> nota;

        somaDasNotas += nota;

        if(nota > maiorNota) {
            maiorNota = nota;
            alunoComMaiorNota = nome;
        }
    }

    double mediaDasNotas = somaDasNotas / quantidadedeAlunos;

     cout << "A media das notas e: " << mediaDasNotas << std::endl;
     cout << "O aluno com a maior nota e: " << alunoComMaiorNota << " com a nota " << maiorNota << std::endl;

    return 0;
}
