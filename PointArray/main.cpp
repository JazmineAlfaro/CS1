#include<iostream>
#include "Point.h"
#include "PointArray.h"
using namespace std;

int main() {
	Point A(1,2);
	Point B(57,4);
	Point C(5,6);
	Point array[]={A,B,C};
	PointArray a(array,3);
	
	//output
	cout<<" "<< endl;
	cout<< " Punto A: ";
	A.print();
	cout<<endl;
	cout<<endl;
	cout<< " Punto B: ";
	B.print();
	cout<< endl;
	cout<< endl;
	cout<<" Arreglo: ";
	a.print();
	
	return 0;
}

