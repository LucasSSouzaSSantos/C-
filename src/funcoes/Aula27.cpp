#include <iostream>

using namespace std;

int main(){
    system("clear");
    enum armas{fuzil, revolver = 9,
    rifle, escopeta};

    armas armaSel;

    armaSel = rifle;

    cout << armaSel;
    return 0;
}