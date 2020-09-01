#include <iostream>

using namespace std;

int main(){
    // operador ternário
    int n1 = 0, n2 = 9, nota;
    string res;
    cout << "Digite a primeira nota: \n";
    cin >> n1;
    cout << "Digite a segunda nota: \n";
    cin >> n2;
    nota = n1 + n2;
    // nota >= 60 aprovado
    // nota < 60 reprovado

    // (nota >= 60) ? res = "Aprovado": res = "Reprovado";

    cout << "Situação do aluno: " << res << "\n";
    // if ternário

    res = (nota >= 60) ? "Aprovado": "Reprovado";
    return 0;
}