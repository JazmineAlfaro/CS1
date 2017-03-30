#include <iostream>

using namespace std;
void swap2(){	
	int x,y;
	cout <<"Ingrese un numero: ";
	cin >> x;
	cout <<"Ingrese un numero: ";
	cin >> y;
	x = x + y;
	y = x - y;
	x = x - y;
	cout << "El valor de x es: " << x << endl;
	cout << "El valor de y es: " << y << endl;
}

void swap3(){
	int x,y,z;
	cout <<"Ingrese un numero: ";
	cin >> x;
	cout <<"Ingrese un numero: ";
	cin >> y;
	z = x;
	x = y;
	y = z;
	cout << "El valor de x es: " << x << endl;
	cout << "El valor de y es: " << y << endl;
	
}

void areas(){
	int x,y,z,w;
	float pi = 3.1416;
	cout <<"Ingrese el radio del circulo: ";
	cin >> x;
	cout <<"Ingrese el lado del cuadrado: ";
	cin >> y;
	cout <<"Ingrese la base del rectangulo: ";
	cin >> z;
	cout <<"Ingrese la altura del rectangulo: ";
	cin >> w;
	cout << " " << endl;
	cout <<"El area del circulo es " << x*x*pi << endl ;
	cout <<"El area del cuadrado es " << y*y << endl ;
	cout <<"El area del rectangulo es " << z*w << endl ;
	
}

void mayor2(){
	int a,b;
	cout <<"Ingrese un numero: ";
	cin >> a;
	cout <<"Ingrese un numero: ";
	cin >> b;
	if (a<b)
		cout << "El mayor es: " << b << endl;
	else
		cout << "El mayor es: " << a << endl;
	
}

void mayor3(){
	int a,b,c;
	cout <<"Ingrese un numero: ";
	cin >> a;
	cout <<"Ingrese un numero: ";
	cin >> b;
	cout <<"Ingrese un numero: ";
	cin >> c;
	if (b<a && c<b)
		cout << "El mayor es: "<< a << endl;
	else{
		if (a<b && c<b)
			cout << "El mayor es: "<< b << endl;
		else
			cout << "El mayor es: "<< c << endl;
	}
}

void incremento(){
	int x = 5;
	int y = x++;
	cout << y << endl;
	cout << x << endl;
}
int main(){
	mayor3();
}

