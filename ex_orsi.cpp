#include <iostream>
#include <string>
#include <C:/Users/autologon/Desktop/veiculo.h>

// Gabriel Neves RGM 26009480
using namespace std;


class VeiculoPasseio : public Veiculo {
	private:
	    int volumeInterno;
	
	public:
	    VeiculoPasseio(string _marca, string _modelo, int _potencia, int _volumeInterno)
	        : Veiculo(_marca, _modelo, _potencia), volumeInterno(_volumeInterno) {}
	
	    int getVolumeInterno() const { return volumeInterno; }
	    void setVolumeInterno(int _volumeInterno) { volumeInterno = _volumeInterno; }
	
	    void mostra()  {
	        Veiculo::mostra();
	        cout << "Volume Interno: " << volumeInterno << " litros" << endl;
    }
};

class VeiculoCarga : public Veiculo {
	private:
	    int carga;
	
	public:
	    VeiculoCarga(string _marca, string _modelo, int _potencia, int _carga)
	        : Veiculo(_marca, _modelo, _potencia), carga(_carga) {}
	
	    int getCarga() const { return carga; }
	    void setCarga(int _carga) { carga = _carga; }
	
	    void mostra()  {
	        Veiculo::mostra();
	        cout << "Carga Maxima: " << carga << " kg" << endl;
	    }
};

int main() {
    VeiculoPasseio vPasseio("Ford", "Focus", 150, 400);
    VeiculoCarga vCarga("Volvo", "FH16", 600, 20000);
 
    Veiculo* veiculo1 = &vPasseio;
    Veiculo* veiculo2 = &vCarga;

    cout << "Dados do Veiculo de Passeio:" << endl;
    veiculo1->mostra();

    cout << "\nDados do Veiculo de Carga:" << endl;
    veiculo2->mostra();

    return 0;
}

// Os dados mostrados são das subclasses, pois houve a sobrescrita do metodo mostra(). 
