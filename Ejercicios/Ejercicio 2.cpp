#include <iostream>
using namespace std;

int main() {
	int fah = 0;
	cout << " Fahrenheit " << "   Celsius "<<endl;
	cout<< " "<<endl;
	while(fah<300){
		float cel = (fah -32)*5/float(9);
		//en entero 
		//int cel = (fah -32)*5/9;
		cout<< fah << "            "<<cel<<endl;
		cout<< " "<<endl;
		fah += 20;
	}
	
	
	return 0;
}

