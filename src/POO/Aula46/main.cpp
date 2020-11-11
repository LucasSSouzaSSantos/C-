#include <iostream>
#include "classes.h"

using namespace std;

int main(){
    system("clear");
    Veiculo *v1 = new Veiculo(1);
    Veiculo *v2 = new Veiculo(2);
    Veiculo *v3 = new Veiculo(3);

    v3 ->setLigado(1);
    v1 ->setLigado(1);
    v2 ->setLigado(1);

    v1 -> imprimir();
    v2 -> imprimir();
    v3 -> imprimir();
    
    return 0;
}