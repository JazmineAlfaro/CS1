#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int x;
	cout << "Ingrese el numero" << endl;
	cin >> x;
	while(x != -1){
		switch(x){
		case 0:
			cout<< "cero"<<endl;
			break;
		case 1:
			cout<< "uno"<<endl;
			break;
		case 2:
			cout<< "dos"<<endl;
			break;
		case 3:
			cout<< "tres"<<endl;
			break;
		case 4:
			cout<< "cuatro"<<endl;
			break;
		case 5:
			cout<< "cinco"<<endl;
			break;
		case 6:
			cout<< "seis"<<endl;
			break;
		case 7:
			cout<< "siete"<<endl;
			break;
		case 8:
			cout<< "ocho"<<endl;
			break;
		case 9:
			cout<< "nueve"<<endl;
			break;
		default:
			cout<< "N�mero no permitido"<<endl;
		}
		cout<< "Ingrese un numero"<<endl;
		cin >> x;
	}
	if (x == -1){
		cout<< "Termino el programa"<<endl;
		exit(0);
	}
	
	return 0;
}

