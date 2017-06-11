#ifndef POINTARRAY_H
#define POINTARRAY_H
#include "Point.h"
#include <iostream>

using namespace std;

class PointArray {
private:
	int size;
	Point *puntos;
	void resize(int nuevoSize);

public: 
	PointArray();
	PointArray(const Point arreglo[], const int size);
	PointArray(const PointArray &copia);
	~PointArray();
	//metodos
	void nada();
	int getSize();
	//void resize(int nuevoSize);
	void alfinal(Point &punto);
	void insert(int pos, Point &punto);
	void remove(int pos);
	Point *get(int pos);
	const Point *get(const int pos) const;
	void print();
};

#endif

