#include "Conserje.h"

Conserje::Conserje(){
	name = " ";
	DNI = 00000000;
	salario = 0.0;
	empresa = " ";
	lugar = " ";
	cumple = Birthday();
}

Conserje::Conserje(string nombre, int id, double paga,string e,string l, Birthday c){
	name = nombre;
	DNI = id;
	salario = paga;
	empresa = e;
	lugar = l;
	cumple = c;
	
}

void Conserje::imprimir(){
	cout << "Datos del Conserje: "<<endl;
	cout<<"Nombre: "<< name <<endl;
	cout<<"DNI: "<< DNI<<endl;
	cout<<"salario: " << salario <<endl;
	cout<<"Empresa: "<< empresa<<endl;
	cout << "Lugar: "<< lugar << endl;
	cumple.printc();
	cumple.edad();
	cout << endl;
}
	
