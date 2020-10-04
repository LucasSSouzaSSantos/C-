#include <iostream>
#include "classes.h"

using namespace std;

int main(){
    system("clear");
    Veiculo *v1 = new Veiculo(1);
    
    cout << v1->velMax;

    return 0;
}