#include "Birthday.h"

Birthday::Birthday(){
    year = 0;
    month = 0;
    day = 0;
}

Birthday::Birthday(int y, int m, int d){
    year = y;
    month = m;
    day = d;
}

void Birthday::printc(){
    cout << "Su cumpleaños es el : " << day <<" de "<< month << " de " << year<<endl;
    cout << endl;

}

int Birthday::edad(){
    if(month<5 || month == 5)
        return 2017 - year;
    else
        return 2017 - year - 1;
}
