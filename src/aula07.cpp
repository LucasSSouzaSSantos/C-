#include <iostream>

using namespace std;

int main(){
    // incremento e decremento de variável

    int n1, n2;

    n1 = 0, n2 = 10;

    //incrementando uma variável forma padrão
    cout << "Incremento\n";

    cout << "Antes do incremento: " << n1 << "\n";
    n1 = n1 + 1;    // ou n++;
    cout << "Depois do incremento: "<< n1 << "\n";

    // decrementando uma variável forma padão
    cout << "Decremento \n";
    cout << "Antes: " << n1 << "\n";
    n1 = n1 - 1;
    cout << "Depois: " << n1 << "\n";

    return 0;
}