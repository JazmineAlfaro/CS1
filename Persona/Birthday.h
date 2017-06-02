#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include <iostream>
#include <string>

using namespace std;

class Birthday{
public:
    int year;
    int month;
    int day;
public:
    Birthday();
    Birthday(int y, int m, int d);
    void printc();
    int edad();
};

#endif // BIRTHDAY_H
