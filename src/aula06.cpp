#include <iostream>

using namespace std;
// n1 = 0; um exemplo de como a variável global não pode ser acessada

int n1, n2;  // variáveis globais elas podem ser acessadas em qualquer lugar do programa
             // será, de qualquer lugar ?

int main(){
    int n3, n4; // variáveis locais elas só podem ser acessadas dentro da função main
    n3 = 5, n4 = 9;
    // operadores matemático
    /*
    + soma
    - subtração
    / divisão inteira
    * multiplicação
    % resto da divisão
    () parênteses
    */
   cout << float(n4) / float(n3) << "\n";


    return 0;
}
