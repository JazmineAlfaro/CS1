#include <iostream>

using namespace std;

int main()
{
    int x,y,z,w,a,b;
    float pi = 3.1416;
    cout <<"Ingrese el radio del circulo: ";
    cin >> x;
    cout <<"Ingrese el lado del cuadrado: ";
    cin >> y;
    cout <<"Ingrese la base del rectangulo: ";
    cin >> z;
    cout <<"Ingrese la altura del rectangulo: ";
    cin >> w;
    cout <<"Ingrese la altura del triangulo: ";
    cin >> a;
    cout <<"Ingrese la base del triangulo: ";
    cin >> b;
    cout << " " << endl;
    cout <<"El area del circulo es " << x*x*pi << endl ;
    cout <<"El area del cuadrado es " << y*y << endl ;
    cout <<"El area del rectangulo es " << z*w << endl ;
    cout <<"El area del triangulo es " << a*b/2 << endl ;

    return 0;
}

