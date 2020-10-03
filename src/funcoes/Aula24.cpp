#include <iostream>

using namespace std;
// Prototipar as funções

void impressao(string txt = "null");

int main(){
    // Omissão de Argumentos
    system("clear");

    impressao();


    return 0;
}

void impressao(string txt){
    cout << "\n" << txt << "\n";
}