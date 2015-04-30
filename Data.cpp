#include "Data.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//Operator In
istream& operator >>(istream &s, Data &data) {
    s >> data.name;
    s >> data.address;
    s >> data.city;
    s >> data.zip;
    return s;
}

//Operator output
ostream& operator << (ostream &s, Data &data) {
    s << '(' << data.name << ", " << data.address << ", " << data.city << "," << data.zip <<')';
    return s;
}