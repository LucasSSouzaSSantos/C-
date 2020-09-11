#include <iostream>

using namespace std;

int main(){
    system("clear");
    // criação de algumas variáveis
    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto = false;

    chances = 6; tam = 0; acerto = false; acertos = 0;

    // digitar a palavra secreta
    cout << "fale a palavra secreta: \n";
    cin >> palavra;  // armazenando a palavra secreta para dentro da variável palavra
    system("clear"); // limpando a tela
    
    // obter o tamanho da palavra secreta
    while(palavra[i] != '\0'){ // percorrendo o array o '\0' é o caractere do enter
        i++;
        tam++;
    }
    // preencher secreta com tracinhos

    for(i = 0; i < 30; i++){
        secreta[i] = '-';
    }

    // começar a rotina do jogo
    // o jogo é um loop

    while((chances > 0) && (acertos < tam)){
        cout << "\nchances restantes: " << chances << "\n";
        cout << "Palavra Secreta \n";
        for(i = 0; i < tam; i++){
            cout << secreta[i];
        }
        // pegar a letra do usuário

        cout << "\ndigite uma letra: \n";
        cin >> letra[0];

        for(i = 0; i < tam; i++){
            if(palavra[i] == letra[0]){
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if(!acerto){
            chances--;
        }
        acerto = false;
        system("clear");
    }

    if(acertos == tam){
        cout << "você venceu!!!\n";
    }else{
        cout << "você perdeu!!!\n";
    }

    return 0;
}




