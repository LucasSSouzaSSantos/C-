#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int val;

    cout << "Selecione uma cor: \n";
    cout << "[1] - Verde\n[2] - Azul\n[3] - Vermelho\n";
    cout << "Valor: ";
    cin >> val;
    system("clear");

    switch (val)
    {
    case 1:
        cout << "Cor selecionada: Verde\n";
        break;
    case 2:
        cout << "Cor selecionada: Azul\n";
        break;
    case 3:
        cout << "Cor selecionada: Vermelho\n";
        break;
    default:
        cout << "Valor selecionado inválido\n";
        break;
    }

    return 0;
}
