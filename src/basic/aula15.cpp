#include <iostream>

using namespace std;

int main(){
    int n = 0;

    while(n <= 10){
        cout << n << "\n";
        if(n == 4){
            break;
        }
        n++;
    }
    cout << "Saiu\n";
    return 0;
}