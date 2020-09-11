#include <iostream>

using namespace std;

int main(){
    system("clear");
    // matrizes
    int matriz[4][4];

    matriz[0][0] = 1;
    matriz[0][1] = 0;
    matriz[0][2] = 0;
    matriz[0][3] = 0;

    matriz[1][0] = 0;
    matriz[1][1] = 1;
    matriz[1][2] = 0;
    matriz[1][3] = 0;

    matriz[2][0] = 0;
    matriz[2][1] = 0;
    matriz[2][2] = 1;
    matriz[2][3] = 0;

    matriz[3][0] = 0;
    matriz[3][1] = 0;
    matriz[3][2] = 0;
    matriz[3][3] = 1;

    for(int i = 0; i < 4; i++){
        cout << "| ";
        for(int j = 0; j < 4; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "|\n";
    }

    return 0;
}
