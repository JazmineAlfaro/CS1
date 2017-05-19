#include "Vehicle.h"


Vehicle::Vehicle(){
    license = " ";
    year = 0;
}

Vehicle::Vehicle(const string &myLicense,const int myYear){
    license = myLicense;
    year = myYear;
}

const string Vehicle::&getLicense()const{
    return license;
}

const int Vehicle::getYear()const{
    return year;
}
