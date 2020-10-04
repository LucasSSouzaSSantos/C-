#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{
public:
    int vel;
    int tipo;
    Veiculo(int tp);

private:
    std::string nome;
    int velMax;
    bool ligado;
};

Veiculo::Veiculo(int tp){
    if(tp == 1){
        nome = "carro";
        velMax = 200;
    }else if(tp == 2){
        nome = "Aviao";
        velMax = 800;
    }else if(tp == 3){
        nome = "Navio";
        velMax = 300;
    }
}



#endif