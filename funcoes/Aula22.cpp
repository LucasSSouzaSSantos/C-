#include <iostream>

using namespace std;

// declarando as funções para serem usadas na função main
void texto();
void soma(int a, int b);
int soma2(int a , int b);

int main(){
    system("clear");
    // a função vai escrever um texto 
    texto();

    // a funão vai somar dois valores
    soma(15, 5);

    return 0;
}

void texto(){
    cout << "Canal do YouTube\n\n";
}

void soma(int a, int b){
    cout << "soma dos valores: " << a + b << "\n";
}

int soma2(int a, int b){
    int soma = a + b;

    return soma;
}