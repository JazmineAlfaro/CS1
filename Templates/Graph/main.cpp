#include<iostream>
#include <map>
#include <vector>
#include <stdexcept>
#include "Graph.h"
using namespace std;

int main () {
	
	vector<int> Inicio;
	Inicio.push_back(1);
	Inicio.push_back(1);
	Inicio.push_back(1);
	Inicio.push_back(5);
	Inicio.push_back(5);
	Inicio.push_back(4);
	
	vector<int> Fin;
	Fin.push_back(2);
	Fin.push_back(3);
	Fin.push_back(4);
	Fin.push_back(4);
	Fin.push_back(2);
	Fin.push_back(2);
	
	Graph a(Inicio,Fin);
	//a.adjacent(1);
	cout<<a.conectadas(1);
	
	return 0;
}

