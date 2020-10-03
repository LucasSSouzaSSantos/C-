#include <iostream>

using namespace std;

void soma();
void soma(int n1, int n2);

int main(){
    system("clear");
    
    cout << "Primeira Soma \n";
    soma();

    cout << "Segunda Soma  \n";
    soma(12, 34);

    return 0;
}

void soma(int n1, int n2){
    int resultado = n1 + n2;

    cout << "Soma de " << n1 << " com " << n2 << " = " << resultado << "\n\n";
}

void soma(){
    int n1 = 10, n2 = 20;
    int resultado = n1 + n2; 

    cout << "Soma de " << n1 << " com " << n2 << " = " << resultado << "\n\n";
}