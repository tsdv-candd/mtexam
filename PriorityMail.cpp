#include <iostream>
#include <string>
#include <sstream>
#include "PriorityMail.h"
using namespace std;

//Define constructor
PriorityMail::PriorityMail(Zone z, double w, bool urg) {
    area = z;
    weight = w;
    urgent = urg;
}

double PriorityMail::calculatePostage() {
    double dVal = 0;
    //For national mail
    if (area == national) {
        if(weight < 11 && (!urgent)) {
            dVal = 5;
        } else if (weight < 11 && (urgent)) {
            dVal = 9;
        } else if (weight >= 11 && (!urgent)) {
            dVal = 6 * weight;
        } else if (weight >= 11 && (urgent)) {
            dVal = 10 * weight;
        }
    }
    //For international mail
    else if (area == international) {
        if(weight < 11 && (!urgent)) {
            dVal = 8;
        } else if (weight < 11 && (urgent)) {
            dVal = 15;
        } else if (weight >= 11 && (!urgent)) {
            dVal = 8.5 * weight;
        } else if (weight >= 11 && (urgent)) {
            dVal = 16 * weight;
        }
    }
    return dVal;
}
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

