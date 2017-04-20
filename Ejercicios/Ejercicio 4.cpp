#include <iostream>
using namespace std;

int potencia(int a, int b){
	int c = 1;
	if (b == 0)
		return c;
	for(int i=1; i<=b; i++){
		c = c*a;
	}
	return c;
}

int main() {
	int base, exponente;
	cout << "Ingrese la base: " << endl;
	cin >> base;
	cout << "Ingrese el exponente: " << endl;
	cin >> exponente;
	int p = potencia(base,exponente);
	cout << p;
	return 0;
}
