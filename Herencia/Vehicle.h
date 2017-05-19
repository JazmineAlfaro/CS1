#include<iostream>
#include<string>

using namespace std;

class Vehicle{

protected:
    string license;
    int year;
public:
    Vehicle();
    Vehicle(const string &myLicense,const int myYear);
    const string &getLicense()const;
    const int getYear()const;
};


