#include "PointArray.h"

PointArray::PointArray() {
	this->size=0;
	puntos = new Point[0];
}
PointArray::PointArray(const Point arreglo[], const int size){
	this->size=size;
	puntos = new Point[size];
	for(int i=0;i<size;i++){
		puntos[i] = arreglo[i];
	}
}
PointArray::PointArray(const PointArray &copia){
	size = copia.size;
	puntos = new Point[size];
	for(int i=0;i<size;i++){
		puntos[i]=copia.puntos[i];
	}
}
PointArray::~PointArray() {
	delete[] puntos;
}

void PointArray::nada(){
	resize(0);
}
int PointArray::getSize(){
	return size;
}
void PointArray::resize(int nuevoSize){
	Point *nuevo = new Point[nuevoSize];          //se crea un arreglo de puntos con el nuevo size
	int menor;
	if(nuevoSize > size)                          //evaluando cual es el menor tamaño  
		menor = size;
	else
		menor = nuevoSize;
	for(int i=0;i<menor,i++)                    //copiando los elementos a nuevo
		nuevo[i] = points[i];
	delete[] points;                            //ya lo tienes copiado en nuevo, se borra
	size = nuevoSize;
	puntos = pts;
}
void PointArray::alfinal(Point &punto){
	resize(size+1);
	puntos[size-1] = punto; 
}
void PointArray::insert(int pos, Point &punto){
	resize(size+1);
	for(int i=size-1; i>pos;i--)                                 //de atras hasta la posicion
		puntos[i]= puntos[i-1];
	puntos[pos] = punto;
}
void PointArray::remove(int pos){
	
}
Point *PointArray::muestra(int pos){
	
}
