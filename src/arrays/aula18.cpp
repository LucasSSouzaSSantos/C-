#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    system("clear");
    printf("hello world!\n");

    // como declarar um vetor

    int vetor[10]; // declaração de um vetor de 10 posições

    // posições começando de 0 até a posição 9

    // essa é a maneira de colocar valores em cada posição do vetor de 10 posições

    vetor[0] = 10;  
    vetor[1] = 0;
    vetor[2] = 1;
    vetor[3] = 2;
    vetor[4] = 3;
    vetor[5] = 4;
    vetor[6] = 5;
    vetor[7] = 6;
    vetor[8] = 7;
    vetor[9] = 8;

    // imprimindo os valores do vetor
    cout << vetor[0] << "\n";

    // ou pode ser usado um laço de repetição

    for(int i = 0; i < 10; i++){
        cout << vetor[i] << " ";
    }
    cout << "\n";
    return 0;
}