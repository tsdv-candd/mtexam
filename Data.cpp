#include "Data.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//Operator In
istream& operator >>(istream &s, Data &data) {
    cout << "Name? ";
    s >> data.name;
    cout << "Address? ";
    s >> data.address;
    cout << "City? ";
    s >> data.city;
    cout << "Zip code? ";
    s >> data.zip;
    return s;
}

//Operator output
ostream& operator << (ostream &s, Data &data) {
    s << "Name: " << data.name << endl;
    s << "address: " << data.address << endl;
    s << "City: " << data.city << endl;
    s << "zip: " << data.zip << endl;
    return s;
}