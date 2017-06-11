#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;

class Point {
private:
	double x,y;
public:
	Point();
	Point(double x, double y);
	double getX();
	double getY();
	void setX(double nx);
	void setY(double ny);
	virtual void print();
	
};
#endif

