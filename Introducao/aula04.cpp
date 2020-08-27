#include <iostream>

using namespace std;

int main(){

    // tipo nome;
    // ipo nome = valor;

    int vidas = 0;  // variável do tipo inteiro sem ser inicializado
    char letra = 'B'; // variável do tipo char pode receber qualquer caractere entre apostrifo
    double decimal = 12.4; // variável do tipo flutuante 19.9999999999999
    float decimal2 = 12.4; // variavel do tipo flutuante 19.9
    bool vivo = true; // true or false true == 1 or false == 0
    string texto = "Lucas de Souza Santos";

    /*
    IMPRIMINDO VALORES NA TELA

    cout << vidas << "\n";
    cout << letra << "\n";
    cout << decimal << "\n";
    cout << decimal2 << "\n";
    cout << vivo << "\n";
    cout << texto << "\n";
    
    */
   // PEGAR VALORES DO TECLADO E ARMAZENAR NA VARIÁVEL 
   // ESCOLHIDA E DEPOIS IMPRIMIR NA TELA

    cout << "Digite o numero de vidas:  \n";
    cin >> vidas;
    cout << "\nA quantidade de vidas é: " << vidas << "\n";

    return 0;
}