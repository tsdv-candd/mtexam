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
    //double dVal = 0;
    //For national mail
    if (area == national) {
        if(weight < 11 && (!urgent)) {
            postage = 5;
        } else if (weight < 11 && (urgent)) {
            postage = 9;
        } else if (weight >= 11 && (!urgent)) {
            postage = 6 * weight;
        } else if (weight >= 11 && (urgent)) {
            postage = 10 * weight;
        }
    }
    //For international mail
    else if (area == international) {
        if(weight < 11 && (!urgent)) {
            postage = 8;
        } else if (weight < 11 && (urgent)) {
            postage = 15;
        } else if (weight >= 11 && (!urgent)) {
            postage = 8.5 * weight;
        } else if (weight >= 11 && (urgent)) {
            postage = 16 * weight;
        }
    }
    return postage;
}
istream& operator >> (istream& is, Zone& e) {
    int iVal;
    is >> iVal;
    e = static_cast<Zone>(iVal);
    return is;
}

istream& operator >>(istream &s, PriorityMail &pMail) {
    cout << "Urgent:(No - 0 /Yes - 1)? " << endl;
    s >> pMail.urgent;
    cout << "Weight:? " << endl;
    s >> pMail.weight;
    cout << "Zone (national - 0/international - 1):?" << endl;
    s >> pMail.area;
    //Mail::operator >>(s, &pMail);
    cout << "Address:" << endl;
    s >> pMail.addressee;
    cout << "Sender:" << endl;
    s >> pMail.sender;
    return s;
}

