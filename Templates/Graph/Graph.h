#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <map>
#include <vector>
#include <stdexcept>
using namespace std;

class Graph {
protected:
	map<int,vector<int> > mapita;
public:
	Graph(const vector<int> &puntosInicio,const vector<int> &puntosFin);
	int conectadas(const int nodito)const;
	const vector<int> &adjacent(const int nodito)const;
};

#endif

