#include "Graph.h"

Graph::Graph(const vector<int> &puntosInicio,const vector<int> &puntosFin){
	if(puntosInicio.size() != puntosFin.size())
		throw invalid_argument("La lista de inicio y fin no tienen el mismo tamano");
	for(int i=0;i<puntosInicio.size();i++){
		int start = puntosInicio[i];
		int end = puntosFin[i];
		mapita[start].push_back(end);
		mapita[end];
	}
	
}

const vector<int> &Graph::adjacent(const int nodito)const{
	map<int,vector<int> >::const_iterator i = mapita.find(nodito);
	if(i==mapita.end())
		throw invalid_argument("Nodo no encontrado");
	return i->second;
	
}

int Graph::conectadas(const int nodito)const{
	return adjacent(nodito).size();
	
}
