#include <iostream>
#include <stdlib.h>
// #include <locale.h>
#include <time.h>

using namespace std;

int main(){
    // operadores lógicos and(&&), or(||) e not(!)
    int num;
    /*
        1 2 3 4 5 6 7 8 9 10 
        >4 e <7
    */
   system("clear");
   num = 8;
   if(num > 4 && num < 7){
       cout << "\n\nValor aceito\n";
   }else{
       cout << "\n\nNão aceito\n";
   }

    return 0;
}