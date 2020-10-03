#include <iostream>

using namespace std;

void contador(int num, int cont = 0);

int main(){
    // recursão
    system("clear");

    contador(20);
    cout << "\n\n";

    return 0;
}

void contador(int num, int cont){
    cout << cont << " ";
    if(num > cont){
        contador(num, ++cont);
    }
}
