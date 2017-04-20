#include <iostream>
using namespace std;

int main() {
	char c;
	float x,y;
	cout << "Ingrese el operando "<< endl;
	cin >> c;
	cout << "Ingrese un numero: "<< endl;
	cin >> x;
	cout << "Ingrese un numero: "<< endl;
	cin >> y;
	
	if(c == '+')
		cout<<"El resultado de la suma es: "<< x+y; 
	if(c == '-')
		cout<< "El resultado de la suma es: " << x-y; 
	if(c == '*')
		cout<< "El resultado de la suma es: "<<x*y; 
	if(c == '/')
		cout<< "El resultado de la suma es: "<<x/y; 
	
	return 0;
}

