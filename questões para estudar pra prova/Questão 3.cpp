#include <iostream>
using namespace std;
int main() {
    const int tamanho = 5;
    string alunos[tamanho] = {"joao", "maria", "jose", "carlos", "claudio"};
    bool vaiPraExcursao[tamanho] = {true, true, false, true, false};
     string nome;
     bool taNaLista = false;
     
    cout<<"Informe o nome do aluno";
    cin>>nome;
    for (int i = 0; i < tamanho; i++) {
        if (alunos[i] == nome &&
            vaiPraExcursao[i] == true) {
            cout<<"Vai para a Excurs�o!";
            taNaLista = true;
            break;    
        }
        if (alunos[i] == nome &&
            vaiPraExcursao[i] == false) {
            cout<<"N�o para a Excurs�o!";
            taNaLista = true;
            break;    
        }    
    }
   
    if (!taNaLista) {
        cout<<"N�o t� na lista";
    }
   
    return 0;
}
