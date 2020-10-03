#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]){
    // Passagem de parâmetro para a função man
    // ARGC guarda a quantidade parametro passado
    // ARGV é um ponteiro para uma matriz de ponteiro
    // por padrão o primeiro parametro é o nome do programa quando declaro argc e argv
    system("clear");
    // cout << "Quantidade de Parâmetro: " << argc << "\n";
    // as duas string forem iguais o strcmp retorna 0 
    if(argc > 1){
        if(!strcmp(argv[1], "sol")){
            cout << "Vou ao Clube!!!\n\n";

        }else if(!strcmp(argv[1], "nublado")){
            cout << "Vou ao cinema!!!\n\n";
        }else{
            cout << "Vou ficar em casa!!!\n\n\n";
        }
    }
    return 0;
}