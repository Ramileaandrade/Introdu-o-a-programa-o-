#include <iostream>
#include <string>

const int tamanho = 4;
std::string emails[tamanho] = {"joao@outlook.com", "maria@gmail.com", "jose@gmail.com", "carlos@yahoo.com.br"};
std::string senhas[tamanho] = {"123abc", "aaa543", "234bbb", "313rer"};

bool autenticar(const std::string& email, const std::string& senha) {
    for(int i = 0; i < tamanho; ++i) {
        if(emails[i] == email && senhas[i] == senha) {
            return true;
        }
    }
    return false;
}

int main() {
    std::string email, senha;
    std::cout << "Digite o seu e-mail: ";
    std::cin >> email;
    std::cout << "Digite a sua senha: ";
    std::cin >> senha;

    if(autenticar(email, senha)) {
        std::cout << "Bem-vindo!" << std::endl;
    } else {
        std::cout << "Não Autorizado!" << std::endl;
    }

    return 0;
}
