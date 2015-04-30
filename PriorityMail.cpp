#include <iostream>
#include <string>
#include <sstream>
#include "PriorityMail.h"
using namespace std;

istream& operator >> (istream& is, Zone& e) {
    int iVal;
    is >> iVal;
    e = static_cast<Zone>(iVal);
    return is;
}

istream& operator >>(istream &s, PriorityMail &pMail) {
    s >> pMail.urgent;
    s >> pMail.area;
    s >> pMail.weight;
    s >> pMail.price;
}
