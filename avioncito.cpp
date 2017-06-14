#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Avion{
public:
	string modelo;
	Avion(){modelo = " ";}
	virtual void mensaje()=0;
};

class Torre{
public:
	string nombre;
	Torre(){
		nombre = "  ";
	}
	vector<Avion*> aviones;
	void agrega(Avion *cito){
		aviones.push_back(cito);
	}
	void llamando(){
	for(int i=0;i<aviones.size();i++){
		Avion *a = aviones[i];
		a->mensaje();
	}
	}
};

class Helicoptero : public Avion{
public:
	double numero;
	Helicoptero(){numero = 0;}
	void mensaje(){cout<< "Helicoptero: Espere"<<endl;}
};

class Jet : public Avion{
public:
	string piloto;
	Jet(){piloto = " ";}
	void mensaje(){cout<< "Jet: Despegue"<<endl;}
	
};
int main()
{
	Torre t;
	Helicoptero *h = new Helicoptero();
	Jet *j = new Jet();
	t.agrega(h);
	t.agrega(j);
	t.llamando();

	return 0;
}
