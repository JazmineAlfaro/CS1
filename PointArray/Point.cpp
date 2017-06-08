#include "Point.h"


Point::Point(){
	this->x = 0.0;
	this->y = 0.0;
}
Point::Point(double x, double y){
	this->x = x;
	this->y = y;
}
double Point::getX(){
	return x;
}
double Point::getY(){
	return y;
}
void Point::setX(double nx){
	this->x = nx;
}
void Point::setY(double ny){
	this->y = ny;
}
void Point::print(){
	cout<<x<<y<<endl;
}
