#include <iostream>

using namespace std;

int main()
{
    /*
    //Intercambio de posiciones en un arreglo de 4 elementos
    int arreglo[4];
    int c = 0;
    cout << "Ingrese numeros para el arreglo: " << endl;
    cin >> arreglo[0];
    cin >> arreglo[1];
    cin >> arreglo[2];
    cin >> arreglo[3];
    int temp;
    temp = arreglo[0];
    arreglo[0] = arreglo[3];
    arreglo[3]= temp;
    temp = arreglo[1];
    arreglo[1]=arreglo[2];
    arreglo[2]=temp;

    cout << arreglo[0];
    cout << arreglo[1];
    cout << arreglo[2];
    cout << arreglo[3];
    */

    /*
    //Intercambio de posiciones en un arreglo de n elementos
    int arreglo[10];
    int a,c=0;


    }

    for(a = 0;a < c/2; a++){
        int temp, fin = c-1-a;
        temp = arreglo[a];
        arreglo[a] = arreglo[fin];
        arreglo[fin]= temp;
    }

    for(a = 0; a < 10; a++ ){
        cout << arreglo[a] <<endl;
    }
    */
/*
    int arreglo[5];
    int a,c=0;
    for(a = 0; a < 5; a++ ){
        cout<< "Ingrese los elementos del arreglo: " <<endl;
        cin>>arreglo[a];
        c+=arreglo[a];
    }
    cout<<c<<endl;
    */

    int a,c;
    int arreglo[5];
    for(a = 0; a < 5; a++ ){
        cout<< "Ingrese los elementos del arreglo: " <<endl;
        cin>>arreglo[a];

    if(arreglo[a]>c)
        c = arreglo[a];

    }
    cout << c << endl;
    return 0;
}

