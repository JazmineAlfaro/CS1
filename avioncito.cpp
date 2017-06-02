#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Avion{
public:
	string modelo;
	Avion(){modelo = " ";}
	virtual string mensaje();
};

class Torre{
public:
	string nombre;
	Torre(){nombre = "  ";};
	vector<Avion*> aviones;
	void agrega(Avion *cito){
		aviones.push_back(cito);
	}
	
};

class Helicoptero : public Avion{
public:
	double numero;
	Helicoptero(){numero = 0;}
	string mensaje(){return "Espera";}
};

class Jet : public Avion{
public:
	string piloto;
	Jet(){piloto = " ";}
	string mensaje(){return "Despega";}
	
};
int main()
{
	Torre t();
	//Avion a = new Avion
	Helicoptero *h = new Helicoptero();
	t.agrega(h);
	
	return 0;
}
