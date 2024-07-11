#include <iostream>

using namespace std;

int main() {
    int hora_inicial, minuto_inicial, hora_final, minuto_final;
    int duracao_horas, duracao_minutos;

    // Leitura dos dados de entrada
    cin >> hora_inicial >> minuto_inicial >> hora_final >> minuto_final;

    // Convertendo os tempos para minutos a partir da meia-noite
    int inicio_total_minutos = hora_inicial * 60 + minuto_inicial;
    int fim_total_minutos = hora_final * 60 + minuto_final;

    // Caso o fim do jogo seja antes do início do jogo no mesmo dia
    if (fim_total_minutos <= inicio_total_minutos) {
        fim_total_minutos += 24 * 60;  // Adiciona um dia em minutos
    }

    // Calculando a duração em minutos
    int duracao_total_minutos = fim_total_minutos - inicio_total_minutos;

    // Convertendo a duração total de minutos para horas e minutos
    duracao_horas = duracao_total_minutos / 60;
    duracao_minutos = duracao_total_minutos % 60;

    // Saída do resultado
    cout << "O JOGO DUROU " << duracao_horas << " HORA(S) E " << duracao_minutos << " MINUTO(S)" << endl;

return 0;
}
