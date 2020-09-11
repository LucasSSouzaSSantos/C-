#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    float n1, n2, res;
    char opc;

    inicio:
    system("clear");

    // é necessário criar um label para poder o usar o goto
    // para indicar que a palavra é um label, coloca dois pontos no final da escrita

    cout << "Digite o valor da nota 1: " << "\n";
    cin >> n1;
    cout << "Digite o valor da nota 2: " << "\n";
    cin >> n2;

    res = (n1 + n2) / 2;

    if(res >= 7){
        cout << "SITUAÇÃO ACADEMICA: \nAprovado\n";
    }
    else if(res < 3){
        cout << "SITUAÇÃO ACADEMICA: \nReprovado\n";
    }else{
        cout << "SITUAÇÃO ACADEMICA: \nSituação Indefinida\n";
    }

    cout << "\nDeseja digitar mais notas[s/n]: \n";
    cin >> opc;
    
    if (opc == 's' or opc == 'S'){
        goto inicio;
    }
    system("clear");
    return 0;
}