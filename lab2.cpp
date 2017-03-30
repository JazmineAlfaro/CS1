#include <iostream>
using namespace std;

int main() {
		/*
	cout << "Ingrese un numero: "<<endl;
	for(x=0;x<i;++x)
		cin >> arreglo[x];
	for(x=0;x<i;++x)
		cout<< arreglo[x] <<endl;
	*/
		/*
	int a,b,z;
	cout << "Ingrese un numero: "<<endl;
	cin >> a;
	cout << "Ingrese un numero: "<<endl;
	cin >> b;
	if(a>b)
		z=a;
	else
		z=b;
	
	z = (a>b)?a:b;
	cout << "El mayor es: ">> z <<endl;
	*/
	int score[3];
	int c = 0;
	cin >> score[c++];
	cin >> score[c++];
	cin >> score[c++];
	int temp;
	temp = score[0];
	score[0] = score[2];
	score[2] = temp;
	cout << score[0];
	cout << score[1];
	cout << score[2];
	return 0;

}

