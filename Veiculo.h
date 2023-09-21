
#include <iostream>
#include <string>


// Gabriel Neves RGM 26009480

using namespace std;

class Veiculo {
private:
    string marca;
    string modelo;
    int potencia;

public:
    Veiculo();
    Veiculo(string _marca, string _modelo, int _potencia);
    string getMarca() const;
    void setMarca(string _marca);
    string getModelo() const;
    void setModelo(string _modelo);
    int getPotencia() const;
    void setPotencia(int _potencia);
    virtual void mostra();
    
};

Veiculo::Veiculo() {
    marca = " ";
    modelo =  "";
    potencia = 0;
}

Veiculo::Veiculo(string _marca, string _modelo, int _potencia) : marca(_marca), modelo(_modelo), potencia(_potencia) {}

string Veiculo::getMarca() const {
    return marca;
}

void Veiculo::setMarca(string _marca) {
    marca = _marca;
}

string Veiculo::getModelo() const {
    return modelo;
}

void Veiculo::setModelo(string _modelo) {
    modelo = _modelo;
}

int Veiculo::getPotencia() const {
    return potencia;
}

void Veiculo::setPotencia(int _potencia) {
    potencia = _potencia;
}

void Veiculo::mostra() {
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Potencia: " << potencia << " HP" << endl;
}


