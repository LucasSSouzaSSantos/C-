#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo{
public:
    // atributos públicos
    int vel;
    int tipo;
    
    // métodos construtor
    Veiculo(int tp);
    
    // métodos
    void imprimir();
    
    // métodos set e get públicos
    int getVelMax();

    std::string getLigado();
    void setLigado(int l);
    
    std::string getNome();
    void setNome(std::string n);

private:
    // atributos privados
    int velMax;
    std::string ligado = "desligado";
    std::string nome;
    
    // métodos get e set privados
    void setVelMax(int vm);
    
    
};

// Método construtor
Veiculo::Veiculo(int tp)
{
    if (tp == 1)
    {
        setNome("carro");
        setVelMax(200);
    }
    else if (tp == 2)
    {
        setNome("Aviao");
        setVelMax(800);
    }
    else if (tp == 3)
    {
        setNome("Navio");
        setVelMax(300);
    }
}

// métodos
void Veiculo::imprimir(){
    std::cout << "Tipo do Veiculo...........: " << nome << std::endl;
    std::cout << "Velocidade Máxima.........: " << velMax << std::endl;
    std::cout << "Velocidade Atual..........: " << vel << std::endl;
    std::cout << "Status....................: " << ligado << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "\n" << std::endl;
}

// get e set do metodo velocidade maxima
int Veiculo::getVelMax(){
    return velMax;
}
void Veiculo::setVelMax(int vm){
    velMax = vm;
}

// get e set do metodo ligado
std::string Veiculo::getLigado(){
    return ligado;
}
void Veiculo::setLigado(int l){
    if(l == 1){
        ligado = "ligado";
    }else{
        ligado = "desligado";
    }
}

// get e set do metodo nome
std::string Veiculo::getNome(){
    return nome;
}
void Veiculo::setNome(std::string n){
    nome = n;
}

#endif